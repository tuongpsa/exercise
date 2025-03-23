#include <iostream>
/*Đối gương. Viết hàm bool is_palindrome(char a[]) với nhiệm vụ kiểm tra xem xâu a có đối xứng hay không. Trả về true nếu đối xứng, false nếu không.
*/
using namespace std;
int strlen(char* a)
{
    int len=0;
    while(*a++)len++;
    return len;
}
bool is_palindrome(char a[])
{
    char* l=a;
    char* r=a+strlen(a)-1;
    while(l<r){
        if(*l!=*r) return 0;
        l++;
        r--;
    }
    return 1;
}
int main()
{
    char a[100]="hello";
    if (is_palindrome(a))cout<<"yes\n";
    else cout<<"no\n";
    char b[100]="012343210";
    if (is_palindrome(b))cout<<"yes\n";
    else cout<<"no\n";
    return 0;
}
