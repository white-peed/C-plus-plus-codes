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
	int n, q;
    vlli A, B, C;
    lli a;
    cin >> n >> q;
    ff(i,1,n)
    {
        cin >> a;
        A.push_back(a);
    }
    ff(i,1,q)
    {
        cin >> a;
        B.push_back(a);
        C.push_back(a);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    map<lli, int> M;
    int i = 0, j = 0;
    while(i < n and j < q)
    {
        if(A[i] < B[j])
            i++;
        else
        {
            M[B[j]] = (n-i);
            j++;
        }
    }
    while(j != q)
        M[B[j]] = 0, j++;
    ff(i,0,q-1)
        cout << M[C[i]] << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	while(t--)
		solve();
	return 0;
}
