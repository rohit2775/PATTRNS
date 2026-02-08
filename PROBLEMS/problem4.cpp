 

//    A
//   ABA
//  ABCBA
// ABCDCBA

 
 
 
 #include<bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++)
    {
    
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }

        char ch = 'A';

    
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch++;
        }

        ch -= 2;

    
        for (int j = 0; j < i; j++)
        {
            cout << ch;
            ch--;
        }

        cout << endl;
    }
}

int main (){
    int n;
    cout << "give the no of rows to be printed ..." << endl;
    cin >> n;
    cout << endl;

    print(n);
}
