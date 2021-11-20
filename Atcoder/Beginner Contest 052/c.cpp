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
lli mod = 1000000007;

using namespace std;

lli A[1001];

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        A[2]++;
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
        while (n % i == 0)
        {
            A[i]++;
            n = n/i;
        }
    if (n > 2)
        A[n]++;
}

int main()
{
	int n;
	cin >> n;
	fix(A, 0);
	lli ans = 1;
	ff(i,1,n)
		primeFactors(i);
	ff(i,1,n)
	{
		ans *= (A[i] + 1);
		ans = ans % mod;
	}
	cout << ans;
	return 0;
}
