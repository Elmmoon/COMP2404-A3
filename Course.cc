#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

int Course::nextId = COURSE_ID;

Course::Course(string t, string sub, int c, char s, string i)
    :  id(nextId++), term(t), subject(sub), code(c), section(s), instructor(i){}

Course::~Course(){}

bool Course::lessThan(Course* course) const{
    if (term < course->term)
        return true;
    else if(term == course->term){
        if (subject < course->subject)
            return true;
        else if(subject == course->subject){
            if (code < course->code)
                return true;
            else if(code == course->code){
                if (section < course->section)
                    return true;
            }
        }
    }
    return false;
}

void Course::print() const{
    cout << left << setfill(' ') << setw(5) << id << " Term: " << setw(5) << term 
        << " " << setw(4) << subject << " " << setw(4) << code << " " << setw(3) 
        << section << " Instr: " << left << instructor << endl; 
}

int Course::getId() const{
    return id;
}

string Course::getTerm() const{
    return term;
}

string Course::getCourse() const{
    return subject + " " + to_string(code) + "-" + section;
}