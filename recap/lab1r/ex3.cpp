#include <iostream>
using namespace std;
int iterativeGCD(int a, int b) {
    int tmp;
    while (b != 0) {
        if (a < b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main()
{
    int x, y;
    cin>>x>>y;
    if(iterativeGCD(x,y)==1)
        cout<<"The numbers are relatively prime.";
    else cout<<"The numbers are not relatively prime.";
}
