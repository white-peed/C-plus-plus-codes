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

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vi A(n), B(m), C;
    ff(i,0,n-1) cin >> A[i];
    ff(i,0,m-1) cin >> B[i];
    while(A.size() != 0 or B.size() != 0)
    {
        if(A[0] == 0 and A.size() != 0)
        {
            C.push_back(0);
            k++;
            A.erase(A.begin());
        }
        else if(B[0] == 0 and B.size() != 0)
        {
            C.push_back(0);
            k++;
            B.erase(B.begin());
        }
        else if(A[0] <= k and A.size() != 0)
        {
            C.push_back(A[0]);
            A.erase(A.begin());
        }
        else if(B[0] <= k and B.size() != 0)
        {
            C.push_back(B[0]);
            B.erase(B.begin());
        }
        else 
            break;
    }
    if(C.size() != (n+m))
        cout << -1;
    else
        ff(i,0,n+m-1)   cout << C[i] << " ";
    cout << "\n";
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