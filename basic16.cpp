#include <iostream>
#include <string>
using namespace std;
//°òÂ¦16
  
int main()  
{
    
    string str1;
    
    string str2;
    
    cin >> str1;
    cin >> str2;
    int ans = 0;
    for (int i = 0; i < (str2.size() - str1.size() + 1); i++)
    {
        for (int j = 0; j < str1.size(); j++)
        {
            if(str1[j] != str2[i + j])
                break;   
            if(j == (str1.size() - 1))
                ans++;
        }
    }
    cout << ans << "\n";
}
