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
		int w1, w2, x1, x2, M;
		cin >> w1 >> w2 >> x1 >> x2 >> M;
		if((w2 - w1) >= M * x1 and (w2 - w1) <= M * x2)	
			cout << "1\n";
		else
			cout << "0\n";
	}
	return 0;
}
