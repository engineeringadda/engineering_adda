#include <iostream>
using namespace std;
void primerange(int ll, int ul) //in the primerange function we passing the upper limit and lower limit
{
    
    for (int i = ll; i <= ul; i++)  //this for loop for range value
    {
        int div = 1;
        for (int j = 2; j <= i / 2; j++)    //this for loop for checking the prime number or not
        {
            
            if (i % j == 0) //checking the condition
            {
                div=0;  //if condition is true then set div==0
            }
        }
        if (div==1)
        {
            cout << i << "\t";
        }
          
    }
}
int main()
{
    int ll, ul;
    cout << "Enter the number range:";
    cin >> ll >> ul;    //reading the lower lmit value and upper limit value
    cout<<"Prime number is given range are:"<<endl;
    primerange(ll, ul); //call function
    return 0;
}