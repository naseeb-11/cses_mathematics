#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"
 
const ll M = 1e9 + 7;
const ll N = 1e6+1;
 
void usool()
{
   ll n;cin>>n;
   vector<ll> v(n);
   for(ll i=0;i<n;i++) cin>>v[i];
   
   ll mx = *max_element(all(v));
   
  vector<ll> f(mx+1,0);
  for(ll i=0;i<n;i++) f[v[i]]++;
  
  
  for(ll i=mx;i>=1;i--){
      ll mul = 0;
      for(ll j=i;j<=mx;j+=i){
          mul+=f[j];
          if(mul>=2){
              cout<<i<<endl;
              return;
          }
      }
  }
  cout<<1<<endl;
   
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
 
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        usool();
    }
    return 0;
}