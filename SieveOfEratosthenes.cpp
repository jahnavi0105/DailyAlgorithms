#include<bits/stdc++.h>
using namespace std;
const int n=1e7+10;
vector<bool>isprime(n,1);
int main(){
    isprime[0]=isprime[1]=false;
    for(int i=2;i<n;i++){
        if(isprime[i])
        {
            for(int j=2*i;j<n;j+=i){
                isprime[j]=false;
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int num1,num2;
        cin>>num1>>num2;
        for(int i=num1;i<=num2;i++)
          if(isprime[i])
           cout<<i<<endl;
    }
}
