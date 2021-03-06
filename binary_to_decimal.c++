#include<iostream>
#include<math.h>
using namespace std;
int btd(long n)
{
    int i=0,decimal=0;
    while(n!=0)
    {
        int rem=n%10;
        int res=rem*pow(2,i);
        decimal=decimal+res;
        n=n/10;
        i++;
    }
    return decimal;
}

int main()
{
    long n;
    cout<<"Enter the binary number:";
    cin>>n;
    cout<<"Decimal number is:"<<btd(n);
    return 0;
}
