/*
Purpose: A collections class that contains a statically-allocated
         array of Course object pointers.
*/

#ifndef COURSEARRAY_H
#define COURSEARRAY_H

#include "Course.h"
#include "defs.h"

class CourseArray{
  public:
    CourseArray();
    ~CourseArray();
    void add(Course*);
    bool find(int, Course**) const;
    void print() const;
    void print(string) const;

  private:
    Course* elements[MAX_ARR];
    int   size;
};

#endif

