#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int counter=0;
class Bank
{
	string name;
	int id;
	float balance, per;
	static float tax;

public:
	void set()
	{
		
		cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;
		cout << "\t\t\t\t     \tCreating Account\n";
		cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;

		cout << "\t\t\tEnter the of account holder: ";
		cin >> name;
		cout << "\t\t\tEnter the ID: ";
		cin >> id;
		cout << "\t\t\tEnter balance: ";
		cin >> balance;
        
		cout << "\n\t\t\tAccount Created Successfully\n";

		counter++;

	}
	void get(int counter,Bank obj[100])
	{
		cout << "\n\n";
		string n;
		int iD;
		cout << "\t\t\tEnter Account Name :";
		cin >> n;
		cout << "\t\t\tEnter Account ID :";
		cin >> iD;

		cout << "\n\n";
		for (int i = 0; i < counter; i++)
		{
			if (n==obj[i].name&&iD==obj[i].id)
			{
				cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;

				cout << "\t\t\tName of account holder: " << obj[i].name << endl;
				cout << "\t\t\tCurrent ID of account holder: " << obj[i].id << endl;
				cout << "\t\t\tCurrent balance of account holder is: " << obj[i].balance << endl;
				cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;

			}
			
		}
		
	}
	void deposite(int no,Bank obj[100])
	{
		float depositAmount;
		cout << "\t\t\tEnter the amount to be deposite: ";
		cin >> depositAmount;
		per = (depositAmount * 10) / 100;
		depositAmount -= per;
		tax += per;
		obj[no].balance += depositAmount;
		cout << "\n\t\t\tBalance after deposite: " << obj[no].balance << endl;
	}

	void withdrawl(int no,Bank obj[100])
	{
		float withdrawAmount;
		cout << "\n\t\t\tEnter the amount to be withdraw: ";
		cin >> withdrawAmount;
		per = (withdrawAmount * 10) / 100;
		obj[no].balance -= per;
		tax += per;
		if (withdrawAmount <= obj[no].balance)
		{
			obj[no].balance -= withdrawAmount;
		}
		cout << "\t\t\tBalance after withdraw: " << obj[no].balance << endl;
	}
	void TotoalTax()
	{
		cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;

		cout << "\t\t\tTotal tax is: " << tax << endl;
		cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;

	}

	void login(int counter, Bank obj[100]){
	
		string n;
		int iD;
		cout << "\t\t\tEnter Account Name :";
		cin >> n;
		cout << "\t\t\tEnter Account ID :";
		cin >> iD;

		for (int i = 0; i < counter; i++)
		{
			if (n == obj[i].name&&iD == obj[i].id)
			{
				cout << "\n\n\t\t\tSuccessfully Login Account\n";
			a:
				int c;

				cout << "\t\t\t[1] Deposit Money\n";
				cout << "\t\t\t[2] WithDraw Money\n";
				cout << "\t\t\t[3] Main Menu\n";
				cout << "\t\t\t[4] Exit\n";
				cout << "\n\t\t\tEnter Your Choice Here :";
				cin >> c;
				if (c == 1)
				{

					deposite(i, obj);
					TotoalTax();
					goto a;
				}
				else if (c == 2)
				{
					withdrawl(i,obj);
					TotoalTax();
					goto a;
				}
				else if (c == 3)
				{

				}
				else
				{
					exit(0);
				}
			}
		}

	}

};
float Bank::tax = 0;


int main()
{
	Bank obj[100];



	
		system("color 02");
		cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;
		cout << "\t\t\t\t\tBANK MANAGEMENT SYSTEM\n";
		cout << "\t\t\t\t\t     By Asis Anjum\n";
		cout << "\t\t\t" << setw(53) << setfill('~') << "~" << endl;

	
		char c;

		int choice;
	a:
		cout << "\n\n";
		cout << "\t\t\t[1] Create New Account\n";
		cout << "\t\t\t[2] Login with existing Account\n";
		cout << "\t\t\t[3] Check Record and Balance\n";
		cout << "\t\t\t[4] Exit";

		cout << "\n\n\t\t\tEnter your choice here :";
		cin >> choice;
		if (choice == 1)
		{
			obj[counter].set();
			
			goto a;
		}

		else if (choice == 2)
		{
			obj[counter].login(counter,obj);
			goto a;
		}
		else if (choice == 3)
		{
			obj[counter].get(counter,obj);
			goto a;
		}
		
		else
		{
			exit(0);
		}
		
		system("pause");
		return 0;
	}
