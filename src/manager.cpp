#include <cstdlib>
#include <iostream>
#include "manager.h"
#include "employee.h"

unsigned int Manager::id{1};

Manager::Manager(int inCount_of_workers): number_of_workers(inCount_of_workers){
    managerId = id++; 

    for(int i = 0; i < inCount_of_workers; i++){
        Employee* worker = new Employee();
        worker->setName("Worker " + std::to_string(i + 1));
        workers.push_back(worker);
    }
};

Manager::~Manager(){  
    for(auto &worker: workers){
        delete worker;
    }   
};

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
            workers[j]->setTask(true, std::rand()%3);
            ++free_workers;
            ++i;
            workers[j]->getTaskInfo(managerId);
        }     
    }

    return free_workers;
}


    
