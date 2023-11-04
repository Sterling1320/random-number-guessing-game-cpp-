#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
srand(time(NULL)); 
int guesses;
int len;
cout<<"Hello and welcome to the guessing game"<<endl;
cout<<"You have to guess the random number in order to win"<<endl;
cout<<"How many digits should the number have and how many guesses do you want:"<<endl;
cin>>len>>guesses;
int dig = pow(10,len);
int num = rand() % dig;
int guess;
cout<<"What is your guess: ";
do
{
cin>>guess;
if(guess==num)
{
    cout<<"Congratulations! You have guessed it right, The number was: "<<num;
    break;
}
else if(guess<num){ 
cout<<"Try Higher"<<endl;
}
else cout<<"Try Lower"<<endl;
if((guesses-1)==0)
{
    cout<<"Oops! You are out of guesses, The number was:"<<num;
}
else cout<<"Guesses remaining:"<<guesses-1<<endl;
}while (guesses--);

return 0;
}