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

bool prime[1000000 + 1];

bool isPerfectSquare(long long x)
{
	long long y = sqrt(x);
	if(y * y == x and prime[y])	return true;
	return false;
}

int solve()
{
	long long x;
	cin >> x;
	if(x == 1)
	{
		cout << "NO\n";
		return 0;
	}
	if (isPerfectSquare(x))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}

void SieveOfEratosthenes(int n = 1e6)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	SieveOfEratosthenes();
	while(t--)
		solve();
	return 0;
}
