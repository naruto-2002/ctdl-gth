#pragma GCC Optimize("O3")
#include<bits/stdc++.h>
#include<string>
#include<vector>
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
template<class X,class Y>
    void minimize(X &x,const Y &y) {
        if (x>y) x=y;
    }
template<class X,class Y>
    void maximize(X &x,const Y &y) {
        if (x<y) x=y;
    }
template<class T>
    T Abs(const T &x) {
        return (x<0?-x:x);
    }
int n,k,f[1005][1005];
void xuly()
{
    cin>>n>>k;
    f1(i,k) f[0][i]=-1e9;
    f1(i,n)
    {
        int x;
        cin>>x;
        x%=k;
        f0(j,k)
        {
            f[i][j]=max(f[i-1][j],f[i-1][(j-x+k)%k]+1);
        }
    }
    cout<<f[n][0];el;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--) xuly();
	return 0;
}


//DÃY CON DÀI NHẤT CÓ TỔNG CHIA HẾT CHO K
//
//Cho một dãy gồm n ( n ≤ 1000) số nguyên dương A1, A2, ..., An và số nguyên dương k (k ≤ 50). Hãy tìm dãy con gồm nhiều phần tử nhất của dãy đã cho sao cho tổng các phần tử của dãy con này chia hết cho k. 
//
//Input: Dòng đầu ghi số bộ test T (T<10). Mỗi bộ test gồm 2 dòng. Dòng đầu tiên chứa hai số n, k.  Dòng tiếp theo ghi n số của dãy A. Các số đều không vượt quá 100.   
//
//Output: Gồm 1 dòng duy nhất ghi số lượng phần tử của dãy con dài nhất thoả mãn. Dữ liệu vào luôn đảm bảo sẽ có ít nhất một dãy con có tổng chia hết cho k.
//
//Ví dụ:
//
//Input
//
//Output
//
//1
//
//10 3
//2 3 5 7 9 6 12 7 11 15
//
//9
//
// 