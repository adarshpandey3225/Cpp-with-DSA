#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int sum = 0;
    int temp = n;
    for(int i=1;n>0;i++){
        int ld = n % 10;
        int digit = ld*ld*ld;
        sum += digit;
        n /= 10;
    
    }
    if(sum==temp) cout<<"Armstrong Number";
    else cout<<"Not Armstrong number";
    
    
}