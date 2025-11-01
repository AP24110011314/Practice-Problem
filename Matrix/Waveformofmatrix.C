#include <iostream>
using namespace std;
int main() {
    int rows ;
    int cols ;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    int matrix[rows][cols];
    cout<<"Enter elements of the matrix:"<<endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin>>matrix[i][j];
        }
    }
    cout<<"Original Matrix:"<<endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Waveform Traversal of the Matrix:"<<endl;
    for(int i = 0; i < rows; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < cols; j++) {
                cout<<matrix[i][j]<<" ";
            }
        } else {
            for(int j = cols - 1; j >= 0; j--) {
                cout<<matrix[i][j]<<" ";
            }
        }
    } 
    cout<<endl;
    return 0;
}   