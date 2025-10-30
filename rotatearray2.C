#include<iostream>
#include<vector>
using namespace std;
void rotate(int i,int j,vector<int>&man){
      for(i;i<j;i++,j--){
        man[i]=man[i]+man[j];
        man[j]=man[i]-man[j];
        man[i]=man[i]-man[j];
      }
}
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
    int k;
    cout<<endl<<"Enter the step:: ";
    cin>>k;
    rotate(0,arr.size()-k-1,arr);
    rotate(arr.size()-k,arr.size()-1,arr);
    rotate(0,arr.size()-1,arr);
    cout<<endl<<"The Rotated Array::"<<endl;

    for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}