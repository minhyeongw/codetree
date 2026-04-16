#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    int num=0;
    int n;

    for(int i=0;i<10;i++){
        cin>>n;
        if (n!=0){
            arr[i]=n;
            sum+=arr[i];
            num++;
        }
        else{
            break;
        }
    }

    cout<<sum<<" ";
    cout<<fixed<<setprecision(1)<<(double)sum/num<<endl;
    // Please write your code here.
    return 0;
}