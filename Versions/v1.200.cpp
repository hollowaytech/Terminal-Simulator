// VERSION 1.200 (Adds Functions for commands, arrays, new libraries, and namespaces. Also adds new commands for interest calculation, triangle drawing, number guessing, and array filling.)
// all libraries and namespaces included in program
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <chrono>
#include <thread>
#include <random>
using namespace std;
// function for array filling command
void num_list(int a[], int size)
{
	cout << endl;
	int index;
	for (index = 0; index < size; index++)
	{
		cout << "Enter element for index " << index << ": ";
		cin >> a[index];
	}
	cout << endl;
	cout << "Array: [ ";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << "]";
}
// function for number guessing command
void guess_num(int n)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distrib(1, 10);
	while (distrib(gen) != n)
	{
		cout << "Incorrect. Try again: ";
		cin >> n;
		cout << endl;
	}
	cout << "Correct!!!";
}
// function for triangle drawing command
void draw_triangle(int r)
{
	for (int height = 1; height <= r; height++)
	{
		for (int base = 1; base <= height; base++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
// function for interest calculator command
double interest_calculate(double intial, double rate, int compounded, double years)
{
	rate = rate / 100;
	double result = intial * pow(1 + rate / compounded, compounded * years);
	return result;
}
// function for table math command
void table_math(int n)
{
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
// function for install command
void install()
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
// function for help command
void help()
{
	cout << "----------TERMINAL-HELP----------" << endl << endl;
	cout << "----------COMMANDS-LIST----------" << endl << endl;
	cout << "help: Help with terminal. Displays commands, syntax help, etc." << endl;
	cout << "install: Simulates a program or file installation." << endl;
	cout << "table_math: Gives you a prompt to make a times table based on math." << endl;
	cout << "calculate_interest: Gives you a prompt to enter an initial amount of money, interest rate, times compounded per year, then amount of years, and calculates your result based on the values." << endl;
	cout << "draw_triangle: Draws a triangle based on dimensions applied." << endl;
	cout << "guess_num: Makes user guess number from 1 to 10." << endl;
	cout << "num_list: Makes user fill an array with numbers (100 element limit)." << endl;
	cout << "terminate: Exits program." << endl << endl;
	cout << "----------SYNTAX-HELP----------" << endl << endl;
	cout << "- Commands are one string of characters only. No spaces." << endl;
	cout << "- Commands are all lowecase, no capital letters.";
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
			help();
		}
		// installation simulator command
		else if (cmdinput == "install")
		{
			install();
		}
		// math table command
		else if (cmdinput == "table_math")
		{
			cout << "Enter number for multiplication here: ";
			int n;
			cin >> n;
			cout << endl;
			table_math(n);
		}
		// interest calculator command
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
		// triangle drawing command
		else if (cmdinput == "draw_triangle")
		{
			cout << "Enter rows: ";
			int r;
			cin >> r;
			cout << endl;
			draw_triangle(r);
		}
		// number guessing command
		else if (cmdinput == "guess_num")
		{
			cout << "Guess the number from 1 to 10: ";
			int n;
			cin >> n;
			cout << endl;
			guess_num(n);
		}
		// array filling command
		else if (cmdinput == "num_list")
		{
			const int CAPACITY = 100;
			cout << "Enter size of array (max 100): ";
			int size;
			cin >> size;
			if (size > CAPACITY)
			{
				cout << "Size exceeds maximum capacity of 100. Array will be filled with 100 elements instead." << endl;
				size = CAPACITY;
			}
			int a[CAPACITY];
			num_list(a, size);
		}
		// command not found
		else
		{
			cout << "Command does not exist. Input command 'help' for details.";
		}
		// reset terminal input
		cout << endl << endl;
		cout << "C:\\Users\\my_user>";
		cin >> cmdinput;
	}
	cout << endl << endl;
	cout << "----------TERMINAL-TERMINATED----------";

	return 0;
}