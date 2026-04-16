#include <iostream>
using namespace std;

int main() {
    int arr[10], countarr[7]={};

    for(int i=0;i<10;i++){
        cin>>arr[i];
        countarr[arr[i]]++;
    }

    for(int i=1;i<7;i++){
        cout<<i<<" - "<<countarr[i]<<endl;
    }
    // Please write your code here.
    return 0;
}