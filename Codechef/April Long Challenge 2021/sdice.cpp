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
//lli mod = 1000000007;

using namespace std;

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		lli n, sum = 0;
		cin >> n;
		lli c = n/4;
		int a = n % 4;
		int B[] = {0, 20, 36, 51};
		if(c != 0)	
		{
			sum = 60 + 44*(c - 1);
			sum += B[a] - 4 * a;
		}
		else
			sum = B[a];
		cout << sum << "\n";
	}
	return 0;
}
