#include <iostream>
#include "team.h"
#include "employee.h"

int main(int, char**){
    std::cout << "Hello, from 27_3_company!\n";

    std::cout << "Let's create a company!\n";
    std::cout << "Enter the number of team: " << std::endl;
    int number_of_team = 0;
    std::cin >> number_of_team;

    std::cout << "Enter the number of workers in iach team: " << std::endl;
    int number_of_workers = 0;
    std::cin >> number_of_workers;

    std::cout << "Enter a command: ";
    int command = 0;
    std::cin >> command;

    std::srand(command + team.getNumber());
    int taskCount = std::rand()%(team->workers.size() + 1);


}
