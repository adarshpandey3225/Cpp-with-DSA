// Q6. WAP to print the sum of a given number and its reverse.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int reverse = 0;
    int ld = 0;
    int temp = n;
    for(int i=0;n>0;i++){
        reverse = reverse * 10;
        ld = n % 10;
        reverse += ld;
        n /= 10;
    }
    cout<<"Sum of "<<temp<<" and "<<reverse<<" = "<<reverse + temp;
    
}

