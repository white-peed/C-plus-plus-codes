#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int main()
{
	int t = 0;
	while(t <= 10)
	{
		
		cout << "\nX Y N c xy xt yt\n";  
		ff(x,0,t)
			ff(y,0,t)
				if(x < y)
				{
					cout << x << " " << y << " " << t << " "; 
					int count = 0;
					ff(z,0,t)
						if((x ^ z) < (y ^ z))
						{
							//cout << z << "," ;
							count++; 
						}
					cout <<"\b " << count << " ";
					int A[3];
					A[0] = x ^ y;
					A[1] = x ^ t;
					A[2] = y ^ t;
					cout << A[0] << " " << A[1] << " " << A[2] << "\n";
				}
		t++;
	}
	return 0;
}
