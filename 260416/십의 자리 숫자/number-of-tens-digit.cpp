#include <iostream>
using namespace std;

int main() {
    int arr[100], countarr[10]={};
    int n=0;

    for(int i=0;i<100;i++){
        cin>>arr[i];
        if (arr[i]==0){
            break;
        }
        n++;
    }

    for(int i=0;i<n+1;i++){
        if (arr[i]>=10){
            countarr[arr[i]/10]++;
        }
    }

    for(int i=1;i<10;i++){
        cout<<i<<" - "<<countarr[i]<<endl;
    }
    // Please write your code here.
    return 0;
}