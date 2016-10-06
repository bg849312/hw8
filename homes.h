// Scott Kelley
// CS 2401
// Project 5
// 3/31/2016
//
// home.h
//

#ifndef HOME_H
#define HOME_H

#include <iostream>
#include <list>

// HOME (PARENT CLASS)
class Home
{
	public:
		virtual void input(std::istream& ins) = 0;
		virtual void output(std::ostream& outs) = 0;

	private:
};

// POLAR BEAR - FIRST CHILD CLASS
class PolarBear:public Home
{
	public:
		PolarBear();
		void input(std::istream& ins);
		void output(std::ostream& outs);

	private:
		double air_temp;	// min and max temp range, pick a temp (-32 to 32 F)
		int seals_num;		// number of seals for the bear to eat
		std::string bedding_type;	// type of bedding (deep, shallow, or none)
		double water_amt;	// percent of home that is covered in water
};


// RAINBOW TROUT - SECOND CHILD CLASS
class RainbowTrout:public Home
{
	public:
		RainbowTrout();
		void input(std::istream& ins);
		void output(std::ostream& outs);

	private:
		std::string body_of_water;	// type of body of water (lake, river or coastal)
		double water_temp;	// min/max temp range, pick a temp (55 to 75 F)
		char other_fish;	// ask to add other fish to environment, y or n
		std::string plant_life;	// light, moderate, or heavy plant life in environment
};


// COBRA SNAKE - THIRD CHILD CLASS
class CobraSnake:public Home
{
	public:
		CobraSnake();
		void input(std::istream& ins);
		void output(std::ostream& outs);

	private:
		int hole_num;		// number of entrances/exits to underground nest (1 to 10)
		std::string forest;  	// light, moderate, or high density of forest
		std::string water;		// small, medium, large, or no amount of surrounding water
		std::string main_foodc;	// main source of food, birds or rodents

};

// GRAY WOLF - FOURTH CHILD CLASS
class GrayWolf:public Home
{
	public:
		GrayWolf();
		void input(std::istream& ins);
		void output(std::ostream& outs);

	private:
		int other_wolves;	// number of other wolves (pack), 0 for none, 10 max
		std::string habitat_type;	// type of habitat, desert, grassland, forest, tundra
		char play_den;		// add play den for pups, y or n
		int den_rooms;		// number of rooms in the den (1 to 5)

};


// REDTAILED HAWK - FIVE CHILD CLASS
class RedtailedHawk:public Home
{
	public:
		RedtailedHawk();
		void input(std::istream& ins);
		void output(std::ostream& outs);

	private:
		double nest_height;	// how high the nest is (6 to 12 feet)
		int add_nests;		// add optional nests to main nest, 0 for none (0 to 4)
		double field_amt;	// percent of envrionment covered with fields 
		std::string main_foodh;	// main food source, pidgeons or rats
};

#endif
