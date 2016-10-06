//**************************
//
//Brandon Garner
//4-2-16
//Proj 5
//
//**************************

#include <iostream>
#include <string>
#include <fstream>
#include "Home.h"
#include <list>

using namespace std;

void menu(){
    cout << "Enter the number of the action you would like to do:\n"
         << "1) Order a new house.\n"
         << "2) See your previous orders.\n"
         << "3) Quit.\n";
    }

void ordermenu(){
    cout << "What kind of home would you like?\n"
         << "1) Dragon\n"
         << "2) Fish\n"
         << "3) Dog\n"
         << "4) Minotaur\n"
         << "5) Tiger\n"
         << "6) Back\n";
}

void ordermenu_action(int& htype, list<Home *>& collection){
    Home *tmp;
    switch(htype){
        case 1:
            tmp = new Dragon;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 2:
            tmp = new Fish;
            tmp ->input(cin);
            collection.push_back(tmp);
            break;
        case 3:
            tmp = new Dog;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 4:
            tmp = new Minotaur;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 5:
            tmp = new Tiger;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 6:
            break;
        default:
            cout<< "Not An Option Please Try Again\n";
            break;
    }
}

void output_all(list<Home *>& collection){
    list<Home*>::iterator it;
    it = collection.begin();
    while(it != collection.end()){
        (*it)->output(cout);
        ++it;
    }
}