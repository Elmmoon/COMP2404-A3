#ifndef CONTROL_H
#define CONTROL_H

#include "School.h"
#include "View.h"

class Control{
  public:
    Control();
    ~Control();
    void launch();
    
  private:
    void initStudents(School*);
    void initCourses(School*);
    School* school;
    View view;

};

#endif
