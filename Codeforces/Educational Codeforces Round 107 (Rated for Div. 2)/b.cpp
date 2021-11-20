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

int no_digits(lli n)
{
	int a = 0;
	while(n != 0)
	{
		n /= 10;
		a++;
	}
	return a;
}

int main()
{
	lli A[] = {0, 3, 11, 101, 1009, 10069, 101573, 1000003, 10000019, 100030001};
	lli B[] = {0, 2, 13, 103, 1013, 10009, 100003, 1000033, 10000169, 100050001};
	lli t;
	cin >> t;
	while(t--)
	{
		int a, b, c, x, y;
		cin >> a >> b >> c;
		ff(i,0,b)
			if(no_digits(A[i] * A[c]) == b)
			{
				y = A[i] * A[c];
				break;
			}
		ff(i,0,a)
			if(no_digits(B[i] * A[c]) == a)
			{
				x = B[i] * A[c];
				break;
			}
		cout << x << " " << y << "\n";		
	}
	return 0;
}
