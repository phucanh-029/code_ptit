#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n),v(n,0);
		int dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				a[i]=a[i]*2;
				a[i+1]=0;
			}
		}
		int j=0;
		for(int i=0;i<n;i++){
			if(a[i]!=0)v[j++]=a[i];
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";	
	}
}
