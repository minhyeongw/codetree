#include <iostream>
using namespace std;

int main() {
    int w=13;
    double g=0.165;

    cout<<fixed;
    cout<<w<<" * "<<g<<" = ";

    cout.precision(6);
    cout<<w*g;
    // Please write your code here.
    return 0;
}