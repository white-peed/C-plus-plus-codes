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
	int t;
	cin >> t;
	lli A[11] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3268800};
	while(t--)
	{
		lli n;
		cin >> n;
		lli n_ = n;
		lli n__ = 0;
		while(n_ != 0)
		{
			n__ += A[n_ % 10];
			n_ /= 10;
		}
		if(n__ == n)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
	return 0;
}
