#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout <<"Enter the number: ";
    cin>>x>>y;
    //cout<<x<<endl<<y;
    //cout <<"Hii";
    cout<<(x+=y-=x);
    return 0;

}
 