#include <iostream>
#include "boss.h"


int main(int, char**){
    std::cout << "Hello, from 27_3_company!\n";

    std::cout << "Let's create a company!\n";
    std::cout << "Enter the number of team: " << std::endl;
    int count_of_team = 0;
    std::cin >> count_of_team;

    std::cout << "Enter the number of workers in each team" << std::endl;
    int count_of_workers = 0;
    std::cin >> count_of_workers;

    Boss* company = new Boss(count_of_team, count_of_workers);

    std::cout << "Enter a command: ";
    int command = 0;
    std::cin >> command;


    delete company;
}
