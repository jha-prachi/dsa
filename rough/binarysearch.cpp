#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int> &arr, int data){
    int li=0 , ri = arr.size();
    while(li<ri){
        int mid = (li+ri)/2;
        if(arr[mid]==data){
            return mid;
        }
        else if(arr[mid]>data){
            ri=mid;
        }
        else{
            li=mid;
        }
    }
}

// next question 
bool bs_findelement(vector <int> &arr , int data){
    int li = 0, ri=arr.size();
    while(li<=ri){
        int mid =(li+ri)/2;
        if(arr[mid]==data){
            return true;
        }


        else if(arr[mid]>data){
            ri =mid-1;
        }
            
    
        else{
            li = mid+1;
        }
            
        
    }
    return false;
}


int main(){
    vector<int> arr = {1 ,5,8,9,12,35,40};
    // data =7
    cout<<(boolalpha)<<bs_findelement(arr,4);    //aise bhi kar sakte hain
    return 0;
}
    
//   1 5 8 9 12 35 40
//   0 1 2 3 4   5    6
//   li    mid          ri 
//   li  ri
//   arr [3]==mid

//   0 to 2 and 4 to 7
// task 2 -> 

//   li = 0 and ri =7 
//   li to ri
//   0 to 7
//   mid = 3
//   arr[3]==data
//   arr[3]>data
//   9>8
//   0 to 3
//   mid=1;
//   arr[1]
//   0 to 1 and 1 o 3
//   li =1
//   1 to 3;
//   1+3=2
//   arr



//   li
//   0 to 7
//   7/2=3
//   0 to 3 and 3 to 7
//   arr[3]
//   3/2=1
//   0 to 1 and 1 to 3
//   arr[1]=5
//   1 to 3
//   4/2=2
//   12 45 78 98 103 546 989
//   0  1  2  3  4   5   6
//   0 to 6
//   6/2 =3;
// 0 to 3 and 3 to 6
// 3+6/2=4
// 3 to 2 and 4 to 6
// 3 to 4
// 3 to 3 and 3 to 4
// 7/2=3




//   return mid;
  
// x
// 0 to 100 
// li to ri 


// 0 - 50 & 50- 100
// 0to 50
// li to ri
// 0+50/2 = 25
// 0 - 25 25 - 50
// 25+50/2=37
// 25-37 & 37-50
// 37+50/2 =43
// 37 to 43 & 43 to 50
// 40
// 37 to 40 & 40 to43
// 37+40/2 = 38
// 37 to 38 &38 40
// 38+40/2=39
// 38to 39 and 39 to 40
// li to ri
// ri 42 to 40 
// li -> | <-ri
// <-ri | li-> // glat condition
// return mid ;

// [2 3 4 9 24 65 100]
// incresign orcer

// n pages 
// 50;
// 50th 
// 3 type complexity
// best -> 1
// average -> 25
// worst -> 50 o(n)
// 1 2 3 4 50th - o(n)
// 45th - 45 computation

// 50 pagesna
// 45
// 0 to 25 and 25 to 50 -1
// 25 to 50
// avg = 25+50/2
// avg=37
// 25 to 37 and 37 to 50  -2
//  37 to 50

//  37+50/2;
//  avg=43
//  37 to 43 and 43 to 50 -3
// li to avg and avg to ri
// 43 to 50
// 43 to 46 and 46 to 50; -4
// 43 to 46;
// li to avg and avg to ri
// 43 to 44 and 44 to 46 -4
// 44 to 46 
// avg=45; -6
