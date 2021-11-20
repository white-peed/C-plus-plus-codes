#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        int n;
        cin >> n;
        lli A[n], B[n];
        ff(i,0,n - 1)   cin >> A[i];
        ff(i,0,n - 1)   cin >> B[i];
        sort(&A[0],&A[n]);
        sort(&B[0],&B[n]);
        vector<lli> X, Y;
        for(int i = 0; i < n - 1; )
            if(A[i] == A[i + 1])
                X.insert
	}
	return 0;
}
