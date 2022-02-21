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

// void solve()
// {
// 	int n ,m;
//     cin >> n >> m;
//     if(n > m)   swap(n, m);
//     cout << (n == 1 || (n == 2 and m == 2) ? "YES\n" : "NO\n");
//     return;
// }

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    lli h = 1;
    vlli B;
    for(; h <= 100000; h++)
        B.push_back(((3*h+1)*h)/2);
    // cout << "Heraer";
	int t = 1;
	cin >> t;
	while(t--)
	{
        lli n;
        cin >> n;
        // cout << "Heraegrfgrgr";
        int ans = 0;
        int a = 1;
        while(a > 0)
        {
            a = upper_bound(B.begin(), B.end(), n) - B.begin() - 1;
            // cout << "Heraerjjhjioj" ;
            if(a == 0)
                break;
            else 
            {
                n -= B[a];
                ans++;
            }
        }
        cout << ans << "\n";
    }
	return 0;
}
