#include <iostream>
using namespace std;

#include "StuArray.h"

StuArray::StuArray()
  :size(0){}

StuArray::~StuArray(){
  for (int i=0; i<size; ++i) 
    delete elements[i];
}

void StuArray::add(Student* s){
  if (size == MAX_ARR){
    cout << "ERROR:  Max number of students has been reached" << endl;
    return;
  } 
  int i = 0;
  for (; i < size; i++){
    if (s->lessThan(elements[i])){
      for (int x = size; x > i; x--)
        elements[x] = elements[x-1];
      break;
    }
  }
  elements[i] = s;
  size++;
}

bool StuArray::find(string num, Student** s) const{
    for (int i = 0; i < size; i++){
        if (elements[i]->getNum() == num){
            *s = elements[i];
            return true;
        }
    }
    s = NULL;
    return false;
}

void StuArray::print() const {
  for (int i = 0; i < size; i++)
    elements[i]->print();
}



