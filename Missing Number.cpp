#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define for(i,a,b) for(i=a; i<=b; i++)
#define v vector<ll> 

int main() {
	// your code goes here
	ll n, x, tot, i;
	cin>>n;
	v arr={};
	tot=n*(n+1)/2;
	while(cin>>x)
	    arr.emplace_back(x);
	for(i,0,n-1)
	    tot-=arr[i];
    cout<<tot;
	return 0;
}
