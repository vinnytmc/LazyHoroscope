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
  //get user input
cout<<"enter in your first name\n";
cin>>firstName;
cout<<"enter in your last name\n";
cin>>lastName;
  //tell fortune
cout<<"welcome "<<firstName[0]<<lastName[0]<<" here is your fortune \n";
cout<<"your lucky number is "<<firstName.length()<<"\n";
 return 0;
}
