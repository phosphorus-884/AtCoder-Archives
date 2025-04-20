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
	string s;cin>>s;
	int n = s.size();
	int ans =0;
	rep(i,n-2){
		for(int j=i+1;j<n-1;j++){
			if(2*j-i>=n) break;
			if(s.at(i)=='A' and s.at(j)=='B' and s.at(2*j-i)=='C')
				ans ++;
		}
	}
	cout <<ans << endl;
	return 0;
}