#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

Student::Student(string num, string n, string p)
    : number(num), name(n), majorPgm(p){}

Student::~Student(){}

bool Student::lessThan(Student* stu) const{
    if (name < stu->name)
        return true;
    return false;
}

void Student::print() const{
    cout << left << setfill(' ') << setw(10) << number << " "
         << setw(10) << name << " " << majorPgm << endl;
}

string Student::getNum() const{
    return number;
}

string Student::getName() const{
    return name;
}