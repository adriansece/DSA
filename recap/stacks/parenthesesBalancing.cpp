#include <stdio.h>
#include <string.h>
#include <iostream>
#include <mystack.h>
using namespace std;

char s[200]="([{()[]}(()[{}()])])(){}[{{()[]}()}]";
int error=0;

int main()
{
    Stack<char> stk;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            stk.push(s[i]);
        else if(stk.isEmpty())
        {
            cout<<"Empty stack"<<endl;
            error=1;
            break;
        }
        else
        {
            if ((s[i] == ')' && stk.peek() != '(') || 
                (s[i] == ']' && stk.peek() != '[') ||
                (s[i] == '}' && stk.peek() != '{'))
            {
                cout<<"Wrong parenthesis"<<endl;
                error=1;
                break;
            }      
            stk.pop();    

        }
    }
    if(!error && !stk.isEmpty)
    {
        cout<<"Stack not empty at the end"<<endl;
        else if(!error)
            cout<<"OK!";
        return 0;
    }
}