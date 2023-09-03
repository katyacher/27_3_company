#include <string>
#include <cassert>


class Manager;

class Employee{
    std::string name{"unknown"};
    bool busy = false;
    Manager::Type taskType;
    class Manager* manager = nullptr;
 public:
    Employee(class Manager* inManager): manager(inManager){
        assert(inManager != nullptr);
    }
    
    bool isBusy(){
        return busy;
    }

    void setName(const std::string &name){
        this->name = name;
    }

    void setTask(bool work, Manager::Type inTaskType)
    {
        taskType = taskType;
        busy = true;
    }

    int getIdTeam(){
        return manager->getId();
    }
};
   