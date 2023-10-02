#include "employee.h"

bool Employee::isBusy(){
    return busy;
}

void Employee::setName(const std::string &name){
    this->name = name;
}

void Employee::setTask(bool work, int inTasktype){
    switch (inTasktype){
    case 0:
        tasktype = A;
        break;
    case 1:
        tasktype = B;
        break;
    case 2:
        tasktype = C;
        break;
    default:
        break;
    }
    
    busy = true;
}

void Employee::getTaskInfo(const unsigned int managerId){
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