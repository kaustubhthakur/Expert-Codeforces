#include <bits/stdc++.h>
using namespace std;
int n,st,t,a[105],b[105],p[105];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
		for(int i=1;i<=n;i++)cin>>p[i];
		st=0;
		for(int i=0;i<n;i++)
		{
			st=max(st+(b[i]-a[i]+1)/2,b[i]);
			st+=a[i+1]-b[i]+p[i+1];
		}
		cout<<st<<endl;
	}
    return 0;
}