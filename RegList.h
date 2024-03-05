#ifndef REGLIST_H
#define REGLIST_H

#include "Registration.h"
#include "defs.h"

class RegList{
  class Node{
    public:
      Registration* data;
      Node*    next;
  };


  public:
    RegList();
    ~RegList();
    RegList(RegList&, Student*);
    void add(Registration*); 
    void print() const;
    void cleanData();
  private:
    Node* head;
    Node* tail;
    
};

#endif

