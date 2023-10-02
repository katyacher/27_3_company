#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "manager.h"
#include "employee.h"

class Manager;
class Employee;

class Boss{
    int count_of_team{0};
    unsigned int count_of_workers_in_each_team{0};
    std::vector <Manager*> teams;

public:
    Boss(const int inCount_of_team = 0);
    ~Boss();
    
    unsigned int setBoss_command(unsigned int command);
    
};