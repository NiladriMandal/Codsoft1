#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(0));
    int random;
    random=rand();
    cout<<"Guess a no between 0 to 100: ";
    int GuessNo;
    cin>>GuessNo;
    if(GuessNo<=0 && GuessNo>=100){
        cout<<"Enter a valid number !";
        return 0;
    }
    random=random%100;
    while(1){
            if(GuessNo>random){
                cout<<"Your number is too big, try again : ";
                cin>>GuessNo;
            }
            else if(GuessNo<random){
                cout<<"Your number is too small, Enter again : ";
                cin>>GuessNo;
            }
            else if(GuessNo==random){
                cout<<"Congratulation, you guess the correct number.";
                break;
            }
    }
}