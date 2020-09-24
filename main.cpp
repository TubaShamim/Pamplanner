#include <iostream>
#include<string>
#include <cstdlib> 
#include <ctime> 
using namespace std;
void special();
int main();
void contprogram();
void consultation();
void design();
void finale();
void form();
void heardwhere();
string chooseplan;
string age;
string returncstmr;
int rand();
int num11 =(rand()%100);
int num22 =(rand()%100);
int num33 =(rand()%100);
string name;
string response; 
bool right_response = false;   

int randomGenerator(int min, int max){
  srand(time(NULL));
  return rand()%(max-min + 1) + min;
}

void printDivider(string sectionName){
  cout <<endl<< "~~~~~~~~~~~~~~~~~~~~~~~" << sectionName <<  "~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}

void heardwhere()
{
  cout<<"\nIs that so? May i ask where you heard about us from? (Please note that Pam has been designed to only recognize certain key words e.g TV, social media, family...)\n\n> ";
  cin.ignore();
getline(cin, response);

string answer[50] = 
{ "TV","tv","Tv","SOCIAL MEDIA","Social media","Social Media", "FAMILY","family","social media","Family","Newspaper" ,"NEWSPAPER","FAMILY AND FRIENDS","Family and Friends","Family and Friends","family and friends", "PAMPHLET","Pamphlet", "pamphlet", "PAMPHLETS", "Pamphlets","pamphlets","FRIENDS AND FAMILY", "friends and family", "Friends and Family", "Friends And Family" 
};

while (!right_response) 
{
  for (int i=0; i<=25 && !right_response; i++) 
  {
    if (response.compare(answer[i]) == 0) 
    {
        right_response = true;
    }
  }
  if (!right_response) 
  {
    cout<<"\nPam can not recognize that input. Please try again. \n\n> " ;
    getline(cin, response);
  }
}
}


void greeting(){
  printDivider("GREETING");
  cout<<endl<<"Hi there, \n\n \t\tI'm Pam and i'm here to welcome you to Pam's Pamplanner, where we take care of you FOR YOU. Let's get started, shall we? You've had a long day."<<endl<<endl;
  }

void optornot (){
  string choice1;
  cout<<"Would you like a PAM'S CHOICE pamplan or would you rather i walk you through all the options available?"<<endl;

do{
    cout<<endl<<"Please type PAM'S CHOICE or OPTIONS"<<endl<<"> ";
    getline(cin, choice1);
  } 
  
   while (choice1 !="PAM'S CHOICE" && choice1 !="OPTIONS");

if (choice1 == "PAM'S CHOICE") 
     {
      special();
      }

    else{
      cout<<endl<<"Thank you for selecting OPTIONS.";
      contprogram();
      }
}

void contprogram(){
 char posorneg;
 cout<<endl<<endl<<"\t\t Pam's Pamplanner offers in person consultation as well. We'd like your experience to be nothing short of perfect!"<<endl<<endl<<"Is an in person consultation something you'd be interested in? :) (kindly input Y for yes, N for no) ";
      cin>>posorneg;

   while (posorneg !='Y' && posorneg != 'N')
   {
    cout<<endl<<"Pam can not recognize that input. Please try again. ";
    cin>>posorneg;
  } 

if(posorneg == 'Y')
{
 consultation();
}
      else {
    cout<<endl<<"That's fine, i'll walk you through designing your VERY OWN PAMPLAM now! :D"<<endl;
    form();
      }
}

void special(){
  cout<<endl<<"Thank you for selecting PAM'S CHOICE. With this pamplan you get"<<endl<<"\n\t\t1x SWEDISH MASSAGE"<<endl<<"\t\t45 MINUTES at a STATION-TYPE BUFFET"<<endl<<"\t\t30 MINUTES of BINGO"<<endl<<"\nDISCLAIMER the pamplan above has been carefully curated according to the feedback from our returning clients and has a limit of 50 people.\n\nIt is run on first come, first serve basis. \n\nAt this time we are not offering pre-booking for a PAM'S CHOICE. We look forward to seeing you soon.\n\nTo restart program, please press enter ONCE.";
 cin.ignore();
main();
   
}

void consultation(){
         printDivider("CONSULTATION");
  cout<<endl<<"Thank you for selecting 'Y'.\n\n\t\tUnfortunately, I'm not much help in booking appointments. Pam can only do so much, after all! Argh, the agony!! But, fear not!\n\nSimply email pamplannerorg@hotmail.com requesting an appointment. Our lovely staff will help you out <3\n\nTo restart program, please press enter ONCE.\n";
  cin.ignore();
cin.get();
main();
}

void form(){

  cout<<endl<<"\t\tI will now ask you a series of questions guiding you in designing your PAMPLAN"<<endl<<endl;
 printDivider("PAMPLANNER FORM");
  cout<<"\n➀ What is your name? ";
  cin.ignore();
  getline(cin, name);

  cout<<endl<<"➁ What is your age? ";
  cin>>age;

  cout<<endl<<"➂ Are you a returning customer? (kindly input Y for yes, N for no) ";
cin>>returncstmr;
  
  if(returncstmr=="N"){
    heardwhere();
  }
design();
}

void design(){
  cout<<endl;
       printDivider("MENU");
  cout<<endl<<"Here at Pam's Pamplanner we offer the following services\n\t\t➀ emotional wellbeing\n\t\t➁ physical wellbeing\nand, as a special TREAT (!!!):\n\t\t➂ a two in one plan that includes BOTH emotional AND physical wellbeing."<<endl<<endl<<"Please let me know which one you're interested in (kindly input EMOTIONAL for emotional, PHYSICAL for physical, EMOTIONAL AND PHYSICAL for emotional and physical). ";
        cin>>chooseplan;


while (chooseplan != "PHYSICAL" && chooseplan != "EMOTIONAL" && chooseplan != "EMOTIONAL AND PHYSICAL")
  {
    cout<<endl<<"Pam can not recognize that input. Please try again. "; 
      cin>>chooseplan;
  };
 

  if(chooseplan=="PHYSICAL"){
         printDivider("");
      cout<<"\nThank you for your time and patience. You have selected PHYSICAL. Pam has chosen PLAN ORANGE for you.\n\nFor your number press enter ONCE.";
cin.ignore(); 
cin.get();
  
cout<<endl<<"▷ ▷ "<<randomGenerator(6500, 6700)<<" with graident #"<<num11;

finale();
  }

 else if (chooseplan =="EMOTIONAL") {
            printDivider("");
  cout<<"\nThank you for your time and patience. You have selected EMOTIONAL. Pam has chosen PLAN LIGHT for you.\n\nFor your number press enter ONCE...";
cin.ignore();
cin.get();

cout<<endl<<"▷ ▷ "<<randomGenerator(7777, 9874)<<" with graident #"<<num22;

finale();
 }

 else if (chooseplan =="EMOTIONAL AND PHYSICAL")  {
            printDivider("");
   cout<<"\nThank you for your time and patience. You have selected EMOTIONAL AND PHYSICAL . Pam has chosen PLAN BURGUNDY for you.\n\nFor your number press enter ONCE.";
cin.ignore();
cin.get();

cout<<endl<<"▷ ▷ "<<randomGenerator(3133, 4444)<<" with graident #"<<num33; 

finale();
 }
}

void finale (){
  if(chooseplan=="PHYSICAL"){
  cout<<"\n\nPress enter TWICE to continue...";
 cin.ignore();
 cin.get();

cout<<"Thank you "<<name<<" for your time and patience. We have recorded your details. Your number is "<<randomGenerator(6500, 6700)<<" with gradient #"<<num11<<".\n";

         printDivider("");

cout<<"\nYou will recieve time(s) and date(s) available for your particular number and gradient in mail by the end of this week."; 
}

 else if (chooseplan =="EMOTIONAL") {
  cout<<"\n\nPress enter TWICE to continue...";
 cin.ignore();
 cin.get();

cout<<"Thank you "<<name<<" for your time and patience. We have recorded your details. Your number is "<<randomGenerator(7777, 9874)<<" with gradient #"<<num22<<".\n";

         printDivider("");

cout<<"\nYou will recieve time(s) and date(s) available for your particular number and gradient in mail by the end of this week.";  
}

else {
  cout<<"\n\nPress enter TWICE to continue...";
cin.ignore();
cin.get();

cout<<"Thank you "<<name<<" for your time and patience. We have recorded your details. Your number is "<<randomGenerator(3133, 4444)<<" with gradient #"<<num33<<".\n";

         printDivider("");

cout<<"\nYou will recieve time(s) and date(s) available for your particular number and gradient in mail by the end of this week.";   
} 

cout<<"\n\nTO RESTART PROGRAM PRESS ENTER";
cin.ignore();
main();

}

int main(){
greeting();
optornot();
return 0;
}