#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the vector value: ";
        cin>>x;
        arr.push_back(x);
    }
    cout<<"The Vector::"<<endl;

    for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
    }
    int m=(arr.size())-1;
    for(int i=0;i<(arr.size())/2;i++,m--){
        arr[i]=arr[i]+arr[m];
        arr[m]=arr[i]-arr[m];
        arr[i]=arr[i]-arr[m];
       
    }
     cout<<endl<<"The Reversed Vector::"<<endl;

    for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";}


    return 0;
}