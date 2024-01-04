#include <iostream>
#include <queue1.h>
using namespace std;

template<typename T>class QueuedStack{
public:
    QueueCirc <T> queue1;
    QueueCirc<T> queue2;

    void push(T arg)
        queue1.enqueu(arg);
    
    T pop(){
        T value;
        while(queue1.getSize() != 1)
            queue2.enqueue(queue1.dequeue());
        value = queue1.peek();
        while(queue2.getSize() != 0)
            queue1.enqueue(queue2.dequeu());
    return value;
    }
    T peek(){
        T value;
        while(queue1.getSize() != 1)
            
    }
}