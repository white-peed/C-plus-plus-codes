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
	while(t--)
	{
		vi A;
		A.assign(10, 0);
		lli n;
		cin >> n;
		while(n != 0)
		{
			A[n % 10]++;
			n /= 10;
		}
		int m, s = 0;
		cin >> m;
		ff(i,1,m)
		{
			int b = A[9];
			ff(j,1,9)
				A[j] = A[j-1];
			A[0] += b;
			A[1] += b;
		}		
		ff(i,0,9)
			s += A[i];
		cout << s << "\n";	
	}
	return 0;
}
