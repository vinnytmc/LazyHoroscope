//Authors:Vincent Lopez
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string firstName;
  string lastName;
  int lucky;
  int index;
  int index2;

  //get user input
  cout<<"what is in your first name?\n";
  cin>>firstName;
  cout<<"what in your last name?\n";
  cin>>lastName;
  //tell fortune
  index = firstName.length()-1;
  index2 = lastName.length()-1;

  cout<<"welcome, "<<firstName[0]<<"."<<lastName[0]<<".,"<<" here is your fortune...\n";
  cout<<"your lucky number is "<<firstName.length()<<"\n";

  if(firstName[0] == 'a' || firstName[0] == 'A' || firstName[0] == 'e' || firstName[0] == 'E' || firstName[0] == 'i' || firstName[0] == 'I' || firstName[0] == 'o' || firstName[0] == 'O' || firstName[0] == 'u' || firstName[0] == 'U')
  {
    cout<<"your destined to be famous!\n";
  }
  else 
  {
    cout<<"you should keep a low profile.\n";
  }

  if(lastName[index2] == 'a' || lastName[index2] == 'A' || lastName[index2] == 'e'|| lastName[index2] == 'E' || lastName[index2] == 'i' || lastName[index2] == 'I'|| lastName[index2] == 'o' || lastName[index2] == 'O' || lastName[index2] == 'u'|| lastName[index2] == 'U')
  {
    cout<<"you have already met your true love.\n";
  }
  cout<<"have a good day!\n";


  return 0;

}

