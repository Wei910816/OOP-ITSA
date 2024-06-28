#include <iostream>
#include <string>
using namespace std;
//°òÂ¦ÃD¥Ø12

int recursive(int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 2;
    return recursive(n - 1) + recursive(n / 2);
}

int main()
{
    int k;
    cin >> k;
    cout << recursive(k) << "\n";
}
