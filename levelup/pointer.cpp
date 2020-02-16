#include <iostream>

using namespace std;
int fun(int &a)
{
    int *b = &a;
    int c = 20;
    int *d = &c;
    return d - b;
}
void test2()
{ //int a=10;
    // int *b=&a;
//aise likh kar retrun b nahu likh sakte; 
// lekin agr hreap daal du to koi dikkat nahi hogi local variable ki
// int *b=new int (10);return b;
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        // cin >> arr[i];
        // int ar[] = {10, 20, 30, 40};
        // cout << sizeof(ar) / sizeof(arr[10]) << endl;
       
         cout << *(arr + i) << " ";
    }
    //  return &ar;
}

int main()
{
    // int a = 0;
    // fun(a);
     test2();
    // cout<<*a<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // cout << fun(a);
    return 0;
}