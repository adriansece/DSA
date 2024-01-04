#include <iostream>
#include "mylist.h"
using namespace std;
template<typename T>class Stack
{
    private:
        LinkedList<T> ll;
    public:
        void push(T x)
        {
            ll.addLast(x);
        }

        T pop()
        {
            if(isEmpty())
            {
                T x;
                return x;
            }
            T x=ll.plast->info;
            ll.removeLast();
            return x;
        }

        T peek()
        {
            if(isEmpty())
            {
                T x;
                return x;
            }
            return ll.plast->info;
        }
        int isEmpty()
        {
            return(ll.isEmpty());
        }
};