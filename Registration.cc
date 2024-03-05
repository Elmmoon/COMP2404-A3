#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Registration.h"

int Registration::nextId = REG_ID;

Registration::Registration(Student* s, Course* c)
    : id(nextId++), student(s), course(c){}

Registration::~Registration(){}

bool Registration::lessThan(Registration* reg) const {
    return course->lessThan(reg->course);
}

void Registration::print() const {
    cout << left << setfill(' ') << setw(6) << id << " " << setw(13)
        << student->getName() << " " << setw(4) << course->getTerm()
        << " " << course->getCourse() << endl;
}

Student* Registration::getStu() const{
    return student;
}