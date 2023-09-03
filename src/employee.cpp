#include "employee.h"

bool Employee::isBusy(){
    return busy;
}

void Employee::setName(const std::string &name){
    this->name = name;
}

void Employee::setTask(bool work, Manager::Task inTaskType){
    taskType = inTaskType;
    busy = true;
}

int Employee::getTask(const unsigned int managerId){
    std::string type;
    switch (taskType){
    case Manager::A:
        type = "A";
        break;
    case Manager::B:
        type = "B";
        break;
    case Manager::C:
        type = "C";
        break;
    default:
        break;
    }

    std::cout << "Worker from the team № " << managerId << ": " << name << " execute task " << type << std::endl;
}