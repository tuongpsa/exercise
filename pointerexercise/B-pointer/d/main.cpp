#include <iostream>

int strlen(char* a){
int len =0;
while(*a++) len++;
return len;
}

void pad_left(char a[], int n)
{
    if (n <= strlen(a)) return;
    int len=strlen(a);
    char* p1=a+len;
    char* p2=a+n;

    while(p1>=a){
        *p2--=*p1--;
    }
    while(p2>=a){
        *p2--=' ';
    }



}
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[100]="tuong";
    pad_left(a,n);
    cout<<"-"<<a<<"-";
    return 0;
}
