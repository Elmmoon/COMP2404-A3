/*
Purpose: A boundary class that interacts with the end-user
*/

#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;


class View
{
  public:
    void showAdminMenu(int&);
    void showStudentMenu(string, int&);
    void printStr(string);
    void readInt(int&);
    void readStr(string&);
};

#endif
