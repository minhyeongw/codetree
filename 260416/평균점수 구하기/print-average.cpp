#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double arr[8];
    double sum;

    for(int i=0;i<8;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<fixed<<setprecision(1)<<sum/8<<endl;
    // Please write your code here.
    return 0;
}