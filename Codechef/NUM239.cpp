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

int check(int a)
{
    int b = a % 10;
    if(b == 2 or b == 3 or b == 9)
        return 1;
    return 0;
}

int A[100001];

void build()
{
    fix(A, 0);
    ff(i, 1, 100000)
        A[i] = A[i-1] + check(i);
    return;
}

int main()
{
	int t;
	cin >> t;
    build();
	while(t--)
        {
            int a, b;
            cin >> a >> b;
            cout << A[b] - A[a-1] << "\n";
        }
	return 0;
}