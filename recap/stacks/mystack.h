
using namespace std;

#define NMAX 10
template<typename T>
class Stack
{
    private:
        T stackArray[NMAX];
        int topLevel;

    public:
        void push(T x)
        {
            if(topLevel >= NMAX-1)
            {
                cout<<"The stack is full!"<<endl;
                return;
            }
            stackArray[++topLevel]=x;
        }
        int isEmpty()
        {
            if(topLevel>=0) return 1;
            else return 0;
        }

T pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty."<<endl;
        T x;
        return x;
    }
    return stackArray[--topLevel];
}

T peek()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        T x;
        return x;
    }
    return stackArray[topLevel];
}

Stack() //constructor
{
    topLevel=-1; //stack empty at the beginning
}

~Stack() // destructor
{ 
}
};