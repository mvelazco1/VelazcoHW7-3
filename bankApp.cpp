//The program reflects the implementation of bank account class its its public // 

#include "bankAccount.h"

int main(){
	// Initializing jack account.
	bankAccount jackAccount("Jack Smith ", 50.0); 
	// Initializing jill account.
	bankAccount jillAccount("Jill Brian", 100.0);
	//part b.) array of three objects.
	bankAccount *bankArray[3];

	bankArray[0] = new bankAccount("Ralph Kramden", 10.0);

       	bankArray[1] = new bankAccount("Alice Kramden", 20.0);

	bankArray[2] = new bankAccount("ed Norton", 30.0);

	// part c.) Depositing $30 into each account
	jackAccount.deposit(30.0);
	jillAccount.deposit(30.0);

	for(int i = 0; i < 3; i++){
		bankArray[i]->deposit(30.0);
	}

	// part d.)  withdrawing $20 from each account 
	jackAccount.withdraw(20.0);
	jillAccount.withdraw(20.0);

	for(int i = 0; i < 3; i++){
		bankArray[i]->withdraw(20.0);
	}	

	// part e.) printing the names and the balances of accounts
	
	cout << "THE ACCOUNT HOLDER:" << jackAccount.getName() << "\n";
	cout << "HOLDERS ACCOUNT BALANCE:" << jackAccount.getBalance() << endl;

	cout << "THE ACCOUNT HOLDER:" << jillAccount.getName() << "\n";
        cout << "HOLDERS ACCOUNT BALANCE:" << jillAccount.getBalance() << endl;	

	for (int i = 0; i < 3; i++){
		cout << "THE ACCOUNT HOLDER:" << bankArray[i]->getName() << "\n";
		cout << "HOLDERS ACCOUNTS BALANCES:" << bankArray[i]->getBalance() << endl;
		}
		return 0;
	}

