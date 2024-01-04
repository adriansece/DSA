#include <iostream>
#include "mylist.h"
using namespace std;


int main()
{
    LinkedList<int> l;
    l.addFirst(89);
    l.addFirst(34);
    l.addLast(79);
    l.addLast(34);
    l.addFirst(89);
    l.printList();

    l.removeLastOccurrence(89);
    l.printList();

    l.removeLast();
    l.removeFirst();
    l.printList();

    return 0;
}