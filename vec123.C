#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>man(5);
    cout<<"Enter element: ";
    for(int i=0;i<5;i++){
        
        cin>>man[i];
    }
    cout<<"\nThe Array: ";
    for(int i=0;i<5;i++)
    cout<<man[i]<<" ";
    int l=0,m=0,h=4;
    while(m<=h){
        if(man[m]==2){
        int temp=man[m];
        man[m]=man[h];
        man[h]=temp;
        h--;

        }
        if(man[m]==0){
        int temp=man[m];
        man[m]=man[l];
        man[l]=temp;
        l++,m++;

        }
        if(man[m]==1){
        m++;}
    }


cout<<"\nThe Sorted Array: ";
    for(int i=0;i<5;i++)
    cout<<man[i]<<" ";
    
    return 0;
}