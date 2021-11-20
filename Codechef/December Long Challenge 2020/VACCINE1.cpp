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
	int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	if(d1 > d2)
	{
		int p1 = p - (d1 - d2) * v2;
		if(p1 < 0)
		{
		    if(p % v2 == 0)
		        cout << ( p / v2 ) + d2 - 1;
		    else
		        cout << ( p / v2 ) + d2;
		       return 0;
		}
		if(p1 % (v1 + v2) == 0)
			cout << ( p1 / (v1 + v2)) + d1 - 1;
		else
			cout << ( p1 / (v1 + v2)) + d1;
	}
	else if(d2 > d1)
	{
		swap(d1, d2);
		swap(v1, v2);
		int p1 = p - (d1 - d2) * v2;
		if(p1 < 0)
		{
		    if(p % v2 == 0)
		        cout << ( p / v2 ) + d2 - 1;
		    else
		        cout << ( p / v2 ) + d2;
		       return 0;
		}
		if(p1 % (v1 + v2) == 0)
			cout << ( p1 / (v1 + v2)) + d1 - 1;
		else
			cout << ( p1 / (v1 + v2)) + d1;
	}
	else
		if(p % (v1 + v2) == 0)
			cout << ( p / (v1 + v2)) + d1 - 1;
		else
			cout << ( p / (v1 + v2)) + d1;
	return 0;
}

