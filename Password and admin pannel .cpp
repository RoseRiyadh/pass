#include"pch.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int sizel = 10;
	int password[sizel] = {000000,190039,893649,110937};
	int enter,pass,i=0,k=4,op1,n=4,f=4;
	int temp1;
	string temp2;
	string enter2;
	string c[sizel] = { "Admin","CEO","Developer","Manager" };
	love:cout << "\nWelcome to HEAVEN's NOTES\n\tChoose your account:\n";
	for (i = 1; i < f; i++)
	{
		cout <<"\t"<< i << "-" << c[i]<<"\n";
	}
	cout << "'If you want to exit type:Exit'\n";
	cout << "You choose:\t";
	cin >> enter2;
	cout << endl;
	if (enter2==c[1])
	{ //FINISHED
		cout << "Enter your password please:\t";
		cin >> pass;
		while (i <= 2 && pass != password[1])
		{
			cout << "Wrong password, try again:\t";
			cin >> enter;
			i++;
		}
		if (pass == password[1])
		{
			cout << "Welcome to your account "<<c[1]<<".";
			goto sed;
		}
		else
		{
			cout << "Try again in another session please.";
			goto sed;
		}
	}
	else if (enter2==c[2]) {//FINISHED
		cout << "Enter your password please:\n\t";
		cin >> pass;
		while (i <= 2 && pass != password[2])
		{
			cout << "Wrong password, try again:\t";
			cin >> enter;
			i++;
		}
		if (pass == password[2])
		{
			cout << "Welcome to your account "<<c[2]<<".";
			goto sed;
		}
		else
		{
			cout << "Try again in another session please.";
			goto sed;
		}
	}
	
	else if(enter2==c[3]) {//FINISHED
		cout << "Enter your password please:\n\t";
		cin >> pass;
		while (i <= 2 && pass != password[3])
		{
			cout << "Wrong password, try again:\t";
			cin >> enter;
			i++;
		}
		if (pass == password[3])
		{
		
			cout << "Welcome to your account "<<c[3]<<".";
			goto sed;
		}
		else
		{
			cout << "Try again in another session please.";
			goto sed;
		}
	}
	else if(enter2==c[0]) {
		cout << "Enter your password please:\n\t";
		cin >> pass;
		while (i <= 2 && pass != password[0])
		{
			cout << "Wrong password, try again:\t";
			cin >> enter;
			i++;
		}
		if (pass == password[0])
		{
			cout << "Welcome to your account "<<c[0] <<".\n";
		af:cout<<"\nWhat do you want to do?\n1-Add new account.\n2-Edit exist account.\n3-Delete account.\n4-Go to accounts list.\n5-Exit.\n";
			cout << "\n Enter your desired option:";
			cin >> op1;
			if (op1 == 1)//FINISHED
			{
				cout << "Enter New username:";
				cin >> c[n++];
				cout << "Enter new password :";
				cin >> password[k++];
				cout << "Account added successfully.\n";
				f++;
				goto af;
				if (k == 9 || n == 9)
				{
					cout << "You reached you limit with adding accounts.";
					goto af;
				}
			}
			else if (op1 == 2)
			{
				cout << "\nWhich account you want edit?\n";
				for (i = 1; i < f; i++)
				{
					cout << "\t" << i << "-" << c[i] << "\n";
				}
				cout << "I choose:";
				cin >> enter;
				cout << "Enter the new username<If you want to keep it the same,rewrite it.>:";
				cin >> c[enter];
				cout << "Enter the new password<If you want to keep it the same,rewrite it.>:";
				cin >> password[enter];
				cout << "Account information changed successfully.\n";
				goto af;

			}
			else if (op1 == 3)
			{
			
				cout << "Which account you want to delete?\n";
				for (i = 1; i < f; i++)
				{
					cout << "\t" << i << "-" << c[i] << "\n";
				}
				cout << "I choose:";
				cin >> enter;
				enter--;
				for (i = enter; i < sizel; i++)
				{
					temp1 = password[i];
					password[i] = password[i + 1];
					password[i + 1] = temp1;
				}
				for (i = enter; i < sizel; i++)
				{
					temp2 = c[i];
					c[i] = c[i + 1];
					c[i + 1] = temp2;
				}
				enter++;
				f--;
				cout << "Account number {" << enter << "} has been deleted successfully.\n\n";
				for (i = 1; i < f; i++)
				{
					cout << "\t" << i << "-" << c[i] << "\n";
				}
				
				cout << endl;
				goto af;
			}
			else if (op1 == 4)
				goto love;
			else if (op1 == 5)
				goto sed;
			else
			{	
					cout << "Wrong option.\n";
					goto af;
			}
			goto sed;
		}
		else
		{
			cout << "Try again in another session please.";
			goto sed;
		}
	}
	else if (enter2 == c[4])
	{//FINISHED
		cout << "Enter your password please:\n\t";
		cin >> pass;
		while (i <= 2 && pass != password[4])
		{
			cout << "Wrong password, try again:\t";
			cin >> enter;
			i++;
		}
		if (pass == password[4])
		{

			cout << "Welcome to your account " << c[4] << ".";
			goto sed;
		}
		else
		{
			cout << "Try again in another session please.";
			goto sed;
		}
	}
	else if (enter2 == c[5])
	{//FINISHED
	cout << "Enter your password please:\n\t";
	cin >> pass;
	while (i <= 2 && pass != password[5])
	{
		cout << "Wrong password, try again:\t";
		cin >> enter;
		i++;
	}
	if (pass == password[5])
	{

		cout << "Welcome to your account " << c[5] << ".";
		goto sed;
	}
	else
	{
		cout << "Try again in another session please.";
		goto sed;
	}
	}
	else if (enter2 == c[6])
	{//FINISHED
	cout << "Enter your password please:\n\t";
	cin >> pass;
	while (i <= 2 && pass != password[6])
	{
		cout << "Wrong password, try again:\t";
		cin >> enter;
		i++;
	}
	if (pass == password[6])
	{

		cout << "Welcome to your account " << c[6] << ".";
		goto sed;
	}
	else
	{
		cout << "Try again in another session please.";
		goto sed;
	}
	}
	else if (enter2 == c[7])
	{//FINISHED
	cout << "Enter your password please:\n\t";
	cin >> pass;
	while (i <= 2 && pass != password[7])
	{
		cout << "Wrong password, try again:\t";
		cin >> enter;
		i++;
	}
	if (pass == password[7])
	{

		cout << "Welcome to your account " << c[7] << ".";
		goto sed;
	}
	else
	{
		cout << "Try again in another session please.";
		goto sed;
	}
	}
	else if (enter2 == c[8])
	{//FINISHED
	cout << "Enter your password please:\n\t";
	cin >> pass;
	while (i <= 2 && pass != password[8])
	{
		cout << "Wrong password, try again:\t";
		cin >> enter;
		i++;
	}
	if (pass == password[8])
	{

		cout << "Welcome to your account " << c[8] << ".";
		goto sed;
	}
	else
	{
		cout << "Try again in another session please.";
		goto sed;
	}
	}
	else if (enter2 == c[9])
	{//FINISHED
	cout << "Enter your password please:\n\t";
	cin >> pass;
	while (i <= 2 && pass != password[9])
	{
		cout << "Wrong password, try again:\t";
		cin >> enter;
		i++;
	}
	if (pass == password[9])
	{

		cout << "Welcome to your account " << c[9] << ".";
		goto sed;
	}
	else
	{
		cout << "Try again in another session please.";
		goto sed;
	}
	}
	else if(enter2=="Exit")
		goto sed;
	else
	{cout << "Wrong account number.\n";
		goto love;
	}
		


	sed:return 0;
}
