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

int maf(int a, int b, int n)
{
    //cout << a << " " << b << " " << n << " a b n here\n";
    int x = a-1, y = b-a-1, z = n-b;
    //cout << x << " " << y << " " << z << " x y z here\n";
    return x+z+1;
}

void solve()
{
	int n;
    cin >> n;
    map <int, vi> M;
    int x;
    ff(i,1,n)
    {
        cin >> x;
        M[x].pb(i);
    }
    if(M.size() == n)
    {
        cout << "-1\n";
        return;
    }
    int k = 0;
    map<int, vi>::iterator itr;
    for (itr = M.begin(); itr != M.end(); ++itr)
    {
        vi A = itr -> second;
        if(A.size() < 2)
            continue;
        int a = A.size();
        k = max(max(k, maf(A[0], A[1], n)), max(maf(A[a-2], A[a-1], n), maf(A[0], A[a-1], n)));
        //cout << k << "k here\n";
    }
    cout << k << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
