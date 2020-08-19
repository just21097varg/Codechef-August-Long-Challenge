#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,result=0,a;
        cin>>n>>k;
        vector<int> v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int arr[n+1][n+1];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            mp.clear();
            for(int j=i;j<n;j++)
            {
                arr[i][j]=(j==0)?0:arr[i][j-1];
                if(mp.count(v[j]))
                {
                    if(mp[v[j]]==1)
                    {
                         arr[i][j]++;
                    }
                    arr[i][j]++;
                }
                mp[v[j]]++;
 
            }
 
        }
 
    result=1000000000;
    int tab=100;
    int dp[101][1001];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n+1;i++)
        dp[1][i]=arr[0][i-1];
    for(int i=2;i<=tab;i++)
    {
        dp[i][1]=0;
    }
    for(int i=2;i<=tab;i++)
    {
        for(int j=2;j<=n;j++)
        {
            int b=1000000000;
            for(int p=1;p<j;p++)
            {
                b=min(b,dp[i-1][p]+arr[p][j-1]);
            }
            dp[i][j]=b;
        }
    }
    for(int i=1;i<=100;i++)
    {
        result=min(i*k+dp[i][n],result);
    }
    cout<<result<<endl;
 
    }
 
}
