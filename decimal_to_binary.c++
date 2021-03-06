#include <iostream>
using namespace std;
long dtb(int n)
{
    long binary = 0;
    int i = 1;
    while (n != 0)
    {
        int rem = n % 2;
        n = n / 2;
        binary = binary + rem * i;
        i *= 10;
    }
    return binary;
}
int main()
{
    int n;
    cout << "Enter the decimal number:";
    cin >> n;
    long binary = dtb(n);
    cout << "Your binary number is:" << binary;
    return 0;
}