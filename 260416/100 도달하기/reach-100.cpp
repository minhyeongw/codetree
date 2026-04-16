#include <iostream>
using namespace std;

int main() {
    int n,num=0;
    cin>>n;
    int arr[100];
    arr[0]=1;
    arr[1]=n;
    for(int i=2;i<100;i++){
        arr[i]=arr[i-2]+arr[i-1];
        num++;
        if (arr[i]>100){
            break;
        }
    }

    for(int i=0;i<num+2;i++){
        cout<<arr[i]<<" ";
    }
    // Please write your code here.
    return 0;
}