#pragma GCC Optimize("O3")
#include<bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define el cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define pk pop_back
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(s) s.begin(),s.end()
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
struct node{int a,b,c,d,e,f;};
bool kt(node n,node m)
{
    return(n.a==m.a&&n.b==m.b&&n.c==m.c&&n.d==m.d&&n.e==m.e&&n.f==m.f);
}
void xuly()
{
    node n,m;
    cin>>n.a>>n.b>>n.c>>n.d>>n.e>>n.f;
    cin>>m.a>>m.b>>m.c>>m.d>>m.e>>m.f;
    if(kt(n,m)) return cout<<0<<'\n',void();
    queue<pair<node,int>>q;
    q.push({n,0});
    while(q.size())
    {
        node x=q.front().fi;
        int d=q.front().se;
        q.pop();
        if(kt(x,m)) return cout<<d<<'\n',void();
        //trai
        node k;
        k.a=x.d;k.b=x.a;
        k.c=x.c;k.d=x.e;
        k.e=x.b;k.f=x.f;
        if(kt(k,m)) return cout<<d+1<<'\n',void();
        q.push({k,d+1});
        //phai
        k.a=x.a;k.b=x.e;
        k.c=x.b;k.d=x.d;
        k.e=x.f;k.f=x.c;
        if(kt(k,m)) return cout<<d+1<<'\n',void();
        q.push({k,d+1});
    }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  cin>>t;
  while(t--) xuly();
  return 0;
}