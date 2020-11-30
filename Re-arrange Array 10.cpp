#include<bits/stdc++.h>
using namespace std;
int main(){
	int tes;cin>>tes;
	while(tes--){
		string s;
		cin>>s;
		stack<int> stk;
		int i;
		for(i = 0;i<s.length();i++){
			if(s[i]=='D')
				stk.push(i+1);
			else{
				cout<<i+1;
				while(!stk.empty()){
					cout<<stk.top();
					stk.pop();
				}
			}
		}
//		cout<<i+1;
		while(!stk.empty()){
			cout<<stk.top();
			stk.pop();
		}
		cout<<'\n';
	}
}

