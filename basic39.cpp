#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//°òÂ¦ÃD¥Ø39
  
int main()  
{
    int n;
    cin >> n;
    int score[3];
    
    while (n > 0) {
        cin >> score[0] >> score[1] >> score[2];
        
        if (score[0] >= 60 && score[1] >= 60 && score[2] >= 60)
            cout << "P" << endl;
        else if ((score[0] < 60 && (score[0] + score[1] + score[2]) >= 220) ||
                 (score[1] < 60 && (score[0] + score[1] + score[2]) >= 220) ||
                 (score[2] < 60 && (score[0] + score[1] + score[2]) >= 220))
            cout << "P" << endl;
        else if ((score[0] < 60 && score[1] >= 60 && score[2] >= 60) ||
                 (score[1] < 60 && score[0] >= 60 && score[2] >= 60) ||
                 (score[2] < 60 && score[0] >= 60 && score[1] >= 60))
            cout << "M" << endl;
        else if (score[0] >= 80 || score[1] >= 80 || score[2] >= 80)
            cout << "M" << endl;
        else
            cout << "F" << endl;
        
        n--;
    }
}

