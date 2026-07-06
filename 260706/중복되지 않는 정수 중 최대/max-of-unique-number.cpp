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
        int t=1;
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                arr[j]=-1;
                t=0;
            }
        }
        if (t==0){
            arr[i]=-1;
        }
    }

    int max=arr[0];

    for(int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max<<endl;
    // Please write your code here.
    return 0;
}