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
// Method to change password for a given username
void changePassword(){
   string username, newPassword;
   cout<<"Enter username:";
   cin>> username;
   cout<<"Enter new password: ";
   cin>> newPassword;

   for (int i=0;i<size;i++){
      if(usernames[i] == username) {
         passwords[i] = newpassword;
         cout << "Password changed successfully!" << endl;
         return;
      }
   }
   cout << "Username not found."<<endl;
}

// Method to check if a given username and password are correct
bool login(){
   string uername,password;
   cout<<"Enter username:";
   cin >>username;
   cout<<"Enter password:";
   cin>>password;

   for(int i=0; i<size; i++){
      if(username[i] == username && password[i] == password){
         return true;
       }
    }
   return false;// username not found or password mismatch
  }
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

   switch (choice) {
case 1:
    pm.registerUser();
    break;
case 2:
   if(pm.login()){
      cout << "Login successfull"<<endl;
   }else{
      cout << "Login failed. Invalid username or password."<<endl;
   }
   break;
case 4:
   cout <<"Exiting..."<<endl;
   return 0;
default:
   cout<<"Invalid option. Please try again."<<endl;
   break;
    }
 }
return 0;
}










