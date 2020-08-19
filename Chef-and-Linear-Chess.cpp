#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,a;
        cin>>n>>m;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int j=0;
        while(j!=v.size() && m%v[j]!=0)
          j++;
        if(j==v.size())
          cout<<"-1"<<endl;
        else
        {
        long long int mi=m/v[j],s=v[j];
        for(int i=j+1;i<n;i++)
        {
            if(m%v[i]==0)
            {
                if(mi>((m/v[i])-1))
                {
                    mi=m/v[i]-1;
                    s=v[i];
                }
            }
        }
        cout<<s<<endl;
        }
    }
	return 0;
}
