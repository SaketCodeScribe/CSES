#include <iostream>
using namespace std;

#define ll long long int

int main() {
    ll prev=-1, n, x, curr, ans=0;
    cin>>n;
    while(cin>>x){
        curr=x;
        if(prev==-1){
            prev=curr;
            continue;
        }
        ans+=curr<prev ? prev-curr : 0;
        prev=curr<=prev ? prev : curr;
    }
    cout<<ans<<endl;
	return 0;
}
