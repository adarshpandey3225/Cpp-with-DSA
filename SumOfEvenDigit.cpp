// Q5. WAP to print the sum of all the even 
// digits of a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        int a = n % 10;
        if(n%2==0) sum += a;
        n /= 10;

    }
    cout<<"Sum of even digit = "<<sum;
}