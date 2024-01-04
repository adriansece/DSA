#include <iostream>
using namespace std;
void primeNumbers(int n)
{
    int i;
    bool isPrime = true;
    if(n==0 || n==1)
        isPrime = false;
    
    for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                isPrime = false;
                break;
            }
        }
    if(isPrime)
    cout<<i<<" ";
    

}
int main()
{
    primeNumbers(25);
}