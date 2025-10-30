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
    cout<<endl<<"Enter the steps to rotate array:";
    int m;
    cin>>m;
    int r=(arr.size())-1;
     for(int i=0;i<m;i++){
        int a,m;
        for(int p=0;p<arr.size();p++){
            a=arr[p];
            if(p==0){
                arr[p]=arr[r];
            }
            else{
                arr[p]=m;
            }
            m=a;
         
        }
        
    }
    cout<<endl<<"The Rotated Array::"<<endl;

    for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}
