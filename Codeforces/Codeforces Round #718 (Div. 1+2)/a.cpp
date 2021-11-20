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

lli add_digi(lli n)
{
	if (n == 0)
		return 0;
	return (n % 10) + add_digi(n/10);
}

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		lli n;
		cin >> n;
		if(n % 2050 != 0)
			cout << "-1\n";
		else
			cout << add_digi(n / 2050) << "\n";		
	}
	return 0;
}
