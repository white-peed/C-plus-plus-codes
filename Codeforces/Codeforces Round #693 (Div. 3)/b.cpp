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
		int n, a = 0, b = 0, a_;
		cin >> n;
		ff(i,1,n)
		{
			cin >> a_;
			if(a_ == 1)
				a++;
			else
				b++;
		}	
		if(a % 2 == 1)
		{
			cout << "NO\n";
			continue;
		}
		else
		{
			if(b % 2 == 0)
			{
				cout << "YES\n"; 
				continue;
			}
			else
				{
					if(a >= b * 2)
					{
						cout << "YES\n";
						continue;
					}
					else
					{
						cout << "NO\n";
						continue;
					}
				}
		}
					
	}
	return 0;
}
