#include <iostream>
using namespace std;

#include "RegList.h"

RegList::RegList() 
  : head(NULL), tail(NULL) {}

RegList::~RegList(){
  Node* currNode = head;
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

RegList::RegList(RegList& otherList, Student* stu)
  : head(NULL), tail(NULL) {
  Node* currNode = otherList.head;

  while (currNode != NULL) {
    if (currNode->data->getStu() == stu)
      add(currNode->data);
    currNode = currNode->next;
  }
}


void RegList::add(Registration* reg){
  Node* newNode = new Node;
  newNode->data = reg;
  newNode->next = NULL;
  Node* currNode = head;
  Node* prevNode = NULL;

  while (currNode != NULL) {
    if (newNode->data->lessThan(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == NULL)
    tail = newNode;
  if (prevNode == NULL) 
    head = newNode;
  else 
    prevNode->next = newNode;

  newNode->next  = currNode;
}


void RegList::cleanData(){
  Node* currNode = head;
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    currNode = nextNode;
  }
}

void RegList::print() const{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  } 
  cout << "HEAD: ";
  if (head != NULL)
    head->data->print();
  else
    cout << "NONE" << endl;

  cout << "TAIL: ";
  if (tail != NULL)
    tail->data->print();
  else
    cout << "NONE" << endl;
}


