#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#ifndef  CUBE_CLASS
#define CUBE_CLASS

const int dim3 = 3;
const int dim12 = 12;
const int dim48 = 48;

class Cube{
	public:

	char colors[dim48];
	vector<string> moves;
	
	Cube();
	Cube(const Cube& copy);

	void return_possible_states(queue<Cube>* frontier);
	void change_colors(int index1, int index2, int index3, int index4);
	void change_colors_2(int index1, int index2, int index3, int index4);
	
	void add_colors(char colors_array[]);
	void make_array(char empty_array[]);
	
	void add_move(string move);

	bool operator== (Cube& cube);
	bool operator!= (Cube& cube);

	Cube R();
	Cube r();
	Cube L();
	Cube l();
	Cube U();
	Cube u();
	Cube D();
	Cube d();
	Cube F();
	Cube f();
	Cube B();
	Cube b();
	Cube R2();
	Cube L2();
	Cube U2();
	Cube D2();
	Cube F2();
	Cube B2();
};

#endif