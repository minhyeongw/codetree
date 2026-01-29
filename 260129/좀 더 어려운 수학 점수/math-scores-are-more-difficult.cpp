#include <iostream>
using namespace std;

int main() {
    int matha, enga, mathb, engb;
    cin>>matha>>enga>>mathb>>engb;

    if (matha>mathb){
        cout<<"A";
    }
    else if (matha<mathb){
        cout<<"B";
    }
    else{
        if (enga>engb){
            cout<<"A";
        }
        else{
            cout<<"B";
        }
    }
    // Please write your code here.
    return 0;
}