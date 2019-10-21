#include<iostream>
#include<vector>
using namespace std;

void display (vector<vector<int>>&arr){  
    for(vector<int>ar:arr){
        for (int ele: ar){
            cout<<ele<<" ";

        }
        cout<<endl;
    }
}

void input(vector<vector<int>>&arr){
    for (int i =0;i<arr.size();i++){
        for (int j =0;j<arr[i].size();j++){
            cin>>arr[i][j];
        }
    }

}
  void wavemotion(vector<vector<int>>&arr) {
 for (int row =0;row<arr.size();row++){
     if(row%2==0){
         for(int col =0;col<arr[0].size();col++){
             cout<<arr[row][col];
         }
     }
         else{
             for(int col = arr[row].size()-1;col>=0;col--){
                 cout<<arr[row][col];
             }
         }
         cout<<endl;
    }
        
  }
 void exitpoint(vector<vector<int>>&arr){
     int dir=0;
     int r=0; 
     int c =0;
     while (true){
         dir=dir+arr[r][c]%4;
         if(dir==0){
             c++;
             if(c==arr[0].size()){
                 cout<<r<<" ,"<<(c-1)<<endl;
                 break;
             }
             
         }
         else if (dir==1){
              r++;
              if(r==arr.size()){
                  cout<<c<<" , "<<(r-1)<<endl;
                  break;
              }
         }
         else if (dir==2){
             c--;
             if(c==-1){
                 cout<<(c+1)<<" , "<<r<<endl;
                 break;
             }
             
         }
         else if(dir==3){
             r--;
             if(r==-1){
                 cout<<(r+1)<<" , "<<c<<endl;
                 break;
             }
             
         }
     }
 }






  
int main(int args , char** argv){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m,0));
     input(arr);
//   wavemotion(arr);
   //   display(arr);
   exitpoint(arr);
    return 0;
}