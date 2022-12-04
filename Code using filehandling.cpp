//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<fstream>
//using namespace std;
//int counter = 0;
//
//class Bank
//{
//	string name;
//	int id;
//	float balance, per;
//	static float tax;
//
//public:
//	void set()
//	{
//		
//
//			cout << "\t\t\tEnter the of Account Holder Name : ";
//			cin >> name;
//			cout << "\t\t\tEnter the ID: ";
//			cin >> id;
//			cout << "\t\t\tEnter balance: ";
//			cin >> balance;
//			
//			fstream file,bal;
//			file.open(name+".txt", ios::out);
//			bal.open(name + "balance.txt", ios::out);
//			if (file.is_open())
//			{
//			file <<"\t\t\tAccount holder Name is "<< name << endl;
//			file <<"\t\t\tAccount holder ID is " <<id << endl;
//			file <<"\t\t\tAccount balance is "<< balance << endl;
//			bal << balance;
//			cout << "\t\t\t"<<setw(50) << setfill('~') << "~" << endl;
//
//			cout << "\t\t\tAccount Created Successfully\n";
//			file.close();
//			cout << "\t\t\tFile is Close After writing :\n";
//			cout << "\t\t\t"<<setw(50) << setfill('~') << "~" << endl;
//
//			}
//
//	}
//	void get()
//	{
//		a:
//		string n;
//		int iD;
//		cout << "\t\t\tEnter Account Name :";
//		cin >> n;
//		cout << "\t\t\tEnter Account ID :";
//		cin >> iD;
//		fstream file;
//		
//		cout << "\n\n";
//		file.open(n + ".txt", ios::in);
//		if (file.is_open())
//		{
//			string ins;
//			while (!file.eof())
//			{
//				getline(file, ins);
//			cout << ins << endl;
//			}
//			file.close();
//			cout << "\t\t\t" << setw(50) << setfill('~') << "~" << endl;
//
//			cout << "\t\t\tFile is close After Reading : \n";
//			cout << "\t\t\t" << setw(50) << setfill('~') << "~" << endl;
//
//		}
//	     
//		else
//		{
//			goto a;
//		}
//
//		//
//		//cout << "Name of account holder: " << name << endl;
//		//cout << "Current ID of account holder: " << id << endl;
//		//cout << "Current balance of account holder is: " << balance << endl;
//
//	}
//	void deposite(int balance)
//	{
//	/*	float balance;
//		cout << "\nEnter your Current Balance :";
//		cin >> balance;*/
//		float depositAmount;
//		cout << "\t\t\tEnter the amount to be deposite: ";
//		cin >> depositAmount;
//		per = (depositAmount * 10) / 100;
//		depositAmount -= per;
//		tax += per;
//		balance += depositAmount;
//		cout << "\n\t\t\tBalance after deposite: " << balance << endl;
//	}
//
//	void withdrawl(int balance)
//	{
//		float withdrawAmount;
//		cout << "\n\t\t\tEnter the amount to be withdraw: ";
//		cin >> withdrawAmount;
//		per = (withdrawAmount * 10) / 100;
//		balance -= per;
//		tax += per;
//		if (withdrawAmount <= balance)
//		{
//			balance -= withdrawAmount;
//		}
//		cout << "\t\t\tBalance after withdraw: " << balance << endl;
//	}
//	void TotoalTax()
//	{
//		cout << "\t\t\t" << setw(50) << setfill('~') << "~" << endl;
//
//		cout << "\t\t\t\tTotal tax is: " << tax << endl;
//		cout << "\t\t\t" << setw(50) << setfill('~') << "~" << endl;
//
//	}
//
//	void login(){
//		b:
//		string n;
//		int iD;
//		cout << "\t\t\tEnter Account Name :";
//		cin >> n;
//		cout << "\t\t\tEnter Account ID :";
//		cin >> iD;
//		fstream file;
//
//		cout << "\n\n";
//		file.open(n + ".txt", ios::in);
//		if (file.is_open())
//		{
//			fstream bal;
//			bal.open(n + "balance.txt", ios::in);
//			int balance1;
//			while (!bal.eof())
//			{
//			   bal>> balance1;
//			}
//			cout << "\t\t\t" << setw(50) << setfill('~') << "~" << endl;
//
//			cout << "\t\t\t\tAccount login Successfully\n";
//			cout << "\t\t\t" << setw(50) << setfill('~') << "~" << endl;
//
//
//			a:
//			int c;
//			
//			cout << "\t\t\t[1] Deposit Money\n";
//			cout << "\t\t\t[2] WithDraw Money\n";
//			cout << "\t\t\t[3] Main Menu\n";
//			cout << "\t\t\t[4] Exit\n";
//			cout << "\n\t\t\tEnter Your Choice Here :";
//			cin >> c;
//			if (c==1)
//			{
//			
//				deposite(balance1);
//				TotoalTax();
//				goto a;
//			}
//			else if (c==2)
//			{
//				withdrawl(balance1);
//				TotoalTax();
//				goto a;
//			}
//			else if (c==3)
//			{
//
//			}
//			else 
//			{
//				exit(0);
//			}
//		
//		}
//		else {
//			goto b;
//		}
//
//	}
//
//};
//float Bank::tax = 0;
//
//
//int main()
//{
//	system("color 02");
//	cout <<"\t\t\t" <<setw(53) << setfill('~') << "~" << endl;
//	cout << "\t\t\t\t\tBANK MANAGEMENT SYSTEM\n";
//	cout << "\t\t\t\t\t     By Asis Anjum\n";
//	cout << "\t\t\t"<<setw(53) << setfill('~') << "~" << endl;
//
//	Bank obj[100];
//	char c;
//
//	int choice;
//a:
//	cout << "\n\n";
//	cout << "\t\t\t[1] Create New Account\n";
//	cout << "\t\t\t[2] Login with existing Account\n";
//	cout << "\t\t\t[3] Display Records\n";
//	cout << "\t\t\t[4] Exit";
//
//	cout << "\n\n\t\t\tEnter your choice here :";
//	cin >> choice;
//	if (choice==1)
//	{
//	obj[counter].set();
//	//cout << "\nDo you want to Deposit Money [y/n] :";
//	//cin >> c;
//	//if (c=='y'||c=='Y')
//	//{
//	//	/*obj[counter].deposite();
//	//	obj[counter].TotoalTax();*/
//	//}
//	//else if (c=='n'||c=='N')
//	//{
//	//	int ch;
//	//	cout << "1 GO Back to Main Menu\n";
//	//	cout << "2 Exit\n";
//	//	cout << "Enter Choice Here :";
//	//		cin >> ch;
//	//		if (ch==1)
//	//		{
//	//          goto a;
//	//		}
//	//		else
//	//		{
//	//			exit(0);
//	//		}
//	//}
//	goto a;
//	}
//
//	else if (choice==2)
//	{
//		obj[counter].login();
//		goto a;
//	}
//	else if (choice==3)
//	{
//		obj[counter].get();
//		goto a;
//	}
//	else
//	{
//		exit(0);
//	}
//	/*
//	
//	
//	
//
//	obj2.set();
//	obj2.withdrawl();
//	obj2.TotoalTax();
//*/
//
//	system("pause");
//	return 0;
//}