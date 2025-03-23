#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int strlen_(char* a){
	int len=0;
	while(*a++) len++;
	return len;
}
void reverse(char a[]){
	int len=strlen_(a);
	char* l=a;
	char*r=a+len-1;
	while(l<r){
		char tmp;
		tmp=*r;
		*r=*l;
		*l=tmp;
		*r--;
		*l++;
	}
}

int main()
{
   char a[]="HELLO";
   reverse(a);
   for(char x:a) cout<<x;

    return 0;
}
