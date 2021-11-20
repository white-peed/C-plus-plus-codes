#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define fast1 ios_base::sync_with_stdio(false);
#define fast2 cin.tie(NULL); cout.tie(0);
#define vii vector<vi>
#define pii pair<int,int>
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
//lli mod = 1000000007;

using namespace std;

struct A {
    string s;
    int a = 0, b = 0, c = 0, d = 0, e = 0, t = 0;
    void classify()
    {
        t = s.size();
        ff(i,0,t-1)
            if(s[i] == 'a')
                a++;
            else if(s[i] == 'b')
                b++;
            else if(s[i] == 'c')
                c++;
            else if(s[i] == 'd')
                d++;
            else
                e++;
    }
};

void solve()
{
    int n;
    cin >> n;
    A a[n];
    ff(i,0,n-1)
    {
        cin >> a[i].s;
        a[i].classify();
    } 

    sort(a, a+n, [](A& b, A& c){
        return (b.t - 2*b.a) > (c.t - 2*c.a);
    });
    int res = 0, cnt = 0, suma = 0, sumb = 0;
    fb(i,n-1,0)
    {
        suma += a[i].a;
        sumb += (a[i].t - a[i].a);
        if(suma > sumb) cnt++;
        else break;
    }
    res = max(res, cnt);

    sort(a, a+n, [](A& b, A& c){
        return (b.t - 2*b.b) > (c.t - 2*c.b);
    });
    cnt = 0, suma = 0, sumb = 0;
    fb(i,n-1,0)
    {
        suma += a[i].b;
        sumb += (a[i].t - a[i].b);
        if(suma > sumb) cnt++;
        else break;
    }
    res = max(res, cnt);
    
    sort(a, a+n, [](A& b, A& c){
        return (b.t - 2*b.c) > (c.t - 2*c.c);
    });
    cnt = 0, suma = 0, sumb = 0;
    fb(i,n-1,0)
    {
        suma += a[i].c;
        sumb += (a[i].t - a[i].c);
        if(suma > sumb) cnt++;
        else break;
    }
    res = max(res, cnt);
    
    sort(a, a+n, [](A& b, A& c){
        return (b.t - 2*b.d) > (c.t - 2*c.d);
    });
    cnt = 0, suma = 0, sumb = 0;
    fb(i,n-1,0)
    {
        suma += a[i].d;
        sumb += (a[i].t - a[i].d);
        if(suma > sumb) cnt++;
        else break;
    }
    res = max(res, cnt);
    
    sort(a, a+n, [](A& b, A& c){
        return (b.t - 2*b.e) > (c.t - 2*c.e);
    });
    cnt = 0, suma = 0, sumb = 0;
    fb(i,n-1,0)
    {
        suma += a[i].e;
        sumb += (a[i].t - a[i].e);
        if(suma > sumb) cnt++;
        else break;
    }
    res = max(res, cnt);
    
    cout << res << "\n";
    return;
}

int main()
{
	fast1 fast2
    int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}