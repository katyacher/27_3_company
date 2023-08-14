#include <string>

class Employee{
    std::string name{"unknown"};
    bool busy = false;
    Manager::Type taskType;
 public:
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
};
   