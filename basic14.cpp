#include <iostream>
#include <string>
using namespace std;
//°òÂ¦14
  
int main()  
{
    int input;
    int cnt = -1;
    int arr[1000];
    cin >> input;
    while(input > 0)
    {
        arr[++cnt] = input % 10;
        input /= 10;
    }
    int flag = 0;
    for (int i = 0; i < cnt; i++)
    {  
        if(arr[i] != arr[cnt])
            flag = 1;
        cnt--;
    }
    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";
}
