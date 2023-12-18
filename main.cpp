#include <vector>
#include <queue>
#include<iostream>

using namespace std;

const int dim18 = 18;
string all_moves[dim18] ={"R", "r", "L", "l", "F", "f", "B", "b", "U", "u", "D", "d", "2R", "2L", "2F", "2B", "2U", "2D"};

#include "Cube.h"
#include "helper.cpp"
#include "Cube.cpp"
#include "search.cpp"
#include "color_handling.cpp"

int main(){
	char start_array[dim48];
	char goal_array[dim48];
	declare_goal_array(goal_array);
	Cube goal_cube;
	goal_cube.add_colors(goal_array);

	const int dimension = 4; //add number of scramble moves here
	string moves [dimension] = {"u", "R", "l", "F"}; //add scramble moves here

	Cube start_state(goal_cube);
	start_state = scramble_cube(moves, dimension, start_state);//scrambles the cube

	vector<string> moves_to_do = breadth_first_search(start_state, goal_cube); //call search algorithm

	for(int i = 1; i < moves_to_do.size(); i++){
		cout<<moves_to_do[i]<<" ";
	}
	cout<<endl;
}



