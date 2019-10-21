#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
int n ;
cin>>n;
int count = 0;

while(n!=0)
{
    n /=10;
    count++;
}

cout<<"digits:" <<count<<endl;
}