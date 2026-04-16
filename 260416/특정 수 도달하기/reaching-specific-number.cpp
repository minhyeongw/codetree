#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10];
    int sum=0,num=0;

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    for(int i=0;i<10;i++){
        if (arr[i]<250){
            sum+=arr[i];
            num++;
        }
        else{
            break;
        }
    }

    cout<<fixed;
    cout<<setprecision(1)<<sum<<" "<<(double)sum/num<<endl;
    // Please write your code here.
    return 0;
}