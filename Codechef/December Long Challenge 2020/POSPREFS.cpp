#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 1];
		ff(i, 1, n)		a[i] = i;
		if( 2 * k <= n )
		{
			for(int i = 1; i < (2 * k); i += 2)
				a[i] *= (-1);
			ff(i, (2 * k + 1), n)
				a[i] *= (-1);
		}
		else
		{
			float n1 = (-1 + sqrt( 1 + 2.0 * k * ( k + 1 ) )) / 2.0;
			int n2 = n1 + 1;
			ff(i, n2 + 1, n)
				a[i] *= (-1);
			if(!(n1 - (int)n1 > 0.000000000))
				a[k + 1] *= (-1);
		}
		ff(i, 1, n)		
			cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}
