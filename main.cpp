#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <iostream>
#define ll long long
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


int main(){
    //freopen("in.txt", "r", stdin);
   // freopen("output.txt","w",stdout);//redirects standard output
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);

       char a[4]{'!','!','!','!'};

       string s;    cin>>s;

        for(int i=0;i<s.length();i++){
            if(s[i]!='!'){
                a[i%4]=s[i];
            }
        }
       // cout<<a[0]<<a[1]<<a[2]<<a[3]<<"\n";
       ll kr=0,kb=0,ky=0,kg=0;

       for(int i=0;i<s.length();i++){
        if(s[i]=='!' && a[i%4]=='R')
            kr++;
        if(s[i]=='!' && a[i%4]=='B')
            kb++;
        if(s[i]=='!' && a[i%4]=='Y')
            ky++;
        if(s[i]=='!' && a[i%4]=='G')
            kg++;
       }
       cout<<kr<<" "<<kb<<" "<<ky<<" "<<kg;

    return 0;
}
