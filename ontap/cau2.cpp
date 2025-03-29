#include <iostream>
using namespace std;
int main() {

    int m,n,q,k;
    cin>>m>>n>>k>>q;
    int a[m][n]={0};
    int tdx[]={-1,-1,-1,0,0,1,1,1};
    int tdy[]={-1,0,1,-1,1,-1,0,-1};
    while(k--){
    	int x,y;
    	int v;
    	cin>>x>>y>>v;
    	a[x][y]=v;
	}
	
	while(q--){
		int x,y;
		cin>>x>>y;
		int sum=0;
		for(int i=0;i<8;i++){
			int px=x+tdx[i];
			int py=y+tdy[i];
			if(px>=0&&py>=0&&px<m&&py<n){
				sum+=a[px][py];
			}
		}
		cout<<sum<<endl;	
	}
    return 0;
}

