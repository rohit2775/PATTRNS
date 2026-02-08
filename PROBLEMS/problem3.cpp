
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 


#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++)
    {
    
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }

        int num = 1;

    
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }
}

int main (){
    int n;
    cout << "give the no of rows to be printed " << endl;
    cin >> n;
    cout << endl;

    print(n);
}
