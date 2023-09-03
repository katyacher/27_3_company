#include <iostream>
#include <vector>
#include "boss.h"
#include "manager.h"
#include "employee.h"


int main(int, char**){
    std::cout << "Hello, from 27_3_company!\n";
    Boss boss;

    std::cout << "Let's create a company!\n";
    std::cout << "Enter the number of team: " << std::endl;
    int count_of_team = 0;
    std::cin >> count_of_team;

    auto number_of_teams = boss.addTeam(count_of_team);
    for(auto i = 0; i < number_of_teams; ++i){
        std::cout << "Enter the number of workers in team №"<< i << ": ";
        int count_of_workers = 0;
        std::cin >> count_of_workers;
        for(int j = 0; j < count_of_workers; j++){
            auto worker = boss.addEmployee_to_team(i);
            worker->setName("Worker " + std::to_string(j));
        }
    }

    unsigned int busy_workers;

    do{
        std::cout << "Enter a command: ";
        int command = 0;
        std::cin >> command;
        busy_workers = boss.setBoss_command(command);
    } while(busy_workers != 0);
    
}
