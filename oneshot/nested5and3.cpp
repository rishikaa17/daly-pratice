#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"Divisible by 5 and 3 both ";
        }
        else{
            cout<<"Invalid";
        }
    }
    else{
        cout<<"invalid condition";
    }
}