Cube::Cube(){}

Cube::Cube(const Cube &copy){

	for(int i=0; i<dim48; i++){
		this->colors[i] = copy.colors[i]; 
	}

	for(int i = 0; i < copy.moves.size(); i++){
		moves.insert(moves.begin() + i, copy.moves[i]);
	}

}

void Cube::return_possible_states(queue<Cube>* frontier){
	string opposite_move = return_opposite_move(this->moves[0]);
	Cube appoggio_cube;


	for(int i = 0; i < dim18; i++){
		if(all_moves[i] != opposite_move && all_moves[i] != this->moves[0]){
			appoggio_cube = execute_move(all_moves[i], *this);
			appoggio_cube.add_move(all_moves[i]);

			frontier->push(appoggio_cube);
		}
	}
}

bool Cube::operator== (Cube& cube){
	for(int i = 0; i<dim48; i++){
		if(cube.colors[i] != this->colors[i]){
			return false;
		}
	}

	return true;
}

bool Cube::operator!= (Cube& cube){
	for(int i = 0; i<dim48; i++){
		if(cube.colors[i] != this->colors[i]){
			return true;
		}
	}

	return false;
}

void Cube::add_move(string m){
	moves.insert(moves.begin(), m);
}

Cube Cube::R(){  
	Cube return_cube(*this);

	return_cube.change_colors(7, 15, 40, 32);
	return_cube.change_colors(2, 10, 45, 37);
	return_cube.change_colors(4, 12, 43, 35);
	return_cube.change_colors(16, 21, 23, 18);
	return_cube.change_colors(19, 22, 20, 17);
	
	return return_cube;
}
Cube Cube::r(){
	Cube return_cube(*this);

	return_cube.change_colors(32, 40, 15, 7);
	return_cube.change_colors(37, 45, 10, 2);
	return_cube.change_colors(35, 43, 12, 4);
	return_cube.change_colors(18, 23, 21, 16);
	return_cube.change_colors(17, 20, 22, 19);
	
	return return_cube;
}
Cube Cube::L(){
	Cube return_cube(*this);

	return_cube.change_colors(13, 5, 34, 42);
	return_cube.change_colors(8, 0, 39, 47);
	return_cube.change_colors(11, 3, 36, 44);
	return_cube.change_colors(28, 25, 27, 30);
	return_cube.change_colors(31, 29, 24, 26);

	return return_cube;
}
Cube Cube::l(){
	Cube return_cube(*this);

	return_cube.change_colors(42, 34, 5, 13);
	return_cube.change_colors(47, 39, 0, 8);
	return_cube.change_colors(44, 36, 3, 11);
	return_cube.change_colors(30, 27, 25, 28);
	return_cube.change_colors(26, 24, 29, 31);

	return return_cube;
}
Cube Cube::U(){
	Cube return_cube(*this);

	return_cube.change_colors(8, 16, 32, 24);
	return_cube.change_colors(10, 18, 34, 26);
	return_cube.change_colors(6, 4, 1, 3);
	return_cube.change_colors(7, 2, 0, 5);
	return_cube.change_colors(9, 17, 33, 25);

	return return_cube;
}
Cube Cube::u(){
	Cube return_cube(*this);
	
	return_cube.change_colors(24, 32, 16, 8);
	return_cube.change_colors(26, 34, 18, 10);
	return_cube.change_colors(3, 1, 4, 6);
	return_cube.change_colors(5, 0, 2, 7);
	return_cube.change_colors(25, 33, 17, 9);

	return return_cube;
}
Cube Cube::D(){
	Cube return_cube(*this);
	
	return_cube.change_colors(21, 13, 29, 37);
	return_cube.change_colors(23, 15, 31, 39);
	return_cube.change_colors(22, 14, 30, 38);
	return_cube.change_colors(45, 47, 42, 40);
	return_cube.change_colors(46, 44, 41, 43);

	return return_cube;
}
Cube Cube::d(){
	Cube return_cube(*this);
	
	return_cube.change_colors(37, 29, 13, 21);
	return_cube.change_colors(39, 31, 15, 23);
	return_cube.change_colors(38, 30, 14, 22);
	return_cube.change_colors(40, 42, 47, 45);
	return_cube.change_colors(43, 41, 44, 46);

	return return_cube;
}
Cube Cube::F(){
	Cube return_cube(*this);
	
	return_cube.change_colors(16, 5, 31, 45);
	return_cube.change_colors(21, 7, 26, 47);
	return_cube.change_colors(19, 6, 28, 46);
	return_cube.change_colors(10, 8, 13, 15);
	return_cube.change_colors(9, 11, 14, 12);

	return return_cube;
}
Cube Cube::f(){ //problema qui
	Cube return_cube(*this);
	
	return_cube.change_colors(45, 31, 5, 16);
	return_cube.change_colors(47, 26, 7, 21);
	return_cube.change_colors(46, 28, 6, 19);
	return_cube.change_colors(15, 13, 8, 10);
	return_cube.change_colors(12, 14, 11, 9);

	return return_cube;
}
Cube Cube::B(){
	Cube return_cube(*this);
	
	return_cube.change_colors(34, 32, 37, 39);
	return_cube.change_colors(33, 35, 38, 36);
	return_cube.change_colors(42, 24, 2, 23);
	return_cube.change_colors(40, 29, 0, 18);
	return_cube.change_colors(41, 27, 1, 20);

	return return_cube;
}
Cube Cube::b(){
	Cube return_cube(*this);
	
	return_cube.change_colors(39, 37, 32, 34);
	return_cube.change_colors(36,38, 35, 33);
	return_cube.change_colors(23, 2, 24, 42);
	return_cube.change_colors(18, 0, 29, 40);
	return_cube.change_colors(20, 1, 27, 41);

	return return_cube;
}


Cube Cube::R2(){  
	Cube return_cube(*this);

	return_cube.change_colors_2(7, 15, 40, 32);
	return_cube.change_colors_2(2, 10, 45, 37);
	return_cube.change_colors_2(4, 12, 43, 35);
	return_cube.change_colors_2(16, 21, 23, 18);
	return_cube.change_colors_2(19, 22, 20, 17);
	
	return return_cube;
}
Cube Cube::L2(){
	Cube return_cube(*this);

	return_cube.change_colors_2(13, 5, 34, 42);
	return_cube.change_colors_2(8, 0, 39, 47);
	return_cube.change_colors_2(11, 3, 36, 44);
	return_cube.change_colors_2(28, 25, 27, 30);
	return_cube.change_colors_2(31, 29, 24, 26);

	return return_cube;
}
Cube Cube::U2(){
	Cube return_cube(*this);

	return_cube.change_colors_2(8, 16, 32, 24);
	return_cube.change_colors_2(10, 18, 34, 26);
	return_cube.change_colors_2(6, 4, 1, 3);
	return_cube.change_colors_2(7, 2, 0, 5);
	return_cube.change_colors_2(9, 17, 33, 25);

	return return_cube;
}
Cube Cube::D2(){
	Cube return_cube(*this);
	
	return_cube.change_colors_2(21, 13, 29, 37);
	return_cube.change_colors_2(23, 15, 31, 39);
	return_cube.change_colors_2(22, 14, 30, 38);
	return_cube.change_colors_2(45, 47, 42, 40);
	return_cube.change_colors_2(46, 44, 41, 43);

	return return_cube;
}
Cube Cube::F2(){
	Cube return_cube(*this);
	
	return_cube.change_colors_2(16, 5, 31, 45);
	return_cube.change_colors_2(21, 7, 26, 47);
	return_cube.change_colors_2(19, 6, 28, 46);
	return_cube.change_colors_2(10, 8, 13, 15);
	return_cube.change_colors_2(9, 11, 14, 12);

	return return_cube;
}
Cube Cube::B2(){
	Cube return_cube(*this);
	
	return_cube.change_colors_2(34, 32, 37, 39);
	return_cube.change_colors_2(33, 35, 38, 36);
	return_cube.change_colors_2(42, 24, 2, 23);
	return_cube.change_colors_2(40, 29, 0, 18);
	return_cube.change_colors_2(41, 27, 1, 20);
	
	return return_cube;
}


void Cube::add_colors(char colors_array[]){
	for(int i = 0; i<dim48; i++){
		this->colors[i] = colors_array[i];
	}
}

void Cube::make_array(char empty_array[]){
	for(int i =0; i < dim48; i++){
		empty_array[i] = this->colors[i];
	}
}

/////////////////////////////////////////////////////////////////////////////
//		functions for moves

void Cube::change_colors(int index1, int index2, int index3, int index4){
	char appo = colors[index1];

	colors[index1] = colors[index2];
	colors[index2] = colors[index3];
	colors[index3] = colors[index4];
	colors[index4] = appo;

}

void Cube::change_colors_2(int index1, int index2, int index3, int index4){
	char appo = colors[index1];

	colors[index1] = colors[index3];
	colors[index3] = appo;

	appo = colors[index2];
	colors[index2] = colors[index4];
	colors[index4] = appo;
}