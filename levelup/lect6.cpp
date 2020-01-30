#include<iostream>
#include<vector>
#include<string>

using namespace std;
string str1="send";
string str2="more";
string str3="money";
int vis=0;
vector<int>maping(26,0);
//=============Permutation Method-1====================================
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
//==================================Permutation Method-2=======================================================
vector<string>Permutation(string ques,string ans){
    int count=0;
    int vis=0;
    if(str.length()==0){
        return 1;
    }
    for(int i=0;i<ques.length();i++){
            int k=ques[i]-'a';
            int mask=1<<k;
                if((vis&mask)==0)
                {
                    vis|=mask;
       string st = ques.substr(0, i) +  ques.substr(i+1);
       count+=Permutation(st,ans+ques[i]);
                }
    }
    return count;
}
int Getno(string str){
    int res=0;
    for(int i=0;i<str.length();i++){

        res=res*10+maping[str[i]-'a'];
    }
    return res;
    }

int crpto(string str,int idx){
        if(idx==str.length()){ 
    int a=Getno(str1);
  
    int b=Getno(str2);
    int c=Getno(str3);
    if(a+b==c){
        cout<<a<<b<<c<<endl;
            return 1;
        }
        return 0;
        }
    char ch=str[idx];
    int count=0;
    for(int num=9;num>=0;num--){
       int mask=1<<num;
       if((vis&mask)==0){
           vis^=mask;
           maping[ch-'a']=num;
           count+=crpto(str,idx+1);
           vis^=mask;
           maping[ch-'a']=0;
       } 
       
    }
    return count;
    }
//===========================================WORD BREAK=================================================================
vector<string>alpha={"i","like","sam","sung","samsung","ice","icecream","man","mango","go"};
string count="";
char ch=str[0];
bool<string>isPresent(string str){
for(int idx=0;idx<alpha.length();idx++){
if(str==alpha[idx])
return true;
}
return false;
}
vector<string>Wordbreak(string str,string ans,vector<string>words){
    if(str.length()==0){
        cout<<ans;
        return 1;
    }
    for(int i=0;i<=str.length();i++){
        string word =str.substr(0,i);
        if(isPresent(word)) {
        count+=Wordbreak(str.substr(i+1),ans+word+" ",+word);
        }
    }
    return count;
}
int main(){
    vcetor<string>words=
    Wordbreak("ilikeicecreamandmango","",words);

    // string ques=str1+str2+str3;
    // int freq[26]={0};
    // for(int i=0;i<ques.length();i++){
    //     freq[ques[i]-'a']++;  
    // }
    // string ans="";
    
    // for(int i=0;i<26;i++){
    //   //  cout<<freq(i)<<endl;
    //     if(freq[i]!=0){
    //        ans+=(char)(i+'a');
    //     }
        
    // }
    // cout<<ans<<endl;
    // cout<<crpto(ans,0)<<endl;
    // cout<<permutation("abcd");

    
    return 0;
}