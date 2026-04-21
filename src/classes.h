//
// Created by aryan on 4/20/2026.
//

#ifndef PROJECT3_CLASSES_H
#define PROJECT3_CLASSES_H
#include <string>


class classes {
    std::string class_code;
    int location_id;
    std::string start_time;
    std::string end_time;



public:
    classes() = default;

    classes(const std::string & string, const std::string & location_id, const std::string & start_time, const std::string & end_time) : class_code(std::move(string)), location_id(std::stoi(location_id)),start_time(std::move(start_time)),end_time(std::move(end_time)){};
};


#endif //PROJECT3_CLASSES_H