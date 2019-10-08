#include <iostream>
using namespace std;

int main (int args , char **argv)

int fact (int n)

{
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}
void ncr()
{
    int n,r;
    cin>>n>>r;
    int ans = facto(n) /facto(n-r)*facto(r));
    ncr();
    
}