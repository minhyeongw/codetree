#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int min=arr[0];
    int count=0;

    for(int i=1;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if (min==arr[i]){
            count++;
        }
    }

    cout<<min<<" "<<count<<endl;
    // Please write your code here.
    return 0;
}