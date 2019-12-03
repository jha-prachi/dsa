#include<iostream>
#include<vector>
#include <string>

using namespace std;

string removehi(string ques , string ans)
{

if(ques.length()==0)
 return ans;

if(ques.length()>2 && ques[0]=='h'&& ques[1]=='i' && ques[2]=='t')
{
    ans =ans +"hit";
return removehi(ques.substr(3),ans);

}
if(ques.length()>1 && ques[0]=='h' && ques[1]=='i')
return removehi(ques.substr(2),ans);
else
{
    // char ch = ques[0];
    ans = ans + ques[0];
    // cout<<" " <<ans;
     
    return removehi(ques.substr(1),ans);
}

}
string removehiwithoutans(string ques )
{

if(ques.length()==0)
 return "";

if(ques.length()>2 && ques[0]=='h'&& ques[1]=='i' && ques[2]=='t')
{
    // ans =ans +"hit";
return "hit" + removehiwithoutans(ques.substr(3));

}
if(ques.length()>1 && ques[0]=='h' && ques[1]=='i')
return removehiwithoutans(ques.substr(2));
else
{
    char ch = ques[0];
    // ans = ans + ques[0];
    // cout<<" " <<ans;
     
    return ch+ removehiwithoutans(ques.substr(1));
}

}
vector<string> subseqreturn(string ques){
    if(ques.length()==0){
        vector<string> base;
         base.push_back("");
        return base;
    }

    vector<string> finalans;
    vector<string> refernce = subseqreturn(ques.substr(1));
    char ch = ques[0];
    for(string s : refernce){
        finalans.push_back(ch+s);
    }
    for(string s : refernce){
        finalans.push_back(s);
    }
    return finalans;
}
void subsequence(string ques, string ans){
if(ques.length()==0){
cout<<ans<<" ";
return ;
}

char ch =ques[0];
 subsequence(ques.substr(1),ans+ch);
 subsequence(ques.substr(1),ans);
}
// permuation
// abc bac bca acb cab acb
// ans ki as a argument hme void type . return 
vector<string> Permutation (string ques ){
 if(ques.length()==0)
 return ""
}








int main()
{
    // subsequence("abc","");
    // cout<<removehiwithoutans("ihhtihithithitjfggcijbguhhlkhjgihiiihih");
vector<string> ans  = subseqreturn("abc");
for(string s: ans){
    cout<<s<<" ";
}
 return 0; 
}
