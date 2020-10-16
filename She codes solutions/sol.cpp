#include <iostream>
#include <vector>
#include <string>

using namespace std;

//==========================================================================
//Maze path (flood fill)

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
//======================================================================
//permutation

vector<string> permutation(string str)
{
    if (str.length() == 1)
    {
        vector<string> base;
        base.push_back(str);
        return base;
    }

    char ch = str[0];
    vector<string> recAns = permutation(str.substr(1));

    vector<string> myAns;
    for (string s : recAns)
    {
        for (int i = 0; i <= s.length(); i++)
        {
            string st = s.substr(0, i) + ch + s.substr(i);
            myAns.push_back(st);
        }
    }

    return myAns;
}


 int main(){
//    vector<vector<bool>>board(5, vector<bool>(5, false));
//    cout<<mazePath_multi(0 ,0, 2,2,board,"");
   vector<string> ans = permutation("abcd");
    for (string s : ans)
        cout << s << " ";
   return 0;

 } 
