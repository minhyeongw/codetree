#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i]>arr[j]){
                int tmp=arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
        }
    }

    cout<<arr[0]<<" "<<arr[1]<<endl;
    // Please write your code here.
    return 0;
}