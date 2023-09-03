#include <iostream>
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
    Manager(int inNumber_of_workers);
    ~Manager();

    int getId();
    
};