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
	int n, m, r, c;
    cin >> n >>m >> r >> c;
    string S[n];
    ff(i,0,n-1)
        cin >> S[i];
    bool aw = true;
    ff(i,0,n-1) ff(j,0,m-1)
        if(S[i][j] == 'B')
            aw = false;
    if(aw)
    {
        cout << "-1\n";
        return;
    }
    if(S[r-1][c-1] == 'B')
        cout << "0\n";
    else
    {
        bool _1 = false;
        ff(i,0,n-1)
            if(S[i][c-1] == 'B')
                _1 = true;
        ff(i,0,m-1)
            if(S[r-1][i] == 'B')
                _1 = true;
        cout << (_1 ? "1\n" :"2\n");
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
