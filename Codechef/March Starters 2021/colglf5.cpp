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
		int n, m, c = 0;
		cin >> n >> m;
		lli F[n + 1], C[m+1];
		ff(i,1,n)	cin >> F[i];
		ff(i,1,m)	cin >> C[i];
		int i = 1, j = 1, itr = 1; 
		while(i <= n && j <= m)
			if(itr == 1 && F[i] < C[j])
				i++;
			else if(itr == 2 && F[i] > C[j])
				j++;
			else if(itr == 1 && F[i] > C[j])
			{
				itr = 2;
				c++;
			}
			else
			{
				itr = 1;
				c++;
			}
		if(itr == 2 && i <= n)
			c++;
		if(itr == 1 && j <= m)
			c++; 
		cout << c << "\n";
	}
	return 0;
}
