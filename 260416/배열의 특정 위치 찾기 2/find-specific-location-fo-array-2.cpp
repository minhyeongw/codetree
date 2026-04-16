#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sumodd=0, sumval=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if (i%2==0){
            sumodd+=arr[i];
        }
        else{
            sumval+=arr[i];
        }
    }

    if (sumodd>sumval){
        cout<<sumodd-sumval<<endl;
    }
    else{
        cout<<sumval-sumodd<<endl;
    }
    // Please write your code here.
    return 0;
}