//**************************
//
//Brandon Garner
//4-2-16
//Proj 5
//
//**************************

#include <iostream>
#include "Home.h"

using namespace std;

//Dragon
void Dragon::input(istream& ins) {
	if (&ins == &cin) {
		cout << "Where do you want your home? ex. Castle, Cave...\n";
		ins >> home_loc;
		cout << "Enter home wall's height\n";
		ins >> home_height;
		cout << "Enter home's Radius\n";
		ins >> home_rad;
	}
	else {
		if (ins.peek() == '\n') {
			ins.ignore();
		}
		getline(ins, home_loc);
		ins >> home_height >> home_rad;
	}
}

void Dragon::output(ostream& outs) {
	if (&outs == &cout) {
		outs << "Dragon:\n"
			<< "\tHome Location = " << home_loc << endl
			<< "\tHome Height = " << home_height << endl
			<< "\tHome Radius = " << home_rad << endl;
	}
	else {
		outs << "1\n"
			<< home_loc << endl
			<< home_height << endl
			<< home_rad << endl;
	}
}

//Fish
void Fish::input(istream& ins) {
	if (&ins == &cin) {
		cout << "Include mini-house inside the aquarium? 1 = YES, 0 = NO\n";
		ins >> mini_house;
		cout << "Would you like a person masseuse for fish massages? 1 = YES, 0 = NO\n";
		ins >> masseuse;
		cout << "Enter Radius of the aquarium\n";
		ins >> aq_rad;

	}
	else {
		ins >> mini_house >> masseuse >> aq_rad;
	}
}

void Fish::output(ostream& outs) {
	if (&outs == &cout) {
	   outs << "Fish:\n"
			<< "\tMini-House = ";
		if (mini_house == 1) {
			outs << "YES" << endl;
		}
		else {
			outs << "NO" << endl;
		}
		outs << "\tFish Masseuse = ";
		if (masseuse == 1) {
			outs << "YES" << endl;
		}
		else {
			outs << "NO" << endl;
		}
		outs << "\tAquarium Radius = " << aq_rad << endl;

	}
	else {
		outs << "2\n"
			<< mini_house << endl
			<< masseuse << endl
			<< aq_rad << endl;
	}
}

//Dog
void Dog::input(istream& ins){
    if(&ins == &cin){
        cout << "What material do you want your bed to made of?\n";
        ins >> material;
        cout << "Enter yard size\n";
        ins >> y_size;
        cout << "Number of rooms?\n";
        ins >> num_rooms;
        cout << "Dissable the water so you wont get baths? 1 = YES, 0 = NO\n";
        ins >> dissable;
    }else{
        if(ins.peek() == '\n'){
            ins.ignore();
        }
        getline(ins, material);
        ins >> y_size >> num_rooms >> dissable;

    }
}

void Dog::output(ostream& outs){
    if(&outs == &cout){
        outs << "Dog:\n"
             << "\tMaterial Type = " << material << endl
             << "\tTotal size of yard = " << y_size <<endl
             << "\tNumber of rooms = " << num_rooms << endl
             << "\tDissabled water = ";
        if(dissable == 1){
            outs << "YES" << endl;
        }else{
            outs << "NO" << endl;
        }
    }else{
        outs << "3\n"
             << material << endl
             << y_size << endl
             << num_rooms << endl
             << dissable << endl;
        
    }
}

//Minotaur
void Minotaur::input(istream& ins) {
	if (&ins == &cin) {
		cout << "Enter the radius of the Minotaur's labyrinth\n";
		ins >> radius;
		cout << "How big is your weapon storage room?\n";
		ins >> wep_storage;
		cout << "Enter Height of the labyrinth's walls\n";
		ins >> height;
		cout << "Number of dungeons?\n";
		ins >> dungeons;
	}
	else {
		ins >> radius >> wep_storage >> height >> dungeons;
	}
}

void Minotaur::output(ostream& outs) {
	if (&outs == &cout) {
		outs << "Minotaur:\n"
			<< "\tLabyrinth Radius = " << radius << endl
			<< "\tWeapon Storage = " << wep_storage << endl
			<< "\tLabyrinth Wall Height = " << height << endl
			<< "\tDungeons = " << dungeons << endl;
	}
	else {
		outs << "4\n"
			<< radius << endl
			<< wep_storage << endl
			<< height << endl
			<< dungeons << endl;
	}
}

//Tiger
void Tiger::input(istream& ins) {
	if (&ins == &cin) {
		cout << "Length for the tiger's new Home?\n";
		ins >> length;
		cout << "Width for the tiger's new Home?\n";
		ins >> width;
		cout << "How many giant catnip dispensers?\n";
		ins >> catnip;
	}
	else {
		ins >> length >> width >> catnip;
	}
}

void Tiger::output(ostream& outs) {
	if (&outs == &cout) {
		outs << "Tiger:\n"
			<< "\tFloor Length = " << length << endl
			<< "\tFloor Width = " << width << endl
			<< "\tCatnip Dispensers = " << catnip << endl;
	}
	else {
		outs << "5\n"
			<< length << endl
			<< width << endl
			<< catnip << endl;
	}
}