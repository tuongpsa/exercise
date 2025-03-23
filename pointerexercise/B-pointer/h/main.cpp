#include <iostream>
/*Lọc phải. Viết hàm trim_right(char a[]) với nhiệm vụ xóa các kí tự trắng đứng ở cuối xâu a, nếu có.
*/
using namespace std;
int strlen(char* a){
    int len =0;
    while(*a++) len++;
    return len;
}
void trim_right(char a[]){
    int n=strlen(a);
    char* p1=a+n-1;
    while(*p1==' '){
            *p1='\0';
            p1--;
             n--;
    }
}
int main()
{
    char a[100]="Hello world!      ";
    trim_right(a);
    cout<<"-"<<a<<"-";
    return 0;
}
