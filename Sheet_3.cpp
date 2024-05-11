//Design an algorithm for computing the value of a polynomial at a point x,
// which runs in time that is at most O (n) in the worst case

#include<iostream>
using namespace std;

int main(){
    int n,sum=0,po=1,x; 

    cout<<"enter degree of polynomial: "; 
    cin>>n; 

    int *coff = new int[n+1]; 
    cout<<"enter x value: "; 
    cin>>x; 

    for(int i=0;i<=n;i++) 
    { 
    cout<<" coff x^"<< i <<" = "; 
    cin>>coff[i]; 
    sum+= coff[i]*po; 
    po*=x; 
    } 
    cout<<"result = "<<sum<<endl; 
}