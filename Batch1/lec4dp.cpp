#include <iostream>
#include <vector>
#include <string>

using namespace std;
void display(vector<vector<int>> dp)
{
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
int countersubse(string str)
{
    //babad
    vector<vector<int>> dp(str.length(), vector<int>(str.length(), 0));
    // int n = str,e
    for (int gap = 0; gap < str.length(); gap++)
    {
        for (int i = 0, j = gap; j < str.length(); j++, i++)
        {
            if (gap == 0)
                dp[i][j] = 1; // base condition
            else if (str[i] == str[j])
            { // rec call
                // countersubse[i][j]=Palindrome[i+1][j-1];
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] + 1;
            }
            else
            {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
            }
        }
    }
    display(dp); // display of array
    return dp[0][str.length() - 1];
}
//============================================================
int MCM(int st, int end, vector<int> &row, vector<int> &col, vector<vector<int>> &dp)
{
    if (st == end)
        return 0;
    if (dp[st][end] != 0)
        return dp[st][end];
    int min_ = 1e8;
    for (int cut = st; cut < end; cut++)
    {
        int left = MCM(st, cut, row, col, dp);
        int right = MCM(cut + 1, end, row, col, dp);
        int cost = left + row[st] * col[cut] * col[end] + right;
        min_ = min(cost, min_);
    }
    dp[st][end] = min_;
    return min_;
}
// int roadcutting(vector<int> price , int n){
//     for(int i )
// }
//==============================================================================

int Cut_Road(vector<int> arr, int n, vector<int> price)
{
    if (n <= 0)
        return 0;

    int max_ = -1e8;
    for (int i = 0; i < n; i++)
    {
        if(n-arr[i]>=0){
        int ans = Cut_Road(arr, n - i - 1, price);
        ans = ans + price[i];
        max_ = max(max_, ans);
        }
    }
    return max_;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> paisa{1, 5, 8, 9, 10, 17, 17, 20};
    cout << Cut_Road(arr, 8, paisa);
    // vector<int> row{40,20,30,10};
    // vector<int> col{20,30,10,5};
    // vector<vector<int>> dp(row.size(),vector<int>(row.size(),0));

    // cout<<MCM(0,row.size()-1,row,col,dp)<<endl;
    //    cout<<"count of subsequence:"<<endl<<countersubse("babad");
    return 0;
}

// palidrome - gap wale method
// lcs -> substring