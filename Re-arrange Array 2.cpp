#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;cin>>n;
		vector<ll> a(n),res(n,0);
		for(int i=0;i<n;i++)cin>>a[i];
		int j=0;
		for(int i=0;i<n;i++){
			if(a[i]!=0)res[j++]=a[i];
		}
		for(int i=0;i<n;i++)cout<<res[i]<<" ";
		cout<<"\n";
	}
}
