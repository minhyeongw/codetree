#include <iostream>
using namespace std;

int main() {
    int t1, t2, t3;
    char s1,s2,s3;
    cin>>s1>>t1>>s2>>t2>>s3>>t3;
    int cnt=0;
    if (s1=='Y' && t1>=37){
        cnt+=1;
    }
    if (s2=='Y' && t2>=37){
        cnt+=1;
    }
    if (s3=='Y' && t3>=37){
        cnt+=1;
    }

    if (cnt>=2){
        cout<<"E";
    }
    else{
        cout<<"N";
    }
    // Please write your code here.
    return 0;
}