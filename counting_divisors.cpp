#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;
const ll N = 1e6+1;

vector<ll> spf(N);

void sieve(){
    for(ll i=0;i<=N;i++) spf[i] = i;
    
    for(ll i=2;i*i<=N;i++){
        if(spf[i]==i){
            for(ll j=i*i;j<=N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}

void usool()
{
  ll n; cin>>n;
  ll ans = 1;
  while(n>1){
      ll spff = spf[n];
      ll power =0 ;
      while(n%spff==0){
          power++;
          n/=spff;
      }
      
      ans*=(power+1);
  }
  cout<<ans<<endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    sieve();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        usool();
    }
    return 0;
}