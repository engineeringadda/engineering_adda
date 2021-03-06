#include<iostream>
using namespace std;
int gcd(int first, int second)
{
    if(first == 0)
    {
        return second;
    }
    else if(second == 0)
    {
        return first;
    }
    else if(first == second)
    {
        return first;
    }
    else if(first>second)
    {
        return gcd(first-second, second);
    }
    else
    {
        return gcd(first,second-first);

    }

}
int main()
{
    int first,second;
    cout<<"Enter the first number:";
    cin>>first;
    cout<<"Enter the second number:";
    cin>>second;
    cout<<"GCD of "<<first<<" & "<<second<<" is "<<gcd(first,second);
    return 0;
}
