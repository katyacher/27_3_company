#include <iostream>
#include <string>
#include "manager.h"
#include <cassert>

class Manager;
class Boss{
    int count_of_team;
   // int count_of_workers_in_each_team;
    Manager** teams = nullptr;

public:
    Boss(int inCount_of_team,  int count_of_workers_in_each_team): count_of_team(inCount_of_team){
        assert(inCount_of_team >= 0);
        teams = new Manager*[inCount_of_team];
        for(int i = 0;i < inCount_of_team; i++){
            teams[i] = new Manager(count_of_workers_in_each_team);
        }
    }
    ~Boss(){
        for(int i = 0;i < count_of_team; i++){
            delete teams[i];
        }
    }

    Manager* getTeamsAt(int index) {
        if(index < 0) return nullptr;
        return teams[index];
    }
};