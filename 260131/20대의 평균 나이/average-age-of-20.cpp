#include <iostream>
using namespace std;

int main() {
    int n, sum=0, cnt=0;
    cin>>n;
    while(n>=20 && n<=29){
        sum+=n;
        cnt++;
        cin>>n;
    }
    cout<<fixed;
    cout.precision(2);
    cout<<(double)sum/cnt<<endl;
    // Please write your code here.
    return 0;
}