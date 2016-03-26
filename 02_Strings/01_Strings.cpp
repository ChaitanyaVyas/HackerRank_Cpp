#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;

    cin>>a>>b;
    printf("%d %d\n", a.size(), b.size());
    cout<<a+b<<"\n";
    cout<<b[0]<<a.substr(1,a.length())<<" "<<a[0]<<b.substr(1,b.length());

    return 0;
}
