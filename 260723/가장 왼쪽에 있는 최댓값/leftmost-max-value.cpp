#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    while (N!=0){
        int max=nums[0];
        int idx=0;
        for(int i=1;i<N;i++){
            if (nums[i]>max){
                max=nums[i];
                idx=i;
            }
        }
        cout<<idx+1<<" ";
        N=idx;
        
    }
    // Please write your code here.

    return 0;
}
