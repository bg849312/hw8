//**************************
//
//Brandon Garner
//4-2-16
//Proj 5
//
//**************************

#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include "Home.h"
#include "menu.h"

using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    string username, filename;
    list<Home *> homes;
    int housetype;
    int selection;
    int sub_selection;
    
    cout << "Greetings, and welcome To Animal Home Construction Inc!\n";
    cout << "Please enter your username:\n";
    if(cin.peek() == '\n'){
        cin.ignore();
    }
    getline(cin, username);
    filename = username + ".txt";
    fin.open(filename.c_str());
    
    if(!fin.fail()){
        Home *tmp;
        fin >> housetype;
        while(!fin.eof()){
            switch(housetype){
                case 1:
                    tmp = new Dragon;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                case 2:
                    tmp = new Fish;
                    tmp ->input(fin);
                    homes.push_back(tmp);
                    break;
                case 3:
                    tmp = new Dog;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                case 4:
                    tmp = new Minotaur;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                case 5:
                    tmp = new Tiger;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                default:
                    cout<< "Error couldn't load the file\n";
                    break;
            }
            fin >> housetype;
        }
    }
    fin.close();
    
    do{
        menu();
        cin >> selection;
        switch(selection){
            case 1:
                ordermenu();
                cin >> sub_selection;
                ordermenu_action(sub_selection, homes);
                break;
            case 2:
                output_all(homes);
                break;
            case 3:
                break;
            default:
                cout << "Can't do that, Please try again.\n";
                break;
        }
    }while(selection != 3);
    
    fout.open(filename.c_str());
    
    list<Home*>::iterator it;
    it = homes.begin();
    while(it != homes.end()){
        (*it)->output(fout);
        ++it;
    }
    fout.close();
    
    return 0;
}
