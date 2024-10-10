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
  vector<int> a(n);
  vector<char> b(n);
  rep(i, n) cin >> a.at(i)>>b.at(i);
  int ans=0;
  int ll=0,rr=0;
  rep(i, n){
    if(b.at(i)=='L'){
      if(!(ll == 0)) ans += abs(ll-a.at(i));
      ll=a.at(i);
    }else{
      if(!(rr == 0)) ans += abs(rr-a.at(i));
      rr=a.at(i);
    }
  }
  cout <<ans<<endl;
  return 0;
}