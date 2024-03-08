/*
Purpose: A collections class that contains a statically-allocated
         array of Student object pointers.
*/

#ifndef STUARRAY_H
#define STUARRAY_H

#include "Student.h"
#include "defs.h"

class StuArray{
  public:
    StuArray();
    ~StuArray();
    void add(Student*);
    bool find(string, Student**) const;
    void print() const;

  private:
    Student* elements[MAX_ARR];
    int   size;
};

#endif

