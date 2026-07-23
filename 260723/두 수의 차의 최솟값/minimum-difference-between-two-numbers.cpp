#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int min=100;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int m=nums[j]-nums[i];
            if (m<0){
                m*=-1;
            }
            if (m<min){
                min=m;
            }
        }
    }
    cout<<min<<endl;

    // Please write your code here.
    return 0;
}