#include <iostream>

using namespace std;
//Cắt xâu. Viết hàm truncate(char a[], int n) với nhiệm vụ cắt bớt
//đoạn cuối của xâu a để a có độ dài n nếu như a đang dài quá n kí tự.
int strlen(char* a){
    int len=0;
    while(*a++) len++;
    return len;
}
void truncate(char a[], int n)
{
    if (n < 0) return;
int    len=strlen(a);
    char* p1=a+len-1;
    while(len>n){
        *p1--='\0';
        len--;
    }
}
int main()
{
    int n;
    cin>>n;
    char a[100]="tuong";
    truncate(a,n);
    cout<<a;

    return 0;
}
