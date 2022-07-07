// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int mul;
    int sum=0;
    int n;
    cout<<"Enter natural numbers"<<endl;
    cout<<"Enter numbers 3 or 5"<<endl;
    cin>>n;
    for(int i=0;i<1000;i++)
    {
        // cout<<i;
         mul=n*i;
            
        if(mul%3==0 || mul%5==0)
        {
            sum=sum+mul;
           
            cout<<"Mul of 3"<<endl;
        }
        else
        {
            cout<<"please enter correct number"<<endl;
        }
    }
    
   cout<<sum;
    
    return 0;
}
