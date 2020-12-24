#include <iostream>
using namespace std;
int binpow(int x, int n){
  if(n==0) return 1;
  if(n%2==1) return
x*binpow(x,n-1);
  if(n%2!=1) return
binpow(x*x,n/2);
return 0;
}
int main (){
int a,b;
cout<<"the number:  "; cin>>a;
cout<<"to the power of:  "; cin>>b;
cout<<binpow(a,b);
return 0;
}
