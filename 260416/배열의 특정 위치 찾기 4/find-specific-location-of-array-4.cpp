#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    int num=0;
    int n;

    for(int i=0;i<10;i++){
        cin>>n;
        if (n!=0){
            arr[i]=n;
            if (arr[i]%2==0){
                sum+=arr[i];
                num++;
            }
        }
        else{
            break;
        }
    }
    cout<<num<<" "<<sum<<endl;
    // Please write your code here.
    return 0;
}