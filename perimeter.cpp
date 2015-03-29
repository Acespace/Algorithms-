// Example program
#include <iostream>
using namespace std;


void getPerim(int& len, int& width);
//gets length and width from user, then calls computations function

void computePerim(int len, int width);
//computes perimeter

int perimeter = 0;


int main()
{
    
    int length = 0, width = 0;
    
    getPerim(length, width);
    
    cout<<"Length = "<<length<<" width = "<<width<<" and perimeter = "<<perimeter;
    
    
    return 0;
}

void getPerim(int& len, int& width)
{   
    cout<<"Enter length : ";
    cin>>len;
    cout<<endl<<"Enter width : ";
    cin>>width;
    cout<<endl;
    
    computePerim(len, width);

}

void computePerim(int len, int width)
{
    perimeter = (2 * len) + (2* width);
    
}



