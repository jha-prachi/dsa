#include<iostream>
#include<vector>
using namespace std;
    void input(vector<vector<int>> &arr){
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                cin>>arr[i][j];
            } 
        
        }
        
    }
    // int display(vector<vector<int>> &arr){
    //     for(int i =0;i<arr.size();i++){
    //         for(int j =0;j<arr[0].size();j++){
    //             cout<<arr[i][j]<"  ";
    //         }
    //          cout<<endl;
    //     }
       
    // }
    void wavemotion(vector<vector<int>> &arr){
        for(int i=0;i<arr.size();i++){
            if(i%2==0){
            for(int j=0;j<arr[0].size();j++)
            cout<<arr[i][j]<<" ";
            }
            else{
             for(int j=arr[0].size()-1;j>=0;j--) 
             cout<<arr[i][j]<<" ";
              } 
        //    cout<<"  "; 
        }
    }
    void exitpoint(vector<vector<int>> &arr){
        int k=0, row=0 , col=0;
    
        while(true){
            k = (k + arr[row][col])%4; //for mapping with respective 0 to 3        
            if(k==0)
        {
            col++;
            if(col==arr[0].size()){
                cout<<"row"<<row<<"col"<<col-1;
                break;
            }
        }
            if(k==1){   
                row++;
                if(row==arr.size()){
                    cout<<"row"<<row-1<<"col"<<col;
                        break;
                }
  
            }
            if(k==2){
                col--;
                if(col==-1)
                { 
                    cout<<"row"<<row<<"col"<<col+1;
                    break;
                }
            }
            if(k==3){
                row--;
                if(row==-1)
                {
                    cout<<"row"<<row+1<<"col"<<col;
                    break;
                }
            }
        }
    }
    // void ExitPoint(vector<vector<int>> &arr){
    //     int row=0 , col=0;
    //     if(k==0){
    //         for(int j=col;j<arr[0].size();j++){
    //          if(arr[col][j]==1){
    //              k++;
    //              col=j;
    //              break;
    //          }  
             
    //         }
    //     }
    //     if(k==1){
    //         for(int i=row;i<arr.size();i++){
    //          if(arr[i][col]==1){
    //              row=i;
    //              k++;
    //              break;
    //          }  
    //         }

    //                 }
    //     if(k==2){
            
    //     }
    //     if(k==3){

    //     }






    // }
    
int main()
{
    int rows , column;
    cin>>rows>>column;
    vector<vector<int>> arr (rows,vector<int>(column,0));
    input(arr);
   // wavemotion(arr);
   exitpoint(arr);
   // display(arr);
    return 0;
}




/*w
0 0 0 0 1
1 0 0 1 0
0 0 0 0 0
0 0 0 1 0
1 0 0 0 1

  0 1 2
0
1
2

vector 2D
vector<vector<int>>arr(n ,vector<int>(m,0));
java int[][] arr = new int[n][m];
n -> row and m -> columns
arr[][] 
row size 
arr.size() - cPP
arr.length

col size
arr[0].size() - cpp
arr[0].length

arr[0] -> 1 2 3 4 5 - row0
arr[1]->  6 7 8 9 10 - row1
arr[2] -> 11 12 13 14 15 - row2
arr[3]->  16 17 18 19 20 - row3
arr[4] -> 21 22 23 24 25 - row4
          | 
       columns
java 
int arr[7]={4 ,5,6,78,98,45,12}
vector<int> arr={3,4,4,5,5,6,6,8}

Java 2D
int  arr[][]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}
1 2 3
4 5 6
7 8 9
10 11 12

Cpp 2d
vector<vector<int>> arr = {{1,2,3}}
linear 
1 2 3 4 5 10 9 8 7 6 11 12 13 1 15 20 19..


(0,0) - 

*/