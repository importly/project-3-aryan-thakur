#include <iostream>

#include "CampusCompass.h"

using namespace std;

// Aryan Thakur 75483598

int main(){
    CampusCompass compass;
    compass.parse_csv("data/edges.csv", "data/classes.csv");
    std::string number_of_commands;
    getline(std::cin,number_of_commands);
    int num_commands = stoi(number_of_commands);
    while (num_commands > 0) {
        std::string command;
        getline(std::cin,command);
        compass.parse_command(command);
        --num_commands;
    }
}