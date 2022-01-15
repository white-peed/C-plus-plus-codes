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
	int n, k;
    cin >> n >> k;
    vi H(n);
    for(auto &x : H)    cin >> x;
    int sm = accumulate(H.begin(),H.begin()+k, 0), si = 0;
    int sn = sm;
    ff(i,0,n-k-1)
    {
        sn += (H[i+k] - H[i]);
        // cout << sn << " sn \n";
        if(sn < sm)
        {
            sm = sn;
            si = i+1;
            // cout << si << " si \n";
        }
    }
    cout << si+1;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t = 1;
	// cin >> t;
	while(t--)
		solve();
	return 0;
}
