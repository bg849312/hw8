//**************************
//
//Brandon Garner
//4-2-16
//Proj 5
//
//**************************

#ifndef Home_h
#define Home_h

#include <iostream>
#include <cmath>
#include <string>

class Home {
public:
    Home(){}
    virtual void input(std::istream& ins) = 0;
    virtual void output(std::ostream& outs) = 0;
    
private:
    
};

//

class Dragon :public Home {
public:
	Dragon(std::string hm_l = "Cave", int h = 7, double h_rad = 22)
	{home_loc = hm_l, home_height = h, home_rad = h_rad;}
	void input(std::istream& ins);
	void output(std::ostream& outs);

private:
	std::string home_loc; 
	int home_height;
	double home_rad;
};

//

class Fish : public Home {
public:
	Fish(bool m_h= 1, int q_rad = 4, bool f_m = 0)
	{mini_house = m_h, aq_rad = q_rad, masseuse = f_m;}
	void input(std::istream& ins);
	void output(std::ostream& outs);

private:
	bool mini_house;
	bool masseuse;
	int aq_rad;
	
};

//

class Dog:public Home{
public:
    Dog(std::string b_m = "cotton", double y_s = 21, int n_r = 5, bool wtr = 1)
	{material = b_m, y_size = y_s, num_rooms = n_r, dissable = wtr;}
    void input(std::istream& ins);
    void output(std::ostream& outs);
    
private:
    std::string material;
    double y_size; 
    int num_rooms;
    bool dissable;
};

//

class Minotaur : public Home {
public:
	Minotaur(double r = 1, int w_s = 5, int h = 3, int d = 4)
	{radius = r, wep_storage = w_s, height = h, dungeons = d;}
	void input(std::istream& ins);
	void output(std::ostream& outs);

private:
	double radius;
	int wep_storage;
	int height;
	int dungeons;
};

//

class Tiger :public Home {
public:
	Tiger(int l = 5, int w = 8, int c = 1)
	{length = l, width = w, catnip = c;}
	void input(std::istream& ins);
	void output(std::ostream& outs);
private:
	int length;
	int width;
	int catnip;
};

#endif
