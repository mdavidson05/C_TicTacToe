// header files
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;    

int main()
{
    // collection of words
    // You can add more 5 digit word here 
    string strList[]=
   { 
    "about","above","abuse","actor","acute","admit","adopt","adult",
    "after","again","agent","agree","ahead","alarm","album","alert",
    "alike","alive","allow","alone","along","alter","among","anger",
    "began","begin","begun","being","below","civil","claim","class",
    "clean","drawn","dream","dress","drill","drink","drive","drove",
    "dying","error","event","every","flash","fleet","floor","fluid",
    "group","grown","guard","guess","hotel","house","index","inner",
    "input","issue","joint","jones","judge","known","stone","stood",
    "valid","value","video","virus","visit","vital","voice","write"

};
     // total word size
     int n=sizeof(strList)/(sizeof(strList[0]));

    cout<<"\n            WORD GUESSING GAME              \n";
    cout<<"\nYou can quit anytime by entering : quit \n\n";
    // seeding the random number generator
    srand(time(NULL));
    int count=0;
    string guess;
    // implementation of a do-while loop
    do
    {   // pick arandom index
        int index=random()%n;
        // random position in word to replace
        int character1=random()%5;
        int character2=random()%5;
        // check to ensure we have not chosen the same index
        while(ch2==ch1)
        ch2=random()%5;

        // select word from the list of words using the random index
        string str=strList[index];
        string originalStr=str;
        // replacing character with *
        str[character1]='*';
        str[character2]='*';
        // printing the word string with info 
        cout<<"word :  "<<str;
        //asking for user input with prompt
        cout<<"\nEnter your word guess : ";

        //assinging user input to guess variable
        cin>>guess;

        // checking to see if user has opted to quit program
        if(guess.compare("quit")==0)
        {
            cout<<"\nYour total correct guess : "<<count<<endl;
            exit(0);
        }
        // if user input equals original string 
        if(guess.compare(originalStr)==0)
    {    cout<<"\n                   Your Guess is correct.\n";
         count++;
    }
    else 
    {
        cout<<"\n                   Your Guess is Incorrect.\n";
        cout<<"Correct word : "<<originalStr<<endl;
    }
    }while(1);
    // returning from main
    return 0;   
}
