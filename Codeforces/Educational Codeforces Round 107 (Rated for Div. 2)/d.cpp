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
	int n, k;
	string s;
	cin >> n >> k;
	if(k == 1)
		ff(i,1,n)
			s.pb('a');
	else
	{
		int i = 1;
		while(i <= n)
		{
			if(i % 2 == 1)
				s.pb('a');
			else
				s.pb('b');
			i++;
		}
	}
	cout << s;
	return 0;
}
