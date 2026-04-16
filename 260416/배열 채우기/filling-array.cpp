#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int num;
    int n=0;
    for(int i=0;i<10;i++){
        cin>>num;
        if (num!=0){
            arr[i]=num;
            n++;
        }
        else{
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    // Please write your code here.
    return 0;
}