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
	int n;
    vi o, e;
    cin >> n;
    int A[n];
    ff(i,0,n-1)
    {
        cin >> A[i];
        A[i]%2 ? o.pb(A[i]) : e.pb(A[i]);
    }
    if(e.size()%2 != o.size()%2)
        cout << "NO\n";
    else
    {
        if(e.size()%2 == 0)
            cout << "YES\n";
        else    
            {ff(i,0,e.size()-1)  ff(j,0,o.size()-1)
                if(abs(e[i]-o[j]) == 1)
                {
                    cout << "YES\n";
                    return;
                }
        cout << "NO\n";}
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
