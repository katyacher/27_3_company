#pragma once
#include <string>
#include "manager.h"
class Manager;

class Employee{
    std::string name{"unknown"};
    bool busy {false};
    Manager::Task taskType;
    //class Manager* manager = nullptr;
 public:
     /*  Employee(class Manager* inManager): manager(inManager){
        assert(inManager != nullptr);
    }
    */
    bool isBusy();
    void setName(const std::string &name);
    void setTask(bool work, Manager::Task inTaskType);
    int getTask(const unsigned int managerId);
};
   