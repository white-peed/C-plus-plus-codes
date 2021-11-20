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
		int n;
		cin >> n;
		lli A[n];
		ff(i,0,n - 1)
		{
			cin >> A[i];
			int a = A[i] % 3;
			if(a == 0)
				continue;
			else if(a == 1)
				A[i] += 1;
			else
				A[i] += 2;
		}
		lli m;
		cin >> m;
		lli g = -1, s = -1;
		ff(i,0,n - 1)
		{
			if(A[i] > m)
			{
				if(g == -1)
					g = A[i];
				else if(A[i] < g)
					g = A[i];
			}
			else
			{
				if(A[i] > s)
					s = A[i];
			}
		}		
		cout << g << " " << s << "\n";
 	}
	return 0;
}
