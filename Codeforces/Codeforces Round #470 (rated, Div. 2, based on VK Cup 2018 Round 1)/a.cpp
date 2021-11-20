#include<bits/stdc++.h>

using namespace std;

char A[502][502];
int r, c;

bool check()
{
	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++)
			if(A[i][j] == 'S')
				if(A[i+1][j] == 'W' or A[i-1][j] == 'W' or A[i][j+1] == 'W' or A[i][j-1] == 'W')
					return false;
	return true;
}

int main()
{
	cin >> r >> c;
	for(int i = 1; i <= r; i++)
		for(int j = 1; j <= c; j++)
			cin >> A[i][j];
	if(check())
	{
		cout << "Yes\n";
		for(int i = 1; i <= r; i++)
		{
			for(int j = 1; j <= c; j++)
				if(A[i][j] == '.')
					cout << 'D';
				else
					cout << A[i][j];
			cout << "\n";
		}
	}
	else
		cout << "No\n";
	return 0;
}
