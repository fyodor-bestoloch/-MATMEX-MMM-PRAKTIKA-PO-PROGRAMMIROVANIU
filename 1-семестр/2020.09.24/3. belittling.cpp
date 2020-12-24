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
    int *res=new int[b];
    for (int i=0;i<b;i++)
    res[i]=arr[i+h];
    return res;
}
int main()
{
  int N=10;
  int *arr1=new int[N];
  for (int i=0;i<N;i++)
  {
    arr1[i]=rand()%10;
    cout<<arr1[i]<< " ";
  }
  cout<<"\n";
  int *arr2=deleting(arr1, N);
  for (int i=0;i<N;i++) cout<<arr2[i]<<" ";
  delete [] arr1;
  delete [] arr2;
}
