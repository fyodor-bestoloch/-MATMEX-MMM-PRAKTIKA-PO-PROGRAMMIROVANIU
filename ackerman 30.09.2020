#include <iostream>
using namespace std;
int ack(int m,int n)
{
  if(m==0){
    return n+1;
  }
  if((n==0)&&(m!=0)){
    return ack(m-1,1);
  }
  if((m!=0)&&(n!=0)){
    return ack(m-1,ack(m,n-1));
  }
return 333;
}
int main (){
int r=0,a,b;
cin>>a>>b;
r=ack(a,b);
cout<<r;
return 0;
}
