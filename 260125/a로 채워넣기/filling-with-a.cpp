#include <iostream>
using namespace std;

int main() {
    string text="";
    int l;
    cin>>text;
    l=text.length();
    text[1]='a';
    text[l-2]='a';
    cout<<text;
    // Please write your code here.
    return 0;
}