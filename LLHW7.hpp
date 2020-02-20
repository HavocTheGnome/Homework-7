#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "NodeHW7.hpp"
#include <iostream>

class LinkedList 
{
private:
    Node* head;
    int count;
    Node* runToEndOfList();
    
public:
    LinkedList();
    void addFront(int payload);
    int getFront();
    int removeFront();
    //hw 3 methods below
    void addEnd(int payload);
    int getEnd();
    int removeEnd();
    void display();
    void addAtIndex(int payload, int index);
    int getIndex(int index);
    int removeIndex(int index);
    void sortIndex();
};
#endif /* LinkedList_hpp */