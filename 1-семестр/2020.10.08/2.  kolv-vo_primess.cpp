#include <iostream>
using namespace std;
int main (){
  int kolvo,kolvo2=1,chislo=1,d,e=0,ost;
  cout<<"vvedite kolvo primes  "; cin>>kolvo;
  int *A=new int[kolvo]; *(A+1)=2;
  while(kolvo2!=kolvo){
    chislo++;
    for(d=1;d<=kolvo2;d++){
      ost=chislo%*(A+d);
      if(ost==0){
        d=kolvo2; e=3;
       }
     }
    if(e!=3){
      kolvo2++; *(A+kolvo2)=chislo;
    }
    e=0;
  }
  for(int g=1;g<=kolvo;g++){
    cout<<*(A+g)<<"  ";
  }
  delete [] A;
  return 0;
}//сложность алгоритма программы аналогична сложности решета Эратосфена
