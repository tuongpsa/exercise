#include <iostream>
#include <set>
#include<algorithm>
using namespace std;

bool dequy_bs(int a[],int l,int r,int x){
if(l>r) return false;
int m=(l+r)/2;
if(a[m]==x) return true;
else if(a[m]>x ) return  dequy_bs(a,l,m-1, x);
else return  dequy_bs(a,m+1,r,x);
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x;
    cin>>x;
    if(dequy_bs(a,0,n-1,x))cout<<"YES";
    else cout<<"NO";

    return 0;
}

