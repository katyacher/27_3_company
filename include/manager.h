#pragma once
#include <iostream>
#include <vector>
#include "employee.h"

class Employee;

class Manager {

public:
    

private:
    static unsigned int id;
    unsigned int managerId{0};
    std::vector<Employee*> workers;//team
    int tasks{0};
    unsigned int number_of_workers{0};
    unsigned int free_workers{0};
    
public: 
    Manager();
    ~Manager();

    Employee* addEmployee();
    void addTask(unsigned int command);
    unsigned int setTask_to_workers();
    int getId();
    
};