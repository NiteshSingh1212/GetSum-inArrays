#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,20,40,50,60,80};
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            cout<<"{"<<arr[i]<<" , "<<arr[j]<<"}"<<",";
        }
    }cout<<endl;
for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==70){
            cout<<"("<<arr[i]<<" , "<<arr[j]<<")"<<",";
            }
        }
    }

}