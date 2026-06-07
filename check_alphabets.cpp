#include <iostream>
using namespace std;
int main() {
    string a;
    cin>>a;
    int flag1=0,flag2=0;
    for(int i=0;i<a.length();i++){
        if(a[i]>='a' && a[i]<='z')
        flag1 = flag1 | (1<<(a[i]-'a'));
        if(a[i]>='A' && a[i]<='Z')
        flag2 = flag2 | (1<<(a[i]-'A'));
    }
    cout<<(((flag1 == (1<<26)-1)  && (flag2 == (1<<26)-1) )?"yes":"no");
    return 0;
}
