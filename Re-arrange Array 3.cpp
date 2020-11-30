#include<iostream>
using namespace std;
void solution(){
	int n,k;
	cin>>n>>k;
	int *a=new int[n+1];
	for(int i=0;i<n;i++)cin>>a[i];
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]<=k)dem++;	
	}
	int max=0;
	for(int i=0;i<n-dem+1;i++){
		int s=0;
		for(int j=i;j<i+dem;j++){
			if(a[j]<=k)s++;
		}
		if(s>max)max=s;
	}
	cout<<dem-max;
	delete a;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		solution();
		cout<<"\n";
	}
}
