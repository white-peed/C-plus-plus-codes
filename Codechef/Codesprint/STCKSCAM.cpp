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
//lli mod = 1000000007;

using namespace std;

int main()
{
	lli s;
	cin >> s;
	int n = log10(s) + 1;
	int A[n + 1];
	ff(i,1,n)
	{
		A[i] = s % 10;
		s /= 10;
	}
	int k;
	cin >> k;
	ff(i,1,n)
		if(i <= k)
			cout << 9;
		else
			cout << A[n - i + 1];
	return 0;				// WA given
}
