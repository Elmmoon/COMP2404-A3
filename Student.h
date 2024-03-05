#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
  public:
    Student(string, string, string);
    ~Student();
    bool lessThan(Student*) const;
    void print() const;
    string getNum() const;
    string getName() const;
  private:
    string number;
    string name;
    string majorPgm;
};

#endif