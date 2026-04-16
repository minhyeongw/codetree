#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10];
    int sumval=0, th=0, num=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if (i%2==1){
            sumval+=arr[i];
        }
        if (i%3==2){
            th+=arr[i];
            num++;
        }
    }

    cout<<fixed<<setprecision(1)<<sumval<<" "<<(double)th/num<<endl;
    // Please write your code here.
    return 0;
}