#include <iostream>
#include <vector>
#include <string>

using namespace std;
 bool Issafe(int x, int y,int er ,int ec, vector<vector<bool>> &  board )    
 {
  if(x<0 || y<0 || x>er || y>ec || board [x][y]) return false; 

  return true;
 }
 vector<vector<int>>dire={{0,1},{0,-1},{-1,0},{1,0},{-1,1},{-1,-1},{1,-1},{1,1}};
 vector<string>dir={"R","L","u","d","d1","d2","d3","d4"};
 int ans=0;
int mazePath_multi(int sr,int sc,int er,int ec,vector<vector<bool>> &visited,string ans){
 if(sr==er && sc==ec)
   {
       cout<<ans<<endl;
       return 1;
   }
   int res=0;
   visited[sr][sc]=true;
 for(int i=0;i<8;i++)
 {
     int x = sr+dire[i][0];
     int y = sc+dire[i][1];
    if(Issafe(x,y,er,ec,visited))
    {
        //comsume
        //call
       res += mazePath_multi(x,y,er,ec,visited,ans+dir[i]+"");

    }
 }
     visited[sr][sc]=false;

 return res;
}

 int main(){
   vector<vector<bool>>board(5, vector<bool>(5, false));
   cout<<mazePath_multi(0 ,0, 2,2,board,"");
   return 0;

 } 
