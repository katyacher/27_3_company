#include "manager.h"


Manager::Manager(int inNumber_of_workers){
    id = ++id; 
    for(int i = 0; i < inNumber_of_workers; i++){
        Employee* worker = new Employee(this);
        workers[i] = worker;
    }
};

Manager::~Manager(){  
    for(int i = 0; i < number_of_workers; i++){
        delete workers[i];
    }   
};


    
int Manager::getId(){
    return id;
} 

    
