#include <iostream>
using namespace std;

int main() {
    char sym[3];
    double tem[3];
    int n=0,s[4]={};
    
    for(int i=0;i<3;i++){
        cin>>sym[i]>>tem[i];
        if (sym[i]=='Y' && tem[i]>=37){
            s[0]++;
            n++;
        }
        else if (sym[i]=='N' && tem[i]>=37){
            s[1]++;
        }
        else if (sym[i]=='Y'){
            s[2]++;
        }
        else{
            s[3]++;
        }
        
    }

    for(int i=0;i<4;i++){
        cout<<s[i]<<" ";
    }
    if (n>=2){
        cout<<"E"<<endl;
    }

    

    
    // Please write your code here.
    return 0;
}