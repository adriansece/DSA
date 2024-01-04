#include <iostream>
using namespace std;
#define NMAX 5
template<typename T> class Queue
{
    private:
        T queueArray[NMAX];
        int head, tail, size;
    public:
        int getHead()
        {
            return head;
        }
        int getTail()
        {
            return tail;
        }
        int isEmpty()
        {
            return(size==0);
        }
        void enqueue(T x)
        {
            if(size==NMAX)
            {
                cout<<"The queue is full"<<endl;
                return;
            }
            queueArray[tail]=x;
            tail=(tail+1)%NMAX;
            size++;
        }
        T dequeue()
        {
            if(isEmpty())
            {
                cout<<"The queue is empty."<<endl;
                T x;
                return x;
            }
            T x=queueArray[head];
            head=(head+1)%NMAX;
            size--;
            return x;
        }
        T peek()
        {
            if(isEmpty())
            {
                cout<<"The queue is empty."<<endl;
                T x;
                return x;
            }
            return queueArray[head];
        }
        Queue()
        {
            head=tail=size=0;
        }
};