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
//lli mod = 1000000007;

using namespace std;

void swapTwo(int& x, int& y) 
{ 
    // Store XOR of all in x 
    x = x ^ y; 
  
    // After this, y has value of x 
    y = x ^ y; 
  
    // After this, x has value of y 
    x = x ^ y; 
} 

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		vi A;
		ff(i,1,n)	A.pb(i);
		if(2 * k >= n)
		{
			cout << "-1\n";
			continue;
		}	
		int p = n - 1, j = 1;
		ff(i,1,k)
		{
			int b = A[p];
			A.pop_back();
			A.insert(A.begin() + j, b);
			j += 2;
		}
		ff(i,0,n - 1)
			cout << A[i] << " ";
		cout << "\n";	
	}
	return 0;
}
