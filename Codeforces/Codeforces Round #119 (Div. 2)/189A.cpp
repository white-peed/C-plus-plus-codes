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
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	if(a < b)   swap(a, b);
	if(a < c)   swap(a, c);
	if(b < c)   swap(b, c);
	int a1 = n / a;
	ff(i, 0, a1)
	{
	    //cout << i << "\n";
	    int n1 = n - (a * i);
	    int b1 = n1 / b;
	    //cout << a << " " << b << " " << c << " " << a1 << " " << n << " " << n1 << " " << b1 << "\n";
	    ff(j, 0, b1)
	    {
	        //cout << j << "\n";
	        int n2 = n1 - (b * j);
	        //cout << n2 << "\n";
	        if((n2 % c) == 0)
            {
                cout << (n2 / c) + i + j;
                return 0;
            }
	    }
	}
}
