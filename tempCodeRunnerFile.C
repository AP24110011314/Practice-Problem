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