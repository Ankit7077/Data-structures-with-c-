#include<iostream>
#include<conio.h>
using namespace std;
class Bank{
public:
  int totalAccounts;
    Bank() {
        totalAccounts = 0;
    }
 void number() {
        cout << "Enter the total number of bank accounts: ";
        cin >> totalAccounts;
 }
 void reterive()
 {
     int y;
  cout<<"enter the total no of bank account details customer wants";
  cin>>y;
          if (y <= totalAccounts) {
            cout << "Details for " << y << " bank accounts retrieved." << endl;
        } else {
            cout << "Insufficient total bank accounts for retrieval." << endl;
        }

 }
 void bal()

 {
     int z;

     cout<<"enter the balance";
     cin>>z;

 }
 void deposit()

 {
     int d;

     cout<<"enter the amount to be deposit";

     cin>>d;

 }
  void withdraw()
  {
      int w;
   cout<<"enter the amount to be withdraw";

   cin>>w;


  }

    };
    int main()
    {
        Bank customer;
        customer.number();

        customer.reterive();

        customer.bal();

        customer.deposit();

        customer.withdraw();

        return 0;
        }
