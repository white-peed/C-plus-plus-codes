#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define pb push_back
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string A, B;
		vi odd, even;
		cin >> A >> B;
		ff(i,0,A.size() - 1)
			if(A[i] != B[i])
				if(i % 2 == 0)
					even.pb(i);
				else
					odd.pb(i);
		int ans = 0;
		while(even.size() != 0)
		{
			ans++;
			int a = even[0];
			while(a == even[0])
			{
				a += 2;
				even.erase(even.begin());
			}
		}
		while(odd.size() != 0)
		{
			ans++;
			int a = odd[0];
			while(a == odd[0])
			{
				a += 2;
				odd.erase(odd.begin());
			}
		}
		cout << ans << "\n";	
	}
	return 0;
}
