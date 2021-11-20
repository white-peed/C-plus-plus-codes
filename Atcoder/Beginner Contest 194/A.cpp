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
	if((a + b >= 15) && (b >= 8))
		cout << 1;
	else if((a + b >= 10) && (b >= 3))
		cout << 2;
	else if(a + b >= 3)
		cout << 3;
	else
		cout << 4;
	return 0;
}
