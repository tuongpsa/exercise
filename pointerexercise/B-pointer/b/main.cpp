#include <iostream>

using namespace std;
int strlen_(char *a){
    int len=0;
    while(*a++) len++;
    return len;
}
void delete_char(char a[], char c)
{
char* p1=a;
    char* p2=a;
    while(*p1){
        if(*p1!=c){
                *p2++=*p1;
        }
        p1++;
    }
    *p2= '\0';
}
int main()
{
    char a[]="hello world!";
    delete_char(a,'o');
     cout<<a;

    return 0;
}
