#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count=0;
    cin>>arr[0];
    while(true){
        ++count;
        cin>>arr[count];
        if (arr[count]==999 || arr[count]==-999){
            break;
        }
    }

    int min=arr[0];
    int max=arr[0];

    for(int i=0;i<count;i++){
        if (arr[i]<min){
            min=arr[i];
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max<<" "<<min<<endl;
    // Please write your code here.
    return 0;
}