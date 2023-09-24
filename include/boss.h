#pragma once
#include <iostream>
#include <string>
#include "manager.h"
#include "employee.h"

class Manager;
class Employee;

class Boss{
    int count_of_team{0};
    int count_of_workers_in_each_team{0};
    Manager** teams = nullptr;//можно вектор std::vector<Manager *> manager;

public:
    Boss(const int inCount_of_team = 0);
    ~Boss();
    
    int addTeam(const int inCount_of_team);
    int getCount_of_team();

    Employee* addEmployee_to_team(const int managerId);
    unsigned int setBoss_command(unsigned int command);
    
};