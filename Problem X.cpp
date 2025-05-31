#include<iostream>
using namespace std;
int main()
{
    int l1,l2,r1,r2,left,right;
    cin>>l1>>r1>>l2>>r2;
    if(l1>l2)
    {
        left=l1;
    }
    else{
        left=l2;
    }
    if(r1<r2)
    {
        right=r1;
    }
    else{
        right=r2;
    }
    if(left<=right)
    {
        cout<<left<<" "<<right<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

    return 0;

}