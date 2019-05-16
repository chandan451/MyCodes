#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int sum=0,diff=0,pro=0,quo=0;
   static int carr[4];
    cout<<"enter your choice\n 0.add\n 1.sub\n 2.pro\n 3.quot\n";
    cin>>c;
    carr[c]=1;
    cout<<"enter the values of a and b\n";
    cin>>a>>b; 
    sum=(a+b)*carr[0];
    diff=(a-b)*carr[1];
    pro= a*b*carr[2];
    quo=(a/b)*carr[3];

    int res=0;
    res=sum+diff+pro+quo;
    cout<<"the result is : "<<res<<endl;
    return 0;
}
