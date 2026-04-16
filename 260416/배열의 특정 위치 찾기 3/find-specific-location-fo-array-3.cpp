#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int num,n=0;
    for(int i=0;i<100;i++){
        cin>>num;
        if (num!=0){
            arr[i]=num;
            n++;
        }
        else{
            break;
        }
    }

    cout<<arr[n-1]+arr[n-2]+arr[n-3]<<endl;
    // Please write your code here.
    return 0;
}