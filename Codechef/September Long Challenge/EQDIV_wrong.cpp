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
	int k;
	lli t;
	cin >> k >> t;
	while(t--)
	{
        int n;
        cin >> n;
        int A[n];
        memset(A, 0, sizeof(A));    //works for 0 or -1
        lli sum = 0;
        sum += pow(n,k);
        A[n - 1] = 1;
        for(int i = n - 1; i > 0; i--)
        {
            if(sum >= pow(i,k))
                sum -= pow(i,k);
            else
            {
                sum += pow(i,k);
                A[i - 1] = 1;
            }
        }
        cout << sum << "\n";
        for(int i = 0; i < n; i++)
            cout << A[i] << " ";
        cout << "\n";
	}
	return 0;
}

