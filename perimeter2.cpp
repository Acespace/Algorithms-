// Choice Code 420
#include <iostream>
using namespace std;


void getPerim();
//gets length and width from user, then calls computation and output functions

int computePerim(int len, int width);
//computes perimeter

void outputPerim(int length, int width, int perimeter);
//outputs perimeter and both sides

int main()
{
    getPerim();
    
    return 0;
}

void getPerim()
{   
    
    int len, width, perimeter;
    
    cout<<"Enter length : ";
    cin>>len;
    cout<<endl<<"Enter width : ";
    cin>>width;
    cout<<endl;
    
    perimeter = computePerim(len, width);
    
    outputPerim(len, width, perimeter);

}

int computePerim(int len, int width)
{
    return (2 * len) + (2* width);
    
}

void outputPerim(int length, int width, int perimeter)
{
    cout<<"length = "<<length<<endl;
    cout<<"width = "<<width<<endl;
    cout<<"perimeter = "<<perimeter;
    
}




