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
    unsigned int count_of_busy_workers{0};
    std::vector <Manager*> teams;

public:
    Boss(const int inCount_of_team = 0);
    ~Boss();
    
    unsigned int setBossCommand(unsigned int command);
    
};