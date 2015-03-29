//choice code 420
#include<iostream>
using namespace std;

void function();


int main()
{

    function();
        
    return 0;   
}

void function()
{
    
 int num1, num2, num3;
 
 cout<<"Enter num1 : "<<endl;
 cin>>num1;
 
 cout<<"Enter num2 : "<<endl;
 cin>>num2;
 
 cout<<"Enter num3 : "<<endl;
 cin>>num3;



 
 if (num3 > num2)
 {
    int tmp = num3;
    num3 = num2;
    num2 = tmp;
}
 
if (num3 > num1)
 {
    int tmp = num3;
    num3 = num1;
    num1 = tmp;
}
 
if(num2 > num1)
{
    int tmp = num2;
    num2 = num1;
    num1 = tmp;
}
 
 cout<<endl<<num1<<num2<<num3;
 
 
 if ((num1 == num2) || (num2 == num3) || (num1 == num3))
{
    cout<<"at least 2 numbers are equal!";
}


}
