// Scott Kelley
// CS 2401
// Project 5
// 4/1/2016
//
// homes.cc
//

#include "homes.h"

using namespace std;

// POLAR BEAR
// CONSTRUCTOR
PolarBear::PolarBear()
{
	air_temp = 0.0;
	seals_num = 0;
	bedding_type = "none";
	water_amt = 50.0;
}

// INPUT
void PolarBear::input(istream& ins)
{ 
	if (&ins == &cin)
	{
		do{
			cout << "Enter desired air temperature (-32 to 32 F): ";
			ins >> air_temp;
		}while(air_temp > 32 || air_temp < -32);
		do{
			cout << "Enter desired number of seals for food (1 to 10): ";
			ins >> seals_num;
		}while(seals_num > 10 || seals_num < 1);
		do{
			cout << "Enter desired type of bedding ('deep', 'shallow', or 'none'): ";
 			ins >> bedding_type;
		}while(bedding_type != "deep" && bedding_type != "shallow" && bedding_type != "none");
		do{
			cout << "Enter desired % of home covered in water (0 to 100): ";
			ins >> water_amt;
		}while(water_amt > 100 || water_amt < 0);
	}
	else
	{
		ins >> air_temp;
		ins >> seals_num;
		ins >> bedding_type;
		ins >> water_amt;
	}
}

// OUTPUT
void PolarBear::output(ostream& outs)
{
	if (&outs == &cout)
	{
		outs << "--------------------------" << endl;
		outs << "Polar Bear!" << endl;
		outs << "Air Temperature: " << air_temp << " Fahrenheit" << endl;
		outs << "Number of Seals: " << seals_num << endl;	
		outs << "Type of Bedding: " << bedding_type << endl;
		outs << "Amount of Water: " << water_amt << "%" << endl;
		outs << "--------------------------" << endl;
	}
	else
	{
		outs << "PB" << endl;
		outs << air_temp << endl;
		outs << seals_num << endl;
		outs << bedding_type << endl;
		outs << water_amt << endl;
	}
}

// RAINBOW TROUT
// CONSTRUCTOR
RainbowTrout::RainbowTrout()
{
	body_of_water = "river";
	water_temp = 60.0;
	other_fish = 'n';
	plant_life = "moderate";
}

// INPUT
void RainbowTrout::input(istream& ins)
{
	if (&ins == &cin)
        {
		do{
                	cout << "Enter desired body of water ('lake', 'river', or 'coastal'): ";
                	ins >> body_of_water;
		}while(body_of_water != "lake" && body_of_water != "river" && body_of_water != "coastal");
		do{
                	cout << "Enter desired temperature of the water (55 to 75 F): ";
                	ins >> water_temp;
		}while(water_temp > 75 || water_temp < 55);
		do{
                	cout << "Would you like other fish to accompany the home too? ('y' or 'n'): ";
                	ins >> other_fish;
		}while(other_fish != 'n' && other_fish != 'y');
		do{
                	cout << "Enter desired amount of plant life in home ('light', 'moderate', or 'heavy'): ";
                	ins >> plant_life;
		}while(plant_life != "light" && plant_life != "moderate" && plant_life != "heavy");
        }
        else
        {
                ins >> body_of_water;
                ins >> water_temp;
                ins >> other_fish;
                ins >> plant_life;
        }
}

// OUTPUT
void RainbowTrout::output(ostream& outs)
{
	if (&outs == &cout)
        {
		outs << "--------------------------" << endl;
                outs << "Rainbow Trout!" << endl;
                outs << "Body of Water: " << body_of_water << endl;
                outs << "Water Temperature: " << water_temp << " Fahrenheit" << endl;
                outs << "Other Fish (y = yes, n = no): " << other_fish << endl;
                outs << "Plant Life:: " << plant_life << endl;
		outs << "--------------------------" << endl;
        }
        else
        {
                outs << "RT" << endl;
                outs << body_of_water << endl;
                outs << water_temp << endl;
                outs << other_fish << endl;
                outs << plant_life << endl;
        }



}

// COBRA SNAKE
// CONSTRUCTOR
CobraSnake::CobraSnake()
{
	hole_num = 1;
	forest = "moderate";
	water = "medium";
	main_foodc = "rodents";
}

// INPUT
void CobraSnake::input(istream& ins)
{
	if (&ins == &cin)
        {
		do{
                	cout << "Enter desired number of entrances/exits of nest (1 to 10): ";
                	ins >> hole_num;
		}while(hole_num > 10 || hole_num < 1);
		do{
                	cout << "Enter desired density of forest ('light', 'moderate', or 'high'): ";
                	ins >> forest;
		}while(forest != "light" && forest != "moderate" && forest != "high");
		do{
                	cout << "Enter desired amount of nearby water ('small', 'medium', 'large', or 'none'): ";
                	ins >> water;
		}while(water != "small" && water != "medium" && water != "large" && water != "none");
		do{
                	cout << "Enter desired source of food ('birds' or 'rodents'): ";
                	ins >> main_foodc;
		}while(main_foodc != "birds" && main_foodc != "rodents");
        }
        else
        {
                ins >> hole_num;
                ins >> forest;
                ins >> water;
                ins >> main_foodc;
        }
}

// OUTPUT
void CobraSnake::output(ostream& outs)
{
	if (&outs == &cout)
        {
		outs << "--------------------------" << endl;
                outs << "Cobra Snake!" << endl;
                outs << "Number of Entrances/Exits: " << hole_num << endl;
                outs << "Forest Density: " << forest << endl;
                outs << "Nearby Water Percentage: " << water << "%" << endl;
                outs << "Main Food Source: " << main_foodc << endl;
		outs << "--------------------------" << endl;
        }
        else
        {
                outs << "CS" << endl;
                outs << hole_num << endl;
                outs << forest << endl;
                outs << water << endl;
                outs << main_foodc << endl;
        }
}

// GRAY WOLF
// CONSTRUCTOR
GrayWolf::GrayWolf()
{
	other_wolves = 0;
	habitat_type = "tundra";
	play_den = 'n';
	den_rooms = 1;
}

// INPUT
void GrayWolf::input(istream& ins)
{
	if (&ins == &cin)
        {
		do{
                	cout << "Enter desired number of other wolves in pack (0 to 10): ";
                	ins >> other_wolves;
		}while(other_wolves > 10 || other_wolves < 0);
		do{
                	cout << "Enter desired type of habitat ('desert', 'grassland', 'forest', or 'tundra'): ";
                	ins >> habitat_type;
		}while(habitat_type != "desert" && habitat_type != "grassland" && habitat_type != "forest" && habitat_type != "tundra");
		do{
                	cout << "Would you like to add a play den for pups? ('y' or 'n'): ";
                	ins >> play_den;
		}while(play_den != 'y' && play_den != 'n');
		do{
                	cout << "Enter desired number of rooms in the den (1 to 5): ";
                	ins >> den_rooms;
		}while(den_rooms > 5 || den_rooms < 1);
        }
        else
        {
                ins >> other_wolves;
                ins >> habitat_type;
                ins >> play_den;
                ins >> den_rooms;
        }
}

// OUTPUT
void GrayWolf::output(ostream& outs)
{
	if (&outs == &cout)
        {
		outs << "--------------------------" << endl;
                outs << "Gray Wolf!" << endl;
                outs << "Number of Other Wolves: " << other_wolves << endl;
                outs << "Type of Habitat: " << habitat_type << endl;
                outs << "Play Pen (y = yes, n = no): " << play_den << endl;
                outs << "Number of Rooms in Den: " << den_rooms << endl;
		outs << "--------------------------" << endl;
        }
        else
        {
                outs << "GW" << endl;
                outs << other_wolves << endl;
                outs << habitat_type << endl;
                outs << play_den << endl;
                outs << den_rooms << endl;
        }
}

// REDTAILED HAWK
// CONSTRUCTOR
RedtailedHawk::RedtailedHawk()
{
	nest_height = 6.0;
	add_nests = 0;
	field_amt = 50.0;
	main_foodh = "rats";
}

// INPUT
void RedtailedHawk::input(istream& ins)
{
	if (&ins == &cin)
        {
		do{
                	cout << "Enter desired height of the nest (6 to 12 feet): ";
                	ins >> nest_height;
		}while(nest_height > 12 || nest_height < 6);
		do{
                	cout << "Enter desired number of secondary nests to main nest (0 to 4): ";
                	ins >> add_nests;
		}while(add_nests > 4 || add_nests < 0);
		do{
                	cout << "Enter desired % of home covered in fields (0 to 100): ";
                	ins >> field_amt;
		}while(field_amt > 100 || field_amt < 0);
		do{
                	cout << "Enter desired main source of food ('pidgeons' or 'rats'): ";
                	ins >> main_foodh;
		}while(main_foodh != "pidgeons" && main_foodh != "rats");
        }
        else
        {
                ins >> nest_height;
                ins >> add_nests;
                ins >> field_amt;
                ins >> main_foodh;
        }
}

// OUTPUT
void RedtailedHawk::output(ostream& outs)
{
	if (&outs == &cout)
        {
		outs << "--------------------------" << endl;
                outs << "Redtailed Hawk!" << endl;
                outs << "Nest Height: " << nest_height << " feet" << endl;
                outs << "Number of Secondary Nests: " << add_nests << endl;
                outs << "Field Percentage: " << field_amt << "%" << endl;
                outs << "Main Food Source: " << main_foodh << endl;
		outs << "--------------------------" << endl;
        }
        else
        {
                outs << "RH" << endl;
                outs << nest_height << endl;
                outs << add_nests << endl;
                outs << field_amt << endl;
                outs << main_foodh << endl;
        }
}

