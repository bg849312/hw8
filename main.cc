// Scott Kelley
// CS 2401
// Project 5
// 3//30/2016
//
// main.cc
//

#include <list>
#include <iostream>
#include <fstream>
#include "homes.h"

using namespace std;

void menu();

int main()
{
	ifstream inf;
	list<Home*> myhomes;	// LIST OF HOMES
	list<Home*>::iterator it;	// ITERATOR
	Home* tmp;	// FOR READING WITH CIN
	Home* ptr;	// FOR READING WITH PTR
	string code;	// CODE TO DETERMINE WHAT HOME TO INPUT
	int menu_choice;	// CHOICE FOR MENU OPTIONS

	// CHECK IS THE LIST EXISTS
	if (ifstream("homes_records.txt"))
	{
		inf.open("homes_records.txt");
		
		if (inf.fail())
		{
			cout << "Error opening records file, probably due to 1st run of program" << endl;
			inf.close();
		}

		inf >> code;

		while (!inf.eof())
        	{
                	if (code == "PB")
                	{
				ptr = new PolarBear;
				ptr -> input(inf);
				myhomes.push_back(ptr);
                	}
                	else if (code == "RT")
                	{
				ptr = new RainbowTrout;
				ptr -> input(inf);
				myhomes.push_back(ptr);
                	}
                	else if (code == "CS")
                	{
				ptr = new CobraSnake;
				ptr -> input(inf);
				myhomes.push_back(ptr);
                	}
                	else if (code == "GW")
                	{
				ptr = new GrayWolf;
				ptr -> input(inf);
				myhomes.push_back(ptr);
                	}
                	else if (code == "RH")
                	{
				ptr = new RedtailedHawk;
				ptr -> input(inf);
				myhomes.push_back(ptr);
                	}

			inf >> code;
        	}
	
		inf.close();
	}

	do
	{
		menu();
		cout << "Enter a choice: ";
		cin >> menu_choice;
	
		switch(menu_choice)
		{
			case 1: // POLAR BEAR
			{
				tmp = new PolarBear;
				tmp -> input(cin);
				myhomes.push_back(tmp);
				break;				
			}
			case 2: // RAINBOW TROUT
			{
				tmp = new RainbowTrout;
				tmp -> input(cin);
				myhomes.push_back(tmp);
				break;
			}
			case 3: // COBRA SNAKE
			{
				tmp = new CobraSnake;
				tmp -> input(cin);
				myhomes.push_back(tmp);
				break;
			}
			case 4: // GRAY WOLF
			{
				tmp = new GrayWolf;
				tmp -> input(cin);
				myhomes.push_back(tmp);
				break;
			}
			case 5: // REDTAILED HAWK
			{
				tmp = new RedtailedHawk;
				tmp -> input(cin);
				myhomes.push_back(tmp);
				break;
			}
			case 6: // PRINT OUT LIST SO FAR
			{
				it = myhomes.begin();
				while (it != myhomes.end())
				{
					(*it) -> output(cout);
					++it;
				}
				break;
			}
			case 0: // EXIT
			{
				break;
			}
			default:
			{
				cout << "Illegal choice";
				break;
			}
		}

	}while(menu_choice != 0);

	// BACKUP LIST
	ofstream backup;
	backup.open("homes_records.txt");

	it = myhomes.begin();
	while (it != myhomes.end())
	{
		(*it) -> output(backup);
		++it;
	}	
	backup.close();

	return 0;
}

void menu()
{
	cout << "\nWelcome to the Animal Home Construction Inc. Menu\n" << endl;
	cout << "1. Order a home for a Polar Bear" << endl;
	cout << "2. Order a home for a Rainbow Trout" << endl;
	cout << "3. Order a home for a Cobra Snake" << endl;
	cout << "4. Order a home for a Gray Wolf" << endl;
	cout << "5. Order a home for a Redtailed Hawk" << endl;
	cout << "6. Print out the list so far" << endl;
	cout << "0. Exit" << endl;
}
