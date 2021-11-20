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
		int k;
		cin >> k;
		int o = 1, e = 2;
		ff(i,1,k)
		{
			if(i % 2 == 0)
			{
				ff(j,1,k - e)
					cout << "  ";
				ff(j,1,e)
					cout << j << " ";
				e += 2;
			}
			else
			{
				ff(j,1,k - o)
					cout << "  ";
				ff(j,1,o)
					cout << (char)(j + 'A' - 1) << " ";
				o += 2;
			}
			cout << "\n";
		}
	}
	return 0;
}
