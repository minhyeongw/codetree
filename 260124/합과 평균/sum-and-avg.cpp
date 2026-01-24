#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int total=a+b;
    cout<<total;
    cout<<fixed;
    cout.precision(1);
    cout<<" "<<(double)total/2;
    // Please write your code here.
    return 0;
}