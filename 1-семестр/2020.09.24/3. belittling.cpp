#include<iostream>
using namespace std;
int* deleting(int *arr, int &b)
{
    int h=0;
    for (unsigned i=0;i<b;i++)
    {
        if (arr[i]%2==0)
        {
          int tmp=arr[h];
          arr[h]=arr[i];
          arr[i]=tmp;
          h++;
        }
    }
    b=b-h;
    for (int i=0;i<b;i++)
    arr[i]=arr[i+h];
    return arr;
    delete [] arr;
}
int main()
{
  int N;
  cin>>N;
  int *arr1=new int[N];
  for (int i=0;i<N;i++)
  {
    arr1[i]=rand()%4232;
    cout<<arr1[i]<< " ";
  }
  cout<<"\n";
  arr1=deleting(arr1, N);
  for (int i=0;i<N;i++) cout<<arr1[i]<<" ";
  delete [] arr1;
}
