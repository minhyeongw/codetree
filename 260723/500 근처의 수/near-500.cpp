#include <iostream>
using namespace std;

int main() {
    int nums[10];
    for(int i=0;i<10;i++){
        cin>>nums[i];
    }
    int max=1, min=1000;
    for(int i=0;i<10;i++){
        if(nums[i]>max&&nums[i]<500){
            max=nums[i];
        }
        if (nums[i]<min && nums[i]>500){
            min=nums[i];
        }
    }

    cout<<max<<" "<<min<<endl;
    // Please write your code here.
    return 0;
}