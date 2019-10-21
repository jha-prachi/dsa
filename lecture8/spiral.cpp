#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>>&arr){
    for (int i =0;i<arr.size();i++){
        for (int j =0;j<arr[i].size();j++){
            cin>>arr[i][j];
        }
    }

}
void spiral(vector<vector<int>>&arr){
    int minr =0;
    int minc =0;
    int maxr = arr.size()-1;
    int maxc = arr[0].size()-1;
    int totalele =arr.size()*arr[0].size();
    while(totalele!=0){
      for(int i =minc; i<=maxc && totalele!=0; i++){
      cout<<arr[minr][i]<<" ";
      totalele--;  
    }
    minr++;
    for(int i =minr; i<=maxr && totalele!=0;i++){
        cout<<arr[i][maxc]<<" ";
        totalele--;
    }
    maxc--;

    for(int i =maxc; i>=minc && totalele!=0;i--){
        cout<<arr[maxr][i]<<" ";
        totalele--;
    }
    maxr--;
for(int i =maxr;i>=minr && totalele!=0 ;i--){
    cout<<arr [i][minc]<<" ";
    totalele--;
}
minc++;
}
}
void transpose (vector<vector<int>>&arr){
    for(int i=0; i<arr.size();i++){
        for(int j=i;j<arr[0].size();j++){
        swap(arr[i][j],arr[j][i]);
    }
    }
}
void SwapC(vector<vector<int>>&arr){
    int c1=0;
    int c2=arr[0].size()-1;
    while(c1<c2){
        for (int r=0;r<arr.size();r++){
            swap(arr[r][c1],arr[r][c2]);
            
        }
        c1++;
        c2--;
    }
}

void SwapH(vector<vector<int>>&arr){
    int r1=0;
    int r2=arr[0].size()-1;
    while(r1<r2){

            swap(arr[r1],arr[r2]);
            r1++;
            r2--;
        }
    }

void rotate(vector<vector<int>>&arr,bool isclock)
{
    transpose(arr);
    if(isclock==true)
    {
        SwapC(arr);
    }
    else
    {
        SwapH(arr);
    }
    
}
void display (vector<vector<int>>&arr){  
    for(vector<int>ar:arr){
        for (int ele: ar){
            cout<<ele<<" ";

        }
        cout<<endl;
    }
}

int main(int args , char** argv){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m,0));
     input(arr);
     //spiral(arr);
     rotate(arr,true);
     display(arr);
    return 0;
}