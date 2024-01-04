using namespace std;
#include <iostream>

#define NMAX 100
template<typename T> class Queue
{
    private:
        T queueArray[NMAX];
        int head, tail;
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
                return(head==tail);
            }
        void enqueue(T x)
        {
            if(tail>NMAX)
            {
                cout<<"The queue is full."<<endl;
                return;
            }
            queueArray[tail]=x;
            tail++;
        }
        T dequeue()
        {
            if(isEmpty())
            {
                cout<<"The queue is empty."<<endl;
                T x;
                return x;
            }
            T x = queueArray[head];
            head++;
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
        head=tail=0; //queue empty in the beginning.
    }    
};