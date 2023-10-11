#include<iostream>
using namespace std;
int main()

// way 1;
// {
//     int x,i,res=0;
//     cout<<"Enter the value of x";
//     cin >>x;
//     for(i=1; i<=x; i++ ){
//         if(x%i==0){
//          res++;
//         }
//     }
//     if(res==2){
//     cout<<"it is prime number";
//     }
//     else 
//     cout<<"it is not a prime number";
// return 0;
// }
// way 2


{
    int x,i,res=0;
    cout<<"Enter the value of x \n";
    cin>>x;
    for(i=2; i<=(x/2); i++)
    {
        if(x%i==0){
            res++;
        }
    }
    if(res==0){
        cout<<x <<" is a prime number";
    }
    else
        cout<<x << " is not a prime number";
    return 0;


 }




