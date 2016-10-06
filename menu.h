//**************************
//
//Brandon Garner
//4-2-16
//Proj 5
//
//**************************

#ifndef Menu_h
#define Menu_h

#include <fstream>
#include <string>
#include <list>

void menu();
void ordermenu();
void ordermenu_action(int& htype, std::list<Home *>& collection);
void output_all(std::list<Home *>& collection);

#endif 
