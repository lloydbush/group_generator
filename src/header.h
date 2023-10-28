#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <unistd.h>

int out_opt(); //prints options and takes option input

void add_student(std::vector<std::string>& ref_students); //1
void remove_student(std::vector<std::string>& ref_students); //2
bool continue_save(std::string file);
void save_students(std::vector<std::string> students,std::string studentFileName); //3
void read_students(std::vector<std::string>& ref_students,std::string& ref_studentFileName); //4
void out_students(std::vector<std::string> students); //5
void group_students(std::vector<std::string> students); //6
void group_num(std::vector<std::string> students); //7
void group(std::vector<std::string> students, int int_num_groups, int int_num_students);
void help_me(); //8
