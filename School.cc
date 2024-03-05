#include <iostream>
#include <string>
using namespace std;

#include "School.h"

School::School(string n)
    : name(n){}

School::~School(){
    list.cleanData();
}

void School::addStu(Student* stu){
    students.add(stu);
}

void School::addCourse(Course* course){
    courses.add(course);
}

void School::addRegistration(Student* stu, Course* course){
    list.add(new Registration(stu, course));
}

bool School::findStu(string num, Student** stu){
    return students.find(num, stu);
}

bool School::findCourse(int id, Course** course){
    return courses.find(id, course);
}

void School::printStudents(){
    cout << "\nSTUDENTS OF " << name << endl;
    students.print();
}

void School::printCourses(){
    cout << "\nCOURSES OF " << name << endl;
    courses.print();
}

void School::printCourseByTerm(string term){
    cout << "\nCOURSES OF " << name << " FOR TERM " << term << endl;
    courses.print(term);
}

void School::printRegistrations(){
    cout << "\nREGISTRATIONS OF " << name << endl;
    list.print();
}

void School::printRegistrationsByStu(Student* stu){    
    RegList temp(list, stu);
    cout << "\nREGISTRATIONS FOR " << stu->getName() << endl;
    temp.print();
    temp.cleanData();
}