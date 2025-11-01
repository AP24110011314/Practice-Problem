#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    int matrix[n][n];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Original Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl; 
    }
   
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //transposed matrix
    cout<<"Transposed Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }

    for(int i=0;i<n;i++){
        
        for(int j=0,m=n-1;j<n/2;j++,m--){
        swap(matrix[i][j],matrix[i][m]);}
    }   
    cout<<"Rotated Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}