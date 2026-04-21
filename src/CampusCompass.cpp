#include "CampusCompass.h"

#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Aryan Thakur 75483598

CampusCompass::CampusCompass() {
    // initialize your object

}

bool CampusCompass::parse_csv(const string &edges_filepath, const string &classes_filepath) {
    ifstream edges(edges_filepath);
    ifstream classes_str(classes_filepath);
    if (!edges.is_open()) {
        std::cerr << "Failed to open edges\n";
        return false;
    }

    if (!classes_str.is_open()) {
        std::cerr << "Failed to open classes\n";
        return false;
    }



    std::string edge;
    std::getline(edges, edge);
    while (std::getline(edges, edge)) {

    }

    std::string class_;
    std::getline(classes_str, class_);
    while (std::getline(classes_str, class_)) {
        std::istringstream ss(class_);
        std::string class_code, location_id, start_time, end_time;

        std::getline(ss, class_code,  ',');
        std::getline(ss, location_id, ',');
        std::getline(ss, start_time,  ',');
        std::getline(ss, end_time,',');

        classes class_obj(class_code,location_id,start_time,end_time);

        class_str_to_number[class_code] = class_obj;
    }

    edges.close();
    classes_str.close();
    return true;
}


bool CampusCompass::parse_command(std::string command_str, std::ostream& os) {
    std::stringstream ss(command_str);
    std::string command;

    ss >> command;
    if (command == "insert") {

    } else if (command == "remove") {

    } else if (command == "dropClass") {

    } else if (command == "replaceClass") {

    } else if (command == "removeClass") {

    } else if (command == "toggleEdgesClosure") {

    } else if (command == "checkEdgeStatus") {

    } else if (command == "isConnected") {

    } else if (command == "printShortestEdges") {

    } else if (command == "printStudentZone") {

    } else if (command == "verifySchedule") {

    }
    return false;
}