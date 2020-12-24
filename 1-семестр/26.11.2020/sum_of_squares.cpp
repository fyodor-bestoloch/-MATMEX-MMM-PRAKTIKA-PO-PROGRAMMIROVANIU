#include <bits/stdc++.h>
using namespace std;
int squares(int n)
{
    int f=0;
    int *dp=new int[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<=n;i++)
    {
        dp[i]=i;
        for(int x=1;x<=ceil(sqrt(i));x++)
        {
            int temp=x*x;
            if(temp>i) break;
            else
                dp[i]=min(dp[i], 1+dp[i-temp]);
        }
    }
    cout<<"squares:  ";
    int res=dp[n];
    if(res==1){
      cout<<n;
    }
    else{
    for(int j=0;j<4;j++){
      if(f==1) break;
      for(int u=0;u<=n;u++){
        if(dp[n]==1){
          cout<<n<<" ";
          f++;
          break;
        }
        if((dp[u]==1)&&((dp[n-u]==1)||(dp[n]-dp[n-u]==1))){
          cout<<u<<" ";
          n=n-u;
        }
      }
    }
  }
    delete[] dp;
    cout<<"\n";
    cout<<"kolvo of ways:  ";
    return res;
}
int main()
{
    int n=0;
    cin>>n;
    cout<<squares(n);
    return 0;
}
