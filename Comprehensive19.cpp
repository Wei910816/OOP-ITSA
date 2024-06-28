#include <iostream>  
using namespace std;  
  
  
//ºî¦X19  
int recursive(int n)  
{  
    int total;  
    if((n - 1) <= 0)  
        return 0;  
    total = (n + 1) * n * (n - 1);  
    return (total + recursive(n - 1));  
}  
int main() {  
    int input;  
    cin >> input;  
    int ans[input];  
    int n;  
    for (int i = 0; i < input; i++)  
    {  
         cin >> n;  
        ans[i] = recursive(n);  
    }  
    for (int i = 0; i < input; i++)  
        cout << ans[i] << endl;  
}  
