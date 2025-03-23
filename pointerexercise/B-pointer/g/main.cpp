#include <iostream>
/*lọc trái. Viết hàm trim_left(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở đầu xâu a, nếu có.
*/
using namespace std;
int strlen(char* a)
{
    int len=0;
    while(*a++) len++;
    return len;
}
void trim_left(char a[])
{
    char* p1=a;
    char* p2=a;
    while(*p1==' '){
        p1++;
    }
    while(*p1){
        *p2++=*p1++;
    }
    *p2='\0';
}
int main()
{
    char a[100]="       hello world!";
    trim_left(a);
    cout<<a;
    return 0;
}
