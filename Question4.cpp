// Q4. WAP for finding the volume of the cylinder by taking radius and height as input.

#include<iostream>
using namespace std;
int main(){
    int r,h;
    float pi = 3.14159;
    cout<<"Enter radius of a cylinder = ";
    cin>>r;
    cout<<"Enter height of a cylinder = ";
    cin>>h;

    float Volume = pi * r * r * h;
    cout<<"Volume of a cylinder = "<<Volume;
}
