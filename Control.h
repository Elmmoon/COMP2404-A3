/*
Purpose: The main control flow class. Allows the end-user to switch
         access the admin and student menus, view available courses 
         (filter by term is available), view enrolled students, view 
         current registrations (filter by student is available), 
         add registrations and exit the program.
*/

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
