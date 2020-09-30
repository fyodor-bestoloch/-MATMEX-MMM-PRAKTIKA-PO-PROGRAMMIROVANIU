  #include <iostream>
  using namespace std;
  int main (){
    int N,g,c=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
      cin>>g; c=c+(g*g*g);
    }
    cout<<(c/N);
    return 0;
  }
