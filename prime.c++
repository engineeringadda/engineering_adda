#include<iostream>
using namespace std;
void prime(int n)
{
    int div=0;
    for(int i=2;i<n/2;i++)
    {
        if (n%i==0)
        {
            div++;
        }
    }
    if(div>0)
    {
        cout<<n<<" is not a prime number.";
    }
    else{
        cout<<n<<" is a prime number.";
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    prime(n);
    return 0;
}