#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    double arr[n];
    double sum=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    double avg=sum/n;
    cout<<fixed<<setprecision(1)<<avg<<endl;

    if (avg>=4.0){
        cout<<"Perfect"<<endl;
    }
    else if (avg>=3.0){
        cout<<"Good"<<endl;
    }
    else{
        cout<<"Poor"<<endl;
    }
    // Please write your code here.
    return 0;
}