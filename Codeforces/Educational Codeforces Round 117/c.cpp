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
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
//lli mod = 1000000007;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cout << setprecision(15);
    int t;
	cin >> t;
	while(t--)
	{
		lli k, x;
        cin >> k >> x;
        if(k*k <= x)
            cout << 2*k-1 << "\n";
        else if((k*(k+1))/2 >= x)
        {
            double a = (-1 + sqrt(1+ 8*x))/2;
            cout << ceil(a) << "\n";
        }
        else
        {
            lli x_ = x - ((k*(k+1))/2);
            double a = ((2*k-1) - sqrt((2*k-1)*(2*k-1) - 8*x_))/2;
            cout << ceil(a) + k << "\n";
        }
	}
	return 0;
}
