#include "LLHW7.hpp"
#include <iostream>

int main()
{
    LinkedList* ll = new LinkedList(); //some change
    ll->addFront(1);
    ll->addFront(2);
    ll->addEnd(3);
    ll->addFront(4);
    ll->display();
    ll->sortIndex();
    ll->display();
    
    delete ll;
}