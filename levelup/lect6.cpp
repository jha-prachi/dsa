#include<iostream>
#include<vector>
#include<string>

using namespace std;
string str1="send";
string str2="more";
string str3="money";
int vis=0;
vector<int>maping(26,0);
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


int main(){
    string ques=str1+str2+str3;
    int freq[26]={0};
    for(int i=0;i<ques.length();i++){
        freq[ques[i]-'a']++;  
    }
    string ans="";
    
    for(int i=0;i<26;i++){
      //  cout<<freq(i)<<endl;
        if(freq[i]!=0){
           ans+=(char)(i+'a');
        }
        
    }
    cout<<ans<<endl;
    cout<<crpto(ans,0)<<endl;

    
    return 0;
}






























