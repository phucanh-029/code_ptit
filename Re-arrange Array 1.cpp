#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin >> T;
    while ( T-- ){
        int n; cin >> n;
        vector<ll> a(n), res(n, -1);
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(auto v : a) if ( v < n && v != -1) res[v] = v;
        for(auto v : res) cout << v << " ";
        cout << endl;
    }
    return 0;
}
