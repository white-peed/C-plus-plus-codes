#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
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
		lli a, b;
		cin >> a >> b;
		lli even_a = a/2;
		lli odd_a = a - even_a;
		lli even_b = b/2;
		lli odd_b = b - even_b;
		cout << even_a * even_b + odd_a * odd_b << "\n";
	}
	return 0;
}
