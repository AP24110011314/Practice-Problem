  #include<iostream>
  #include<vector>

  using namespace std;

  int main(){
    vector<int>man;
    man.push_back(1);
    man.push_back(110);
    man.push_back(9);
    man.push_back(60);
    man.push_back(54);
    man.push_back(34);
    for(int i=0;i<man.size();i++){
      cout<<man[i]<<"  ";

    }
    int m=10;
    for(int i=0;i<man.size();i++){
      for(int j=i+1;j<man.size()-1;j++){
      if(m==(man[j]+man[i])){
        cout<<endl;
        cout<<man[i]<<"   "<<man[j];
        break;

      }
    }


    }

    





    return 0;

  }
