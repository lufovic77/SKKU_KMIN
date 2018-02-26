#include <bits/stdc++.h>
using namespace std;
 
 
struct Doll {
  int w;
  int v;
  Doll(int _w = 0, int _v = 0): w(_w), v(_v){}
  bool operator < (const Doll& rhs) const {
  	//cout<<"v: "<<v<<" rhs.v: "<<rhs.v<<endl;
    if (v != rhs.v) return v < rhs.v;
    return w < rhs.w;
  }
};
 
 
Doll dolls[6005];
int dp[6005];
int n;
int main() {
  while (cin >> dolls[n].w >> dolls[n].v) {
  	cout<<"1st:"<<dolls[n].w<<" 2nd: "<<dolls[n].v<<endl;
    ++n;
  }
  sort(dolls, dolls + n);
  for (int i = 1; i < 6005; ++i) dp[i] = 2e9;
   for (int i = 0; i < n; ++i) {
    for (int j = i; j >= 0; --j) {
    	cout<<j;
		}
    }
  }

