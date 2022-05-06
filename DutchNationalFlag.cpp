#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    int m=0;
    int h=n-1;
    while(m<=h){
        
    switch(a[m]){
        case 0: swap(a[l++],a[m++]);
                break;
        case 1: m++;
                break;
        case 2: swap(a[m],a[h--]);
                break;
    }
    }
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
}
