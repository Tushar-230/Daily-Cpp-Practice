#include<iostream>
using namespace std;
int main()
{
    int n;
    int num;
    int evencount=0;
    int oddcount=0;

    cout<<"How many numbers will you enter? "<<endl;
    cout<<"Numbers: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter number #"<<(i+1)<<':';
        cin>>num;
        if(num % 2 ==0)
        {
            evencount++;
        }
        else{
            oddcount++;
        }

    }
    
    cout<<"The number of even: "<<evencount<<endl;
    cout<<"The number of odd: "<<oddcount<<endl;
    
    
    return 0;
}