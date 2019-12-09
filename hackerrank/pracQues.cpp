#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<string>Permutation(string ques){
    if(ques.length()==0){
        vector<string>base;
        base.push_back("");
        return base;
    }
   char ch=ques[0];
     
   vector<string>ans=Permutation(ques.substr(1));
   vector<string>finalans;
    
   for(string str :ans)
   {
       for(int i=0;i<=str.length();i++){
           string start =str.substr(0,i);
           string end =str.substr(i);
           string s=start+ch+end;
           finalans.push_back(s);
       }
   } 
   return finalans;
}
vector<string>Mazepath(int sr,int sc,int er,int ec)
{
if(sr==er&& sc==ec)
{
    vector<string>base;
base.push_back("");
return base;
}
vector<string>myans;
if(sc+1<=ec)
{
     vector<string>Hori =Mazepath(sr,sc+1,er,ec);
    //  for(int i =0;i<hori.size();i++){
    //      myans.push_back("h"+s[i]);
    //  }
     for (string s: Hori)
{     myans.push_back("H"+ s);
}
}

 if(sr+1<=er){
     vector<string>Verti =Mazepath(sr+1,sc,er,ec);
     for(string s: Verti)
     {myans.push_back("V"+s);
     }
 }
 if(sr<er  || sc<ec)
{
vector<string>Diagonal =Mazepath(sr+1,sc+1,er,ec);
    for(string s:Diagonal)
    myans.push_back("D"+s);
}
 return myans;
}
bool issafe(int x , int y , int er , int ec){
    if(x>=0 && y>=0 &&  x<er && y<ec){
        return true;
    }
    return false;
}

vector<string>floodfill(int sr,int sc,int er,int ec,vector<vector<bool>> & Isvisted){
    if(sr==(er-1) && sc==(ec-1) ){
        vector<string> base ;
        base.push_back("");
        return base;
    }
    Isvisted[sr][sc]=true;
    vector<string> myans ;
    int dir[8][2] ={{0,1},{0,-1},{-1,0},{1,0},{-1,1},{-1,-1},{1,-1},{1,1}};
    vector<string>dire={"R","L","u","d","d1","d2","d3","d4"};

    for(int i=0;i<8;i++){
        int X=sr+dir[i][0];
        int Y=sc+dir[i][1];
        if(issafe(X,Y,er,ec)==true && Isvisted[X][Y]==false){
            // cout<<"d";
        vector<string>Recans=floodfill(X,Y,er,ec,Isvisted);
        for(string s:Recans){
        myans.push_back(s+ dire[i]);
        }
    }

 }
    Isvisted[sr][sc]=false;
    return myans;
}

int main(){
// vector<string>ans=Permutation("abc");

  vector<vector<bool>> isVisited(3,vector<bool>(3, false));
  vector<string>myans=floodfill(0,0,3,3,isVisited);
for(string s: myans)
    cout<<s<<" ";
// vector<string> mp = Mazepath(0,0,3,3);
// for(string s : mp){
//     cout<<s<< " ";
return 0;
}