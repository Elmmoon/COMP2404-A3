#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

#include "defs.h"

class Course
{
  public:
    Course(string, string, int, char, string);
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