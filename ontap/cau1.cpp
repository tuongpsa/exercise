#include <iostream>
#include <set>

using namespace std;


int main() {
    int n,k;
    cin>>n;
    multiset<int> a;

    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        a.insert(x);
    }
    cin >> k;
    for (auto it=a.begin();it!=a.end(); ){
        int x=*it;
        auto it2=a.find(k-x);
        if (it2!=a.end()&&it2!=it){
            cout<<x<<" "<<k-x<<endl;
            a.erase(it);
            a.erase(it2);
            it=a.begin();
        } else {
            ++it;
        }
    }

    return 0;
}
