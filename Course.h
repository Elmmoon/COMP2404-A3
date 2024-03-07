#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

#include "defs.h"

class Course
{
  public:
    Course(string = "N/A", string = "N/A", int = 0, char = '?', string = "N/A");
    ~Course();
    bool lessThan(Course*) const;
    void print() const;
    int getId() const;
    string getTerm() const;
    string getCourse() const;

  private:
    static int nextId;
    int id;
    string term;
    string subject;
    int code;
    char section;
    string instructor;
};

#endif