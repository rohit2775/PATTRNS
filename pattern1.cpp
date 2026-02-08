 
// * 
// * * 
// * * * 
// * * * * 
  
  #include<bits/stdc++.h>
 using namespace  std;

 void print(int n){
   for (int i = 0; i < n; i++)
   {
     for (int  j = 0; j <=i; j++)
     {
        cout<<"* ";
     }
     
     cout<<endl;
   }
   
 }

 int main (){
    int n ;
    cout<<"give the no of rows to be printed ..."<<endl;
    cin>>n;
    print(n);
 }


