#include <iostream>
#include <string>
using namespace std;
//°òÂ¦10
  
int main()  
{
    int a,b;
    cin >> a >> b;
    while(1)
    {
        if(a < b)
            b = b % a;
        else
            a = a % b;
        if(a == 0)
        {
            cout << b<< "\n";
            break;
        }
        if(b == 0)
        {
            cout << a << "\n";
            break;
        }
    }
}
