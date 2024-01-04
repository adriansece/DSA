#include <iostream>
#include <stdio.h>
#include <string.h>             // IE = (5-6/2)*(1+3)
#include <mystack.h>
using namespace std;

void main(void)
{
    Stack <char> st;
    char IE[50]="(5-6/2)*(1+3);";

    char PE[50];
    int i=0; int j=0; int k=0;
    int n=strlen(IE);
    while(IE[i]!=':')
    {
        for(i=0;i<n;i++)
            {
                if(isdigit(IE[i]))
                    PE[j++]=IE[i];
                else   
                    switch(IE[i])
                    {
                        case '(': st.push(IE[i]); break;
                        case ')': while(st.peek()!='(' && !st.isEmpty())
                        {
                            A=st.peek();
                            PE[j++]=A;
                            st.pop();
                        }
                        st.pop();
                        while(!st.isEmpty)
                        {
                            A=st.peek();
                            PE[j++]=A;
                            st.pop();
                        }
                            break;
                            default: st.push(IE[i]);
                    }
            }
        for(i=0;i<=j;i++)
            cout<<PE[i]<<" ";
        st.pop();
    }
}

