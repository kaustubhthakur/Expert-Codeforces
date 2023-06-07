#include<bits/stdc++.h>
using namespace std;
long long t,n,a,b;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<vector<int>>f(n+1,vector<int>());
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			f[a].push_back(b);
		}
		for(int i=1;i<=n;i++){
			sort(f[i].rbegin(),f[i].rend());
		}
		long long ans=0;
		for(int i=1;i<=n;i++){
			ans=accumulate(f[i].begin(),min(f[i].begin()+i,f[i].end()),ans);
		}
		cout<<ans<<"\n";
	}
    return 0;
}