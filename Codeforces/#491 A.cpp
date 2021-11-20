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
	int a, b;
	cin >> a >> b;
	if (a > 0 && b > 0)
	{
		cout << 1 << " ";
		int c = 2 + b;
		ff(i,1,a-1)		cout << c++ << " ";
		cout << c;
		c = 2 + b - 1;
		ff(i,1,b - 1)	cout << " " << c--;  
		cout << " " << c;
	}
	else if(a == 0)
		fb(i,b+1,1)		cout << i << " ";
	else if(b == 0)
		ff(i,1,a+1)		cout << i << " ";
	else
		cout << 1;
	return 0;
}
