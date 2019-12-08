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
int main(){
vector<string>ans=Permutation("abc");
for(string s:ans)
    cout<<s<<" ";

// vector<string> mp = Mazepath(0,0,3,3);
// for(string s : mp){
//     cout<<s<< " ";
}