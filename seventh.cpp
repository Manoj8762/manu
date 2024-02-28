#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=5)
{
    return(a+b+c+d);
}
int main()
{
    cout<<"sum of 2,3,4,5 is: "<<sum(2,3,4,5);
    cout<<" \n sum of 2 and 3 is:  "<<sum(2,3);
    return 0;
}