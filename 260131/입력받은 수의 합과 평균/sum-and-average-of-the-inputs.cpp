#include <iostream>
using namespace std;

int main() {
    int n,sum=0,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/n;
    // Please write your code here.
    return 0;
}