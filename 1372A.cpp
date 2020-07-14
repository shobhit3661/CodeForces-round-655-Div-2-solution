#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	ll n;
	cin>>n;
	int temp = 1;
	for(ll i=0;i<n;i++)
	{
		cout<<temp<<' ';
		temp+=2;
		if(temp>1000)
		{
			temp-=1000;
		}
	}
	
	cout<<'\n';
}

int main()
{
	fast;
	ll t=1;
	cin>>t;
	while(t--)
		solve();
	return 0;
}


