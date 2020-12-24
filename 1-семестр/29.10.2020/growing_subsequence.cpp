#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int h=0, max=0, l=-1, n;
    cin>>n;
    int *arr=new int[n];
    cout<<"original array:"<<"\n";
    for (int i=0; i<n; i++)
    {
        arr[i]=rand()%n*n*n-n*(n/4);
        cout<<arr[i]<< " ";
        if (i>0)
        {
            if (arr[i]>=arr[i-1])
            {
                if (l==-1) l=i;
                h++;
            }
            else
            {
                if (h>max)
                {
                    l=i-h-1;
                    max=h;
                }
                h=0;
            }
        }
    }
    if (max==0)
    {
        cout<< "no growing subsequences here!";
        return 0;
    }
    cout <<"\n"<<"subsequence"<<"\n";
    int *arr1 = new int[max+1];
    for (int i=0; i<max+1; i++)
    {
        arr1[i]=arr[l+i];
        cout<<arr1[i]<<" ";
    }
    return 0;
}
