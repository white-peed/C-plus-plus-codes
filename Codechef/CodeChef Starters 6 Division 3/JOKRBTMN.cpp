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

void solve()
{
    int n, m, l, k, a;
    cin >> n >> m >> l;
    int A[n+1], B[l+1];
    fix(A, 0);
    ff(i,1,m)
    {
        cin >> k;
        ff(j,1,k)
        {
            cin >> a;
            A[a] = i;
        }
    }
    ff(i,1,l)   cin >> B[i];
    int ans = 1;
    ff(i,2,l)
        if(A[B[i]] != A[B[i-1]])
            ans++;
    cout << ans << "\n";
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