#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<string> a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a.begin(),a.end(),[](string x,string y){return x+y>y+x;});
		for(auto i:a)cout<<i;
		cout<<endl;
	}
}
