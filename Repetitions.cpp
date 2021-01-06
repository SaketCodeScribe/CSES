#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define str string

int main(){
    ll n, start, end, len=1, ans=1;
    str s;
    cin>>s;
    n=s.size();
    start=0;
    end=1;
    while(end<n){
        if(s[start]!=s[end]){
            start=end++;
            ans=max(ans, len);
            len=1;
            continue;
        }
        len++;
        end++;
    }
    ans=max(ans, len);
    if(!n)
        cout<<0<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
