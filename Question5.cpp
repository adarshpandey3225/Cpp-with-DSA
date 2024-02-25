// Q5. WAP to find the difference between ASCII of two characters
// ,take them as input.

#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    cout<<"Enter the 1st character = ";
    cin>>ch1;
    cout<<"Enter the 2nd character = ";
    cin>>ch2;

    int difference = (int)ch2 - (int)ch1;
    cout<<"The difference between the ASCII values : "<<difference;

}
