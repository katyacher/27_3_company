#include "employee.h"

bool Employee::isBusy(){
    return busy;
}

void Employee::setName(const std::string &name){
    this->name = name;
}

void Employee::setTask(bool work, Task inTasktype){
    tasktype = inTasktype;
    busy = true;
}

void Employee::getTask(const unsigned int managerId){
    std::string type;
    switch (tasktype){
    case A:
        type = "A";
        break;
    case B:
        type = "B";
        break;
    case C:
        type = "C";
        break;
    default:
        break;
    }

    std::cout << "Worker from the team № " << managerId << ": " << name << " execute task " << type << std::endl;
}