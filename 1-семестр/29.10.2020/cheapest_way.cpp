#include <iostream>
using namespace std;
int main (){
int a, b, l=0, h=0,f;
cin>>a>>b;
int A[a][b];
for (int i=0;i<a;i++){
  for (int j=0;j<b;j++){
    cin>>A[i][j];
  }
}
 for (int i=0;i<a;++i){
     cout<<"\n";
     for (int j=0;j<b;j++){
            cout<<A[i][j]<<"  ";
        }
 }
 int B[a][b];
 for(int y=0;y<a;y++){
     for(int x=0;x<b;x++){
         B[y][x]=100000;
     }
 }
 B[0][0]=A[0][0];
 for (l=0;l<a;l++){
     for (h=0;h<a;h++){
         f=B[l][h];
         if((l!=a-1)&&(f+A[l+1][h]<=B[l+1][h])){
                   B[l+1][h]=f+A[l+1][h];
                }
         if((h!=b-1)&&(f+A[l][h+1]<=B[l][h+1])){
                    B[l][h+1]=f+A[l][h+1];
         }
         if((l!=a-1)&&(h!=b-1)&&(f+A[l+1][h+1]<=B[l+1][h+1])){
                   B[l+1][h+1]=f+A[l+1][h+1];
         }
     }
 }
 cout<<B[a-1][b-1];
 return 0;
}
