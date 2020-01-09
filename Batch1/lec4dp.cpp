#include<iostream>
#include<vector>
#include<string>

using namespace std;
void display(vector<vector<int>> dp){
    for(int i =0;i<dp.size();i++){
        for(int j=0;j<dp[0].size();j++){
            cout<<dp[i][j]<< " ";
        }
        cout<<endl;
    }
}
int countersubse(string str){
    //babad
    vector<vector<int>>dp(str.length(),vector<int>(str.length(), 0));
    // int n = str,e
    for(int gap=0;gap<str.length();gap++){
        for(int i=0,j=gap;j<str.length();j++,i++){
            if(gap==0)
            dp[i][j]=1; // base condition
             else if(str[i]==str[j]){ // rec call 
            // countersubse[i][j]=Palindrome[i+1][j-1];
            dp[i][j]=dp[i+1][j]+dp[i][j-1]+1;
            }
            else{
                dp[i][j]= dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
            }

        }
    }
    display(dp);
    return dp[0][str.length()-1];
}
void lcsubstring(string str1 , string str2){
    vector<vector<int>>dp(str1.length()+1,vector<int>(str2.length()+1,0));
    for(int i=dp.size()-1;i>=0;i--){
        for(int j=dp[0].size()-1;j>=0;j--){
            if(str1[i]==str2[j]){
                dp[i][j]=dp[i+1][j+1]+1;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    // cout<<'h';
    display(dp);

}



int main(){
    lcsubstring("ABCDGH","ACDGHR");
   cout<<countersubse("babad");
    return 0;
}

// palidrome - gap wale method 
// lcs -> substring
// function lps(string str)
// 2d strg of lenfth str.length()+1
// loop (int i  (dp.size()-1 to 0))
// llop ( int j dp[0].size-1 to 0);
// agar str[i]==str[j]{ to hme 
//  dp[i][j]=}
// elesE{
    // dp[i][j]=
// }
// display(dp);