#include <iostream>
#include <string>
using namespace std;
//¤¤¤å-°}¦C1-2
  
int main()  
{
    int input[6];
    cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];
    for (int i = 5; i >= 0; i--)
    {
        cout << input[i];
        if(i==0)
        {
            cout << "\n";
            break;
        }
        cout << " ";
    }
}
