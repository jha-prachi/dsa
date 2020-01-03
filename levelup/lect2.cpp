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

//=================================================================================================================
// int coinSubseq(vector<int> &coins,int idx , int target,string ans){
//     if(idx==coins.size()|| target==0){
//         if(target==0){
//             cout<<ans<<endl;
//             return 1;
//         }
//         return 0;
//     }
//     int count=0;
//     if(target-coins[i]>=0)
//    {count+=coinSubseq(coins,idx,target-coins[idx],ans + to_string(coins[i]));
//    count+=coinSubseq(coins,idx+1,target,ans);
//    }
//    return count;
// }
// }
//===================================Queen=============================================
int Queencombi(int box,int idx,int qpsf,int tnq,string ans){
    if(idx==box || qpsf==tnq){
        if(qpsf==tnq){
    cout<<ans<<endl;
    return 1;
        }
    return 0; 
    }
    int count=0;
    count+=Queencombi(box,idx+1,qpsf+1,tnq,ans +"b"+ to_string(idx)+"q" + to_string(qpsf));
    count+=Queencombi(box,idx+1,qpsf,tnq,ans);

    return count;
}

int main()
{
   cout<< Queencombi(5,0,0,3,"");
//     vector<int> arr ={2,3,5,7};

// int ans=coinSubseq(arr,0,10,"");
//     cout<<ans<<endl;
    return 0;
}