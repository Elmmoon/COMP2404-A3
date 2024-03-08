/*
Purpose: A representation of a school where the courses take place in.
*/

#ifndef SCHOOL_H
#define SCHOOL_H

#include <string>
using namespace std;

#include "Student.h"
#include "Course.h"
#include "StuArray.h"
#include "CourseArray.h"
#include "RegList.h"

class School
{
  public:
    School(string = "N/A");
    ~School();
    void addStu(Student*);
    void addCourse(Course*);
    void addRegistration(Student*, Course*);
    bool findStu(string, Student**);
    bool findCourse(int, Course**);
    void printStudents();
    void printCourses();
    void printCourseByTerm(string);
    void printRegistrations();
    void printRegistrationsByStu(Student*);

  private:
    string name;
    StuArray students;
    CourseArray courses;
    RegList list;
};

#endif