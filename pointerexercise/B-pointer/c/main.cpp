#include <iostream>

int strlen(char* a){
int len =0;
while(*a++) len++;
return len;
}

void pad_right(char a[], int n)
{
    int len=strlen(a);
    char* p1=a+len;
    while(len<n){
        *p1++=' ';
        len++;
    }
    *p1='\0';
}
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[100]="tuong";
    pad_right(a,n);
    cout<<"-"<<a<<"-";
    return 0;
}
