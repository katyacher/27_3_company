#include <iostream>
#include "boss.h"
#include "manager.h"


Boss::Boss(int inCount_of_team): count_of_team(inCount_of_team){
    for(int i = 0; i < count_of_team; i++){
        std::cout << "Enter the number of workers in team №"<< i + 1 << ": " << std::endl;
        int count_of_workers = 0;
        std::cin >> count_of_workers;
        Manager* team = new Manager(count_of_workers);
        teams.push_back(team);
    }
};


Boss::~Boss(){
    for(auto team: teams){
        delete team; 
    }
}

unsigned int Boss::setBossCommand(unsigned int command){
    count_of_busy_workers = 0;
    
    for (auto team : teams){
            team->addTask(command);
            count_of_busy_workers += team->setTask_to_workers();
    }
    
    return count_of_busy_workers;
}




   