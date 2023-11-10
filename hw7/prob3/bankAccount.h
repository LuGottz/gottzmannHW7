/** File name: bankAccount.h
*   Class for BankAccount
*   Written by Luke Gottzmann
*/

class BankAccount {
   private:
	string customerName;
	float balance;
	void setName(string n);
	void setBalance(float bal);
   public:
	BankAccount(string n, float bal);
	string getName();
	float getBalance();
	void deposit(float dep);
	void withdraw(float draw);
	~BankAccount();
}