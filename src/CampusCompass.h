#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "classes.h"

using namespace std;

// Aryan Thakur 75483598

class CampusCompass {
private:
    map<std::string,classes> class_str_to_number;
    array<array<,58>
public:
        // Think about what helper functions you will need in the algorithm
        CampusCompass(); // constructor
    bool parse_csv(const string &edges_filepath, const string &classes_filepath);
    bool parse_command(std::string command_str, std::ostream& os = std::cout);
    bool insert(string student_name, int student_id, string residence_location_id, vector<string> class_codes);

};
