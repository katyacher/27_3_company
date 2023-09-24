#pragma once
#include <string>
#include <iostream>
#include "tasktype.h"


class Employee{
    std::string name{"unknown"};
    bool busy {false};
    Task tasktype;
    //class Manager* manager = nullptr;
 public:
     /*  Employee(class Manager* inManager): manager(inManager){
        assert(inManager != nullptr);
    }
    */
    bool isBusy();
    void setName(const std::string &name);
    void setTask(bool work, Task inTasktype);
    void getTask(const unsigned int managerId);
};
   