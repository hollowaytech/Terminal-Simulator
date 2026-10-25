// all libraries and namespaces included in program
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
// function for interest calculator command
double interest_calculate(double intial, double rate, int compounded, double years)
{
	rate = rate / 100;
	double result = intial * pow(1 + rate / compounded, compounded * years);
	return result;
}
// main function
int main()
{
	// terminal title
	cout << "Terminal Simulator [Version 1.0]" << endl;
	cout << "@hollowaytech on GitHub" << endl << endl;
	// terminal input
	cout << "C:\\Users\\my_user>";
	string cmdinput;
	cin >> cmdinput;
	cout << endl;
	// terminal outputs
	while (cmdinput != "terminate")
	{
		// help command
		if (cmdinput == "help")
		{
			cout << "----------TERMINAL-HELP----------" << endl << endl;
			cout << "----------COMMANDS-LIST----------" << endl << endl;
			cout << "help: Help with terminal. Displays commands, syntax help, etc." << endl;
			cout << "install: Simulates a program or file installation." << endl;
			cout << "repeat: Gives you a prompt to repeat a string of text." << endl;
			cout << "table_math: Gives you a prompt to make a times table based on math." << endl;
			cout << "calculate_interest: Gives you a prompt to enter an initial amount of money, interest rate, times compounded per year, then amount of years, and calculates your result based on the values." << endl;
			cout << "terminate: Exits program." << endl << endl;
			cout << "----------SYNTAX-HELP----------" << endl << endl;
			cout << "- Commands are one string of characters only. No spaces." << endl;
			cout << "- Commands are all lowecase, no capital letters.";
		}
		// installation simulator command
		else if (cmdinput == "install")
		{
			cout << "----------INSTALLING-PLEASE-WAIT----------" << endl << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "=--------- 10%" << endl << endl << endl << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "====------ 40%" << endl << endl << endl << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "=======--- 70%" << endl << endl << endl << endl;
			this_thread::sleep_for(chrono::milliseconds(500));
			cout << "=========- 90%" << endl << endl << endl << endl;
			this_thread::sleep_for(chrono::milliseconds(250));
			cout << "========== 100%" << endl << endl << endl << endl;
			cout << "----------INSTALLATION-COMPLETE----------";
		}
		// math table command
		else if (cmdinput == "repeat")
		{
			cout << "What phrase would you like to repeat?" << endl;
			cout << ": ";
			string repeat;
			cin >> repeat;
			cout << endl;
			cout << repeat;
		}
		else if (cmdinput == "table_math")
		{
			cout << "Enter number for multiplication here: ";
			int n;
			cin >> n;
			cout << endl;
			cout << "MULTIPLES:" << setw(7);
			int borderw = 2;
			for (int z = 1; z <= n; z++)
			{
				borderw += 15;
				cout << z << setw(15);
			}
			cout << setw(-15) << endl;
			for (int w = 1; w <= borderw; w++)
			{
				cout << "=";
			}
			cout << endl;
			cout << setw(-15);
			for (int a = 1; a <= n; a++)
			{
				cout << a << "|" << setw(15);
				for (int b = 1; b <= n; b++)
				{
					int c = b * a;
					cout << c << setw(15);
				}
				cout << setw(-15) << endl << endl;
			}
			for (int x = 1; x <= borderw; x++)
			{
				cout << "=";
			}
		}
		else if (cmdinput == "calculate_interest")
		{
			cout << "Enter initial money here: ";
			double p;
			cin >> p;
			cout << endl;
			cout << "Enter rate (will be calculated as decimal for percentage, so put as normal number here): ";
			double r;
			cin >> r;
			cout << endl;
			cout << "Enter amount of times compounded per year here: ";
			int n;
			cin >> n;
			cout << endl;
			cout << "Enter amount of years here: ";
			double t;
			cin >> t;
			cout << endl;
			double a = interest_calculate(p, r, n, t);
			cout << "After " << t << " years with " << r << "% interest compounded " << n << " times a year, you will have: " << endl << endl;
			cout << "[" << "$" << a << "]";
		}
		cout << endl << endl;
		cout << "C:\\Users\\my_user>";
		cin >> cmdinput;
	}
	cout << endl << endl;
	cout << "----------TERMINAL-TERMINATED----------";

	return 0;
}