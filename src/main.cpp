#include <iostream>
#include <vector>
#include "team.h"
#include "employee.h"

int main(int, char**){
    std::cout << "Hello, from 27_3_company!\n";

    std::vector<Team*> company;

    std::cout << "Let's create a company!\n";
    std::cout << "Enter the number of team: " << std::endl;
    unsigned int number_of_team = 0;
    std::cin >> number_of_team;

    for(int i = 0; i < number_of_team; i++){
        std::cout << "Enter the number of workers in  team №" << i + 1  << std::endl;
        unsigned int number_of_workers = 0;
        std::cin >> number_of_workers;
        Team* team = new Team(i, number_of_workers); //номер команды, колличество рабочих
        company.emplace_back(team);
    } 
    
    std::cout << "Enter a command: ";
    int command = 0;
    std::cin >> command;

    std::srand(command + team.getNumber());
    int taskCount = std::rand()%(team->workers.size() + 1);


}
