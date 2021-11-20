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

lli a, b, ans;

void Ans()
{
    cout << ceil((b-ans)/2) + ceil((ans-a)/2) << "\n";
    return;
}

void solve()
{
    cin >> a >> b;
    if(a == b)
        ans = a;
    else if (b > a)
    {
        
    }
    else
    {

    }
    Ans();
    return;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}