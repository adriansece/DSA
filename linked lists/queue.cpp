#include <iostream>
#include "mylist.h"
using namespace std;

template<typename T>class Queue
{
    private:
        LinkedList<T> ll;
    public:
        void enqueue(T x)
        {
            ll.addLast(x);
        }

        T dequeue()
        {
            if(isEmpty())
            {
                T x;
                return x;
            }
            T x=ll.pfirst->info;
            ll.removeFirst();
            return x;
        }

        T peek()
        {
            if(isEmpty)
            {
                T x;
                return x;
            }
            return ll.pfirst->info;
        }

        int isEmpty()
        {
            return(ll.isEmpty());
        }
};