#include<isotream>
#include<string>
using namespace std;

class PasswordManager {

private:
static const int MAX_USERS = 10;
string usernames[MAX_USERS];
string passwords[MAX_USERS];
Iint size;

public:
PasswordManager() 
{
   size = 0;
}
// method to register a new username and password
void registerUser()
{ 
  if(size < MAX_USERS)
 {
  string username;
  string password;
  cout<<"Enter username:";
  cin>>username;
  cout<<"Enter password:";
  cin>>password;
  usernames[size] = username;
  password[size] = password;
  size++;
  cout<<"Registration successful!!"<<endl;
 }
else
 {
   cout<<"User capacity reached,cannot register more users."<<endl;
 }
}
// meet write here
};

int main()
{
  PasswordManager pm;

cout<<"--------------------------------------------------"<<endl;
cout<<"|      Welcome to Password Management System      |"<<endl;
cout<<"--------------------------------------------------"<<endl;

while(true)
{
   cout<<"\nOptions:\n";
   cout<<"1.Register\n";
   cout<<"2.Login\n";
   cout<<"3.Change Password\n";
   cout<<"4.Exit\n";
   cout<<"**************************************************"<<endl;
   cout<<"\n";
   cout<<"Choose an option:";
   int choice;
   cin>>choice;

// meet write here










