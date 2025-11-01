#include<iostream>
using namespace std;   
int main(){
    int n;
    cout<<"Enter the rows of the matrix: ";
    cin>>n;
    cout<<"Enter the columns of the matrix: ";
    int m;
    cin>>m;
    int a[n][m];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The original matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The spiral order of the matrix is: "<<endl;
    int top=0,bottom=n-1,left=0,right=m-1;
    while(top<=bottom && left<=right){
            if(top>bottom || left>right)
                break;
            for(int i=left;i<=right;i++)
                cout<<a[top][i]<<" ";
            
            top++;
            if(top>bottom || left>right)
                break;
            for(int i=top;i<=bottom;i++)
                cout<<a[i][right]<<" ";
            
            right--  ;
            if(top>bottom || left>right)
                break;
            for(int i=right;i>=left;i--)
                cout<<a[bottom][i]<<" ";
            
            bottom--;
            if(top>bottom || left>right)
                break;
            for(int i=bottom;i>=top;i--)
                cout<<a[i][left]<<" ";

            left++;
        
    }
    return 0;
}
//We can also use count variable to keep track of the number of elements printed and stop when count reaches n*m. in every for loop increment the count variable by 1.
//for(int i=left;i<=right&& count<n*m;i++,count++)
