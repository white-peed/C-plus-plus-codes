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
		int n, k;
		cin >> n >> k;
		lli a;
		set<lli> A;
		ff(i,1,n)
		{
			cin >> a;
			A.insert(a);
		}
		if(A.size() > (n - k))
			cout << n-k;
		else
			cout << A.size();
		cout << "\n";		
	}
	return 0;
}
