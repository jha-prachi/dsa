#include<iostream>
#include<vector>
#include<climits>
using namespace std;
  void Display_arr(vector<int>&arr , int i ){
      if( i ==arr.size())
      return;
      cout<<arr[i]<<" ";
      Display_arr(arr,i+1);
    
  }
  int maximum(vector<int>&arr , int a){
      if(a==arr.size()){
          return INT_MIN;
      }

      int ans =maximum(arr,a+1);
      return max(arr[a],ans);
  }
    bool find(vector<int>&arr,int i, int data){
        if(i==arr.size())
        return false;
        if(arr[0]==data)
        return true;
    }


int main(int args , char** argv){
 
    vector<int>arr ={2,4,5,6,3,4,56};
   cout<< maximum(arr,0)<<endl;
     //Display_arr(arr,0);
    return 0;
}