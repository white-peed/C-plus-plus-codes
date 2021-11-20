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

int max_char(string S)
{
	int A[26];
	fix(A,0);
	ff(i,0,S.length() - 1)
		A[S[i] - 'a']++;
	int max = 0;
	ff(i,0,25)
		if(A[i] > max)
			max = A[i];
	return max;
}

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		string A, B;
		cin >> A >> B;
		char a = A[A.length() - 1], b = B[B.length() - 1];
		A.resize(A.length() - 1);
		B.resize(B.length() - 1);
		int c = max_char(A);
		int d = max_char(B);
		
		cout << c << " ";
		if(a == 'n')
			cout << "north";
		else if(a == 'e')
			cout << "east";
		else if(a == 'w')
			cout << "west";
		else
			cout << "south";
		
		cout << " " << d << " ";
		if(b == 'n')
			cout << "north";
		else if(b == 'e')
			cout << "east";
		else if(b == 'w')
			cout << "west";
		else
			cout << "south";
		cout << "\n";
	}
	return 0;
}
