#include <iostream>
#include "boss.h"
#include "manager.h"


Boss::Boss(const int inCount_of_team): count_of_team(inCount_of_team){};


Boss::~Boss(){
    for(int i = 0; i < count_of_team; i++){
        delete teams[i]; // если с вектором, то цикл for each: auto team: teams delete team
    }
}

int Boss::addTeam(const int inCount_of_team){
    if(inCount_of_team <=0)
         return  count_of_team = 0;
    count_of_team = inCount_of_team;

    for(int i = 0; i < count_of_team; ++i)
    {
        Manager* team = new Manager;
        teams[i] = team; // либо вектор teams.push_back(team);
    }
     return count_of_team = sizeof(teams)/sizeof(Manager); //вернуть размер массива
}

int Boss::getCount_of_team(){
    return count_of_team;
}

Employee* Boss::addEmployee_to_team(const int managerId){
    return teams[managerId]->addEmployee();
}

unsigned int Boss::setBoss_command(unsigned int command){
     count_of_workers_in_each_team = 0;
     for(int i = 0; i < count_of_team; ++i){
        teams[i]->addTask(command);
        count_of_workers_in_each_team += teams[i]->setTask_to_workers();
     }
     /*
    for (auto worker : teams){
            worker->addTaskSize(command);
            count_of_workers_in_each_team += worker->distributionOfTask();
    }
    */
    return count_of_workers_in_each_team;
}

/*
Manager* getTeamsAt(int index) {
    if(index < 0) return nullptr;
    return teams[index];
}
*/


   