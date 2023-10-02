#include <iostream>
#include <vector>
#include "boss.h"
#include "manager.h"
#include "employee.h"


int main(int, char**){
    std::cout << "Hello, from 27_3_company!\n";
    std::cout << "Let's create a company!\n";
    std::cout << "Enter the number of team: " << std::endl;
    int count_of_team = 0;
    std::cin >> count_of_team;
    Boss* boss = new Boss(count_of_team);

    unsigned int busy_workers;

    do{
        std::cout << "Enter a command: ";
        int command = 0;
        std::cin >> command;
        busy_workers = boss->setBoss_command(command);
    } while(busy_workers != 0);
    
    delete boss;
}
