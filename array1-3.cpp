#include <iostream>
#include <string>
using namespace std;
//¤¤¤å-°}¦C1-3
  
int main()  
{
    int input[6];
    cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];
    int ans = 0;
    for (int i = 5; i >= 0; i--)
    {
        ans += input[i] * input[i] * input[i];
    }
    cout << ans << "\n";
}
