#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "Student.h"
#include "Course.h"
#include "defs.h"

class Registration
{
  public:
    Registration(Student*, Course*);
    ~Registration();
    bool lessThan(Registration*) const;
    void print() const;
    Student* getStu() const;
  private:
    static int nextId;
    int id;
    Student* student;
    Course* course;
    
};

#endif