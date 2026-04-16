#include <iostream>
using namespace std;

int main() {
    int arr[100], countarr[11]={},n=0;
    for(int i=0;i<100;i++){
        cin>>arr[i];
        if (arr[i]==0){
            break;
        }
        n++;
    }

    for(int i=0;i<n;i++){
        countarr[arr[i]/10]++;
    }

    for(int i=10;i>0;i--){
        cout<<i*10<<" - "<<countarr[i]<<endl;
    }
    // Please write your code here.
    return 0;
}