#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <iostream>
#define ll long long int
#define ull unsigned long long int

#define pb push_back
#define mp make_pair
using namespace std;

ll mod=1e9+7;

ll modexp(ll x,ll n)
{
	if(n==0)
		return 1;
	if(n%2==0)
	{
		ll y=modexp(x,n/2)%mod;
		return (y*y)%mod;
	}
	return (x*modexp(x,n-1)%mod)%mod;
}
ll modularExponentiation(ll x,ll n,ll M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

ll modInverse(ll A,ll M)
{
    return modularExponentiation(A,M-2,M);
}


ll bin(vector<int> v,ll key,ll fin){
    ll start=0;    fin-=1;
    while(start<=fin){
        ll mid=(start+fin)/2;

        if(v[mid]==key){
            return mid;
        }
        else if(v[mid]>key){
            fin=mid-1;
        }
        else if(v[mid]<key)
            start=mid+1;
    }
    return -1;
    }



int main(){
    //freopen("in.txt", "r", stdin);
   // freopen("output.txt","w",stdout);//redirects standard output
       ios_base::sync_with_stdio(false);
cin.tie(NULL);


   ll n;    cin>>n;     vector<ll> v;
   for(int i=2;i<=n;i=i+2){
    v.pb(i);
   }
   for(int i=1;i<=n;i=i+2){
    v.pb(i);
   }
   for(int i=2;i<=n;i=i+2){
    v.pb(i);
   }
   cout<<v.size()<<"\n";
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }


    return 0;

}
