#include<iostream>
#include<vector>
using namespace std;
// void input(vector<int> &arr){
//     // arr = 0th index
//     // cin>>a>>b>>c>>d>>e
//     //  cin>>arr[0]>>arr[1]>>arr[2]>>arr[4]
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
// }
// void display(vector<int> &arr){
//     for(int i=0;i<=arr.size()-1;i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){
    cout<<"enter ypur size : ";
int n;
 cin>>n;
vector<int> arr(n,0); //declare
// input(arr);
// display(arr);
for(int i =0;i*i<=n;i++){
    cout<<i*i<<" ";
}
// arr[0],arr[1],arr[2],arr[3],arr[4]
// array arr.size()
// arr[0],arr[1],arr[2]
// cout<<arr.size()
// 3

}






// // int a =1;
// // int b=2;
// // ineffective method
// // arrays - homegenours container 
// // string ques= "abc"
// // char ch ="a"
// // java  array declaration

// int size = 2;
// int[] arr = new int[size];
// // 0 , 1 
// // arr[0] , arr[1]
// // arrays indexing start from zero to size-1
// // cpp vectors 


// library include #include<vector>
// // vector<int> arr = new vector(n,0);
// vector<int> arr(10,0);
// arr[0]=1
// arr[1]=2
