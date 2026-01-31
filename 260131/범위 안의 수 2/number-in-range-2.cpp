#include <iostream>
using namespace std;

int main() {
    int sum=0, cnt=0, n;
    for(int i=0;i<10;i++){
        cin>>n;
        if (n>=0 && n<=200){
            cnt++;
            sum+=n;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    // Please write your code here.
    return 0;
}