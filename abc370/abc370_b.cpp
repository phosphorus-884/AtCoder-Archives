#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
#define pb push_back
#define rep(i, n) for (int i = 0; i < (n); i++)
#define Yes(b) ((b) ? "Yes" : "No")
// template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a >
// b; if (a > b) a = b; return compare;} template <typename T> inline bool
// chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return
// compare;} template <typename T> T gcd(T a, T b) {if (b == 0)return a; else
// return gcd(b, a % b);} template <typename T> inline T lcm(T a, T b) {return
// (a * b) / gcd(a, b);} template <typename T> inline T ceil(T a,T b) {return
// (a+(b-1))/b;} template <typename T> inline T floor(T a,T b) {return a/b;}

int main(){
  int n;
  cin>>n;
  vector<vector<int>> a(n,vector<int>(n));
  rep(i, n) for(int j=0;j<=i;++j){
    cin >> a.at(i).at(j);
    --a.at(i).at(j);
  }
  int ans=0;
  rep(i, n){
    if(ans>=i){
      ans = a.at(ans).at(i);
    }else{
      ans = a.at(i).at(ans);
    }
  }
  cout << ans+1 << endl;
  return 0;
}