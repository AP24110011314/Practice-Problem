#include<iostream>
#include<vector>
using namespace std;


//First method::
// int arrange(vector<int>&man){
//       int j=man.size()-1;
//       int i=0;
//       while(i!=j){
//         if(man[i]==1){
//         man[i]=man[i]+man[j];
//         man[j]=man[i]-man[j];
//         man[i]=man[i]-man[j];
//         j--;}
//         if(man[i]==0)i++;
//       }
//       return 0;
// }

//Second Method::


void arrange(vector<int>&man){
  int i=0,j=man.size()-1;
  while(i!=j){
    if(man[i]==0)i++;
    if(man[j]==2)j--;
    else{
      if(man[i]==1 && man[j]==0){

      }
      if else(){

      }
      else{
        
      }
    }
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
    arrange(arr);
    cout<<endl<<"The Sorted Vector::"<<endl;

    for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
    } 
    return 0;
}

