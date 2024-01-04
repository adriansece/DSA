#include <iostream>
//#include "queue1.h"
#include "queue2.h"
using namespace std;
int main()
{
    Queue<char> q;
    q.enqueue('A');
    q.enqueue('F');
    q.enqueue('H');
    q.enqueue('S');
    q.enqueue('L');
    cout<<"Deq"<<q.dequeue()<<endl;
    cout<<"Head"<<q.getHead()<<endl;
    cout<<"Tail"<<q.getTail()<<endl;
    cout<<"Deq"<<q.dequeue()<<endl;
    cout<<"Head"<<q.getHead()<<endl;
    cout<<"Tail"<<q.getTail()<<endl;
    cout<<"Peek"<<q.peek()<<endl;
    cout<<"isEmpty"<<q.isEmpty()<<endl;
    q.enqueue('X');
    cout<<"Head"<<q.getHead()<<endl;
    cout<<"Tail"<<q.getTail()<<endl;
    return 0;
}