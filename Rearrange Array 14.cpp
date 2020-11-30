#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int m,n;
		cin>>m>>n;
		int sMax=m*n;
		vector<int>a(sMax);
		for(int i=0;i<sMax;i++)cin>>a[i];
		sort(a.begin(),a.end());
		for(auto i:a)cout<<i<<" ";
		cout<<"\n";
	}
	return 0;
}
