#include<iostream>
//#include<vector>

using namespace std;
// void display(vector<int>&arr){
    
//     for(int i=0;i<arr.size();i++)
//         cout<<arr[i];
    
// }

// int main(int args,char**argv){
//     cout<<"enter your array size : ";
// int n;
// cin>>n;
// vector<int>arr(n,0);
//         cout<<"enter your array element : ";
// for(int i=0;i<arr.size();i++){

//     cin>>arr[i];
// }
// display(arr);
// }



// Another Method to travesrse the array
int main()  
{  
 int arr[5]={10, 0, 20, 0, 30}; //creating and initializing array    
        //traversing array    
       for (int i: arr)     
        {    
            cout<<i<<"\n";    
        }    
}  
