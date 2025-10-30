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

    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the sum to be searched: ";
    int m;
    cin>>m;
    int flag=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n&&i!=j;j++){
        if((arr[i]+arr[j])==m){
            cout<<endl<<"The Elment pair is: "<<arr[i]<<" & "<<arr[j];
            flag=1;
            
        }

       }
    }
    if(flag==0){
        cout<<"We didn't fount any specific pair whose sum is:"<<m;
    }



    return 0;
}