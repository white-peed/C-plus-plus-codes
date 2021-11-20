#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))

lli mod = 1000000007;

using namespace std;

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		lli sum = 0;
		string S;
		cin >> S;
		ff(i,0,S.length() - 1)
			sum += (S[i] - 'a') + (S[0] - 'a' + 1) * 100;
		cout << sum % mod << "\n";
	}
	return 0;
}
