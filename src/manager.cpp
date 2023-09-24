#include <cstdlib>
#include <iostream>
#include "manager.h"
#include "employee.h"

unsigned int Manager::id{1};

Manager::Manager(){
    managerId = id++; 
};

Manager::~Manager(){  
    for(auto &worker: workers){
        delete worker;
    }   
};


Employee* Manager::addEmployee(){
   Employee * worker = new Employee;
   workers.push_back(worker);
   return worker;
}

void Manager::addTask(unsigned int command){
   std::srand(managerId + command);
   tasks = std::rand()%workers.size() + 1;
}

unsigned int Manager::setTask_to_workers(){
   if(free_workers >= workers.size()){
        std::cout<<"In the team № "<< managerId <<", all workers are busy" << std::endl;
        return 0;
   }
      
   for(int i = 0, j = 0; i < tasks && j < workers.size(); ++j){
      if(!workers[j]->isBusy()){
          workers[j]->setTask(true, static_cast<Task>(std::rand()%3));
          ++free_workers;
          ++i;
          workers[j]->getTask(managerId);
      }     
   }

   return free_workers;
}

int Manager::getId(){
    return managerId;
} 

    
