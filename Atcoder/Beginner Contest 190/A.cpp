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
	int a, b, c;
	cin >> a >> b >> c;
	int d = min(a, b);
	a -= d, b -= d;
	if(a == 0 && c == 0)
	{
	    cout << "Aoki";
	    return 0;
	}
	cout << "Takahashi";
	return 0;
}

