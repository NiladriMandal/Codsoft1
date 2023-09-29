#include <iostream>
using namespace std;

int main() {
    float First,second,answer;
    char op;
    cout<<"::Basic Calculator::"<<endl;
    cout<<endl;
    cout<<"Enter first number : ";
    cin>>First;
    
     cout<<"Choose your operator (+ | - | * | / ): ";
    cin>>op;
    
    cout<<"Enter second number : ";
    cin>>second;

   

    switch(op){
        case '+':
        answer=First+second;
        cout<<"Your answer is : "<<answer;
        break;
        case '-':
        answer=First-second;
        cout<<"Your answer is : "<<answer;
        break;
        case '*':
        answer=First*second;
        cout<<"Your answer is : "<<answer;
        break;
        case '/':
        if(second!= 0){
        answer=First/second;
        cout<<"Your answer is : "<<answer<<endl;
        }
        else
        cout<<"Cannot divide by zero"<<endl;
        break;
        default:
        cout<<"Incorrect operator !!!";
        break;
    }

    return 0;
}