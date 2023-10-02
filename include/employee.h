#pragma once
#include <string>
#include <iostream>
#include "tasktype.h"


class Employee{
    std::string name{"unknown"};
    bool busy {false};
    Task tasktype;
 public:
    bool isBusy();
    void setName(const std::string &name);
    void setTask(bool work, Task inTasktype);
    void getTask(const unsigned int managerId);
};
   