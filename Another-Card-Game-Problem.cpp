#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        int s1=n/9;
        int s2=m/9;
        if(n%9!=0)
          s1++;
        if(m%9!=0)
          s2++;
        if(s1<s2)
          cout<<"0 "<<s1<<endl;
        else
          cout<<"1 "<<s2<<endl;
    }
	return 0;
}
