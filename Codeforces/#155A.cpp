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
    int n, cn = 0;
	cin >> n;
    vi A(n), B(n), C(n);
    cin >> A[0];
    B[0] = A[0], C[0] = A[0];
    ff(i,1,n-1)
    {
        cin >> A[i];
        B[i] = max(B[i-1], A[i]);
        C[i] = min(C[i-1], A[i]);
        if(B[i] > B[i-1] or C[i] < C[i-1])
            cn++;
    }
    cout << cn;
	return 0;
}
