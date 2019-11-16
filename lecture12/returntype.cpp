#include <iostream>
#include <vector>
#include <string>

using namespace std;


string removeHi01(string ques){
// base case
    if(ques.length()==0){
    // cout<<ans<<endl;
    return "" ;    
    }
    // char ch = ques[0];
    if(ques.length()>1 && ques[0]=='h'&&ques[1]=='i'){
        string ros = ques.substr(2);
        return removeHi01(ros);
    }else{
        string ros= ques.substr(1);
        return ques[0]+removeHi01(ros);
    }
// htmk -> tmk ,"h" -> mk ,"ht"


}

string removehiwithouthit(string ques)
{
if(ques.length()==0)
return " ";
if(ques.length()>1 && ques[0]=='h' && ques[1]=='i')

    if(ques.length()>2 && ques[2]=='t')
        return "hit" + removehiwithouthit(ques.substr(3));
else
        return removehiwithouthit(ques.substr(2)); 

else
return ques[0]+removehiwithouthit(ques.substr(1));


}

//================================================================
vector<string> subseq(string str)
{
    if (str.length() == 0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }

    char ch = str[0];
    vector<string> smallAns = subseq(str.substr(1));
    vector<string> myAns;

    for (string s : smallAns)
      {  myAns.push_back(s);
     
      }

    for (string s : smallAns)
    {
        myAns.push_back(ch + s);

  
    }

    return myAns;
}
//========================================================
int mazePathdiagonal(int sr, int sc, int er, int ec)
{
    int horizontal=0;
    int vertical =0; 
    int diagonal=0;
    if (sr == er && sc == ec)
    {
        // vector<string> base;
        // base.push_back(" ");
        return 0;
    }

   // vector<string> myAns;
    if (sc + 1 <= ec)
    
    {
        for(int i;i>=arr.size();i++)
        horizontal = mazePathdiagonal(sr, sc + arr[i], er, ec);
        // for (string s : horizontal)
        //     myAns.push_back("h" + s);
    }

    if (sr + 1 <= er)
    {
        vertical = mazePathdiagonal(sr + 1, sc, er, ec);
        // for (string s : vertical)
        //     myAns.push_back("v" + s);
    }
    if (sr+1<=er && sc+1<=ec )
{
        diagonal = mazePathdiagonal(sr + 1, sc, er, ec);
        // for (string s : diagonal)
        //     myAns.push_back("d" + s);
}

    return max(horizontal,max(vertical,diagonal))+1;
}

//=================================================================
vector<string> mazePath_D(int sr,int sc,int er,int ec){

   if(sr==er && sc==ec){
       vector<string> base;
       base.push_back("");
       return base;
   }
         vector<string> myAns;

  bool Is safe(int x, int y,int er ,int ec, vector<vector<bool>> && board )    
 {
  if(x<0 || y<0 || x>er || y>ec || board [x][y]) return false; 

  return true;
 }

   for(int i=1;sc+i<=ec;i++){
   vector<string> hori=mazePath_D(sr,sc+i,er,ec);
    for(string s:hori){
        myAns.push_back("H"+to_string(i)+s);

    }
   }

   for(int i=1;sr+i<=er;i++){
   vector<string> Vert=mazePath_D(sr+i,sc,er,ec);
   for(string s:Vert){
        myAns.push_back("V"+to_string(i)+s);

    }
   }

    for(int i=1;sr+i<=er &&sc+i<=ec;i++){
   vector<string> Diag=mazePath_D(sr+i,sc+i,er,ec);
   for(string s:Diag){
        myAns.push_back("D"+to_string(i)+s);
    }
    }

   return myAns;
}


int main(){
  // cout<<removehiwithouthit("ihihihithihihhithhhhithiiihithhithit");
   // cout<<removeHi01("ihihhithithihhhhhithitt");
//    vector<string> ans = subseq("abcd");
//     for (string s : ans)
//         cout << s << " ";
//   int ans = mazePathdiagonal(0, 0, 3, 3);
//   cout<<ans;
vector<string> ans = mazePath_D(0,0,3,3);
  for (string s : ans)
        cout << s << " "<<endl;
    return 0;
} 