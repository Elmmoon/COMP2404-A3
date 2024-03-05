#include <iostream>
using namespace std;

#include "CourseArray.h"

CourseArray::CourseArray()
  :size(0){}

CourseArray::~CourseArray(){
  for (int i=0; i<size; ++i) 
    delete elements[i];
}

void CourseArray::add(Course* c){
  if (size == MAX_ARR){
    cout << "ERROR:  Max number of courses has been reached" << endl;
    return;
  } 
  int i = 0;
  for (; i < size; i++){
    if (c->lessThan(elements[i])){
      for (int x = size; x > i; x--)
        elements[x] = elements[x-1];
      break;
    }
  }
  elements[i] = c;
  size++;
}

bool CourseArray::find(int id, Course** c) const{
    for (int i = 0; i < size; i++){
        if (elements[i]->getId() == id){
            *c = elements[i];
            return true;
        }
    }
    c = NULL;
    return false;
}

void CourseArray::print() const {
  for (int i = 0; i < size; i++)
    elements[i]->print();
}

void CourseArray::print(string term) const{
  for (int i = 0; i < size; i++){
    if (elements[i]->getTerm() == term)
      elements[i]->print();
  }
}

