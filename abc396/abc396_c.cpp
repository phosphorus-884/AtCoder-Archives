#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
#define pb push_back
#define rep(i, n) for (int i = 0; i < (n); i++)
#define Yes(b) ((b) ? "Yes" : "No")
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}
template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}
template <typename T> inline T lcm(T a, T b) {return (a * b) / gcd(a, b);}
template <typename T> inline T ceil(T a,T b) {return (a+(b-1))/b;}
template <typename T> inline T floor(T a,T b) {return a/b;}

int main(){
	int n,m;cin>>n>>m;
	vector<int> b(n);
	rep(i,n) cin>>b.at(i);
	vector<int> w(m);
	rep(i,m) cin>>w.at(i);
	sort(b.rbegin(),b.rend());
	sort(w.rbegin(),w.rend());
	ll bs=0,ws=0,mw=0;
	ll ans = 0;
	rep(i,n){
		bs += b.at(i);
		if(i<m)ws += w.at(i);
		chmax(mw,ws);
		chmax(ans,bs+mw);
	}
	cout<<ans<<endl;
	return 0;
}