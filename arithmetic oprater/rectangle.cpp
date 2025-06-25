#include<iostream>
using namespace std;

int main(){

int length, width, area, Perimeter;
    cout <<"Enter the length: ";
    cin>>length;
    cout <<"Enter the width: ";
    cin>>width;

area = length * width;
Perimeter = 2 * (length + width);

    cout <<"The value of area is: "<<area<<endl;
    cout <<"The value of perimeter is: "<<Perimeter<<endl;

return 0;
}