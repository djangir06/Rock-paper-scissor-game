#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include<windows.h>
using namespace std;
int user_input(string);
void display();
int winner(string,string);
int main(){
char input;
string name;

system("cls");
cout<<"*********************************************************************"<<endl;
cout<<"-----------------------Rock,Paper,Scissor----------------------------"<<endl;
cout<<endl<<"Enter your name: ";
getline(cin,name);
cout<<endl<<"Lets Start!!"<<endl;

do
{
    system("cls");
    display();
    user_input(name);
    cout<<endl<<"Would you like to play again?(y/n): ";
    cin>>input;
    
} while (input != 'n');




}

int user_input(string name){
int input1;
string u_input;


label1:
cout<<endl<<"Your input: ";
cin>>input1;

if( input1 == 1){
u_input = "rock";
}
else if(input1 == 2){
    u_input = "paper";

}
else if(input1 == 3){
    u_input = "scissor";

}
else{

    cout<<"Invalid input!"<<endl;
    goto label1;
}

int comp_input = rand()%3 +1;
string c_input;

if( comp_input == 1){
    c_input = "rock";
    }
    else if(comp_input == 2){
        c_input = "paper";
    
    }
    else if(comp_input == 3){
        c_input = "scissor";
    
    }
cout<<endl<<"You choosed :- "<<u_input<<endl;
cout<<"Computer choosed :- "<<c_input<<endl;

int output = winner(u_input,c_input);

if (output == 1 ){

cout<<endl<<name<<" win"<<endl;


}
else if (output == 2 ){

    cout<<endl<<name<<" lose"<<endl;


}
else if (output == -1){

    cout<<endl<<"Draw!!"<<endl;
}
    

}

int winner(string player, string computer){

if(computer == "rock"){

    if(player == "rock"){
        return -1;
    }
    else if (player == "paper"){
        return 1;
    
    }
    else if(player == "scissor"){
        return 2;

    }
}

if(computer == "paper"){

    if(player == "rock"){
        return 2;
    }
    else if (player == "paper"){
        return -1;
    
    }
    else if(player == "scissor"){
        return 1;

    }

}
if(computer == "scissor"){

    if(player == "rock"){
        return 1;
    }
    else if (player == "paper"){
        return 2;
    
    }
    else if(player == "scissor"){
        return -1;

    }
}



}void display(){

    cout<<"*********************************************************************"<<endl;
cout<<"-----------------------Rock,Paper,Scissor----------------------------"<<endl;


    cout<<endl<<"'1' for ROCK"<<endl;
    cout<<"'2' for PAPER"<<endl;
    cout<<"'3' for SCISSOR"<<endl;



}