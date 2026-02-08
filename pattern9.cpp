 
 

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *




 #include<bits/stdc++.h>
 using namespace  std;

 void print(int n){
    for (int i = 1; i <=2*n-1; i++)
    {
        int star = i;
        if (i>n) star= 2*n-i;
        for ( int j=1; j <=star ; j++){
            cout<<"*";
        }
      
        cout<< endl;
    }
    
 }

 int main (){
    int n ;
    cout<<"give the no of rows to be printed ..."<<endl;
    cin>>n;
    cout <<endl ;
    print(n);
 }