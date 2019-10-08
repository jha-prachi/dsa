#include<iostream>
using namespace std;

 int facto(int n){
    int ans = 1;                     
    for(int i=1; i<=n; i++)
        ans*=i;
    
    return ans;
 }

int main(){

cout<<"Enter your Factorial number : ";
int num;
cin>>num;
int result = facto(num);
cout<< " your result: " <<result;

}
