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
	int a, b, a_ = 0, b_ = 0;
	cin >> a >> b;
	while(a != 0)
	{
		a_ += a % 10;
		a /= 10;
	}
	while(b != 0)
	{
		b_ += b % 10;
		b /= 10;
	}
	if(a_ > b_)
		cout << a_;
	else
		cout << b_;
	return 0;
}
