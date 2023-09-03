#pragma once
#include <iostream>
#include <string>
#include "manager.h"
#include "employee.h"
#include <cassert>

class Boss{
    int count_of_team;
    int count_of_workers_in_each_team;
    Manager** teams = nullptr;

public:
    Boss(int inCount_of_team, int inCount_of_workers_in_each_team){
        assert(inCount_of_team >= 0);
        teams = new Manager*[inCount_of_team];
        for(int i = 0;i < inCount_of_team; i++){
            teams[i] = new Manager(inCount_of_workers_in_each_team);
        }
    }
    ~Boss(){
        for(int i = 0;i < count_of_team; i++){
            delete teams[i];
        }
    }
};