#include <vector>
#include "employee.h"

class Manager {

public:
    enum Type{
        A,
        B,
        C
    };

private:
    int id{0};
    std::vector<Employee*> workers;//team
    int number_of_workers;
    
public: 
    Manager(unsigned int inNumber_of_workers){
        id = ++id; 
        for(int i = 0; i < number_of_workers; i++){
            Employee* worker = new Employee();
            workers[i] = worker;
        }
    };

    ~Manager(){  
        for(int i = 0; i < number_of_workers; i++){
            delete workers[i];
        }   
    };

    Employee* getWorkersAt(int index);

};