#include<iostream>
using namespace std;
int main(){
    char x;
    cout <<"Enter a Character: ";
    cin>>x;
    int y = (int)x;
    if(y>=65&&y<=91 || y>=97&&y<=122){
        cout<<"It's a character.";
    }
    return 0;

}