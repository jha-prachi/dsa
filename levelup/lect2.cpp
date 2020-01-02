#include<iostream>
#include<vector>

using namespace std;
// bool safe(int x,int y,int er, int ec){
//     if(x<0 || y<0 || x>er || y>ec || board [x][y]) return false;
//     return true;
// }
vector<vector<int>>dire={{0,1},{0,-1},{-1,0},{1,0}};
 vector<string>dir={"R","L","u","d"};
 int ans =0;
 
// vector<string>floodfilled(int sr,int sc,int er,int ec){ 
//     if(sc==ec && sr==er)
//     rettun 1;
//     for(int i =0;i>dir.size();i++)
//     int X=sr +dir[i][0];
//     int Y=sc + dir[i][1];

// }
//===================================================================================================
int coin_changeP(vector<int> &coins,int target,string ans){
    int count=0;
    if(target==0){
           cout <<ans << endl;
    return 1;
    }
 
for(int i=0;i<coins.size();i++){
    if(target-coins[i]>=0){
      count+=  coin_changeP(coins,target-coins[i],ans+ to_string(coins[i]));
    }

}
return count;
}
int coin_changeC(vector<int> &coins,int idx , int target,string ans){
int count1=0;
if(target==0){
    cout<<ans<<endl;
    return 1;
}
for(int i=idx;i<coins.size();i++){
   if(target-coins[i]>=0){
       count1+=coin_changeC(coins,i,target-coins[i],ans+to_string(coins[i])); 
   } 
}
return count1;
}

int main(){
    vector<int> arr ={2,3,5,7};

int ans=coin_changeC(arr,0,10,"");
    cout<<ans<<endl;
    return 0;
}