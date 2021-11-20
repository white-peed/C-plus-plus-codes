#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
//lli mod = 1000000007;

using namespace std;

struct A 
{
    int e = 0, o = 0;
};

void solve()
{
    int n, q, a;
    cin >> n >> q;
    A B[n];
    cin >> a;
    if(a%2 == 0)
        B[0].e =1;
    else
        B[0].o = 1;
    ff(i,1,n-1)
    {
        cin >> a;
        if(a%2 == 0)
        {
            B[i].e = B[i-1].e + 1;
            B[i].o = B[i-1].o;
        }
        else
        {
            B[i].e = B[i-1].e;
            B[i].o = B[i-1].o + 1;
        }
    }
    return;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}