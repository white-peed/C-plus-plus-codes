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
	int n;
	cin >> n;
	int s, t, lead = 0, lead_player = 0;
	ff(i,1,n)
	{
		cin >> s >> t;
		if(s > t + lead)
		{
			lead_player = 1;
			lead = s - t;
		}
		else if(t > s + lead)
		{
			lead_player = 2;
			lead = t - s;
		}
		else
			continue;
	}
	cout << lead_player << " " << lead;
	return 0;
}
