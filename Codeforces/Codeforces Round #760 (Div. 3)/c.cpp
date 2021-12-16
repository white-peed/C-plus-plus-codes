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
    cin >> n;
    vlli A(n);
    for(auto &x : A)    cin >> x;
    lli a = A[0], b = A[1];
    
    ff(i,0,n-1)
    {
        if(i%2 == 0)
            a = __gcd(a, A[i]);
        else
            b = __gcd(b, A[i]);
    }

    bool bt = true;
    for(int i = 0; i< n; i+=2)
        if(A[i]%b == 0)
            bt = false;

    bool at = true;
    for(int i = 1; i< n; i+=2)
        if(A[i]%a == 0)
            at = false;

    if((a == 1 and b == 1) or (a == b))
        cout << "0\n";
    else if(a == 1)
    {
        cout << (bt ? b : 0) << "\n";
    }
    else if(b == 1)
    {
        cout << (at ? a : 0) << "\n";
    }
    else
    {
        cout << (bt ? b : (at ? a : 0)) << "\n";
    }

    return;
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
