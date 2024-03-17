#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;
ll require(ll x,int k){
    ll ans=1;
    for(ll i=2;i<=x/i;i++){
        int count=0;
        while(x%i==0){
            count++;
            x/=i;
        }
        if(count>=k){
            ans*=pow(i,count);
        }
    }
    return ans;
}
int main()
{
    int q,k;
    ll n;
    cin>>q;
    while(q--){
        cin>>n>>k;
        cout<<require(n,k)<<endl;
    }
    return 0;
}

