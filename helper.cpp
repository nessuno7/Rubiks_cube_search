Cube execute_move(string move, Cube previous_state){
	
	if(move == "R"){
		return previous_state.R();
	}
	else if(move == "r"){
		return previous_state.r();
	}
	else if(move == "L"){
		return previous_state.L();
	}
	else if(move == "l"){
		return previous_state.l();
	}
	else if(move == "B"){
		return previous_state.B();
	}
	else if(move == "b"){
		return previous_state.b();
	}
	else if(move == "F"){
		return previous_state.F();
	}
	else if(move == "f"){
		return previous_state.f();
	}
	else if(move == "U"){
		return previous_state.U();
	}
	else if(move == "u"){
		return previous_state.u();
	}
	else if(move == "D"){
		return previous_state.D();
	}
	else if(move == "d"){
		return previous_state.d();
	}
	else if(move == "2R"){
		return previous_state.R2();
	}
	else if(move == "2L"){
		return previous_state.L2();
	}
	else if(move == "2B"){
		return previous_state.B2();
	}
	else if(move == "2F"){
		return previous_state.F2();
	}
	else if(move == "2U"){
		return previous_state.U2();
	}
	else if(move == "2D"){
		return previous_state.D2();
	}
	else if(move == "0"){
		return previous_state;
	}
	else{
		cout<<"Errore execute moves"<<endl;
		return previous_state;
	}
}


string return_opposite_move(string move){
	if(move == "R"){
		return "r";
	}
	else if(move == "r"){
		return "R";
	}
	else if(move == "L"){
		return "l";
	}
	else if(move == "l"){
		return "L";
	}
	else if(move == "B"){
		return "b";
	}
	else if(move == "b"){
		return "B";
	}
	else if(move == "F"){
		return "f";
	}
	else if(move == "f"){
		return "F";
	}
	else if(move == "U"){
		return "u";
	}
	else if(move == "u"){
		return "U";
	}
	else if(move == "D"){
		return "d";
	}
	else if(move == "d"){
		return "D";
	}
	else if(move == "2R"){
		return move;
	}
	else if(move == "2L"){
		return move;
	}
	else if(move == "2B"){
		return move;
	}
	else if(move == "2F"){
		return move;
	}
	else if(move == "2U"){
		return move;
	}
	else if(move == "2D"){
		return move;
	}
	else if(move == "0"){
		return "0";
	}
	else{
		cout<<"Errore execute opposite moves"<<endl;
		return "0";
	}

}

string return_double_move(string move){
	if(move == "R" || move == "r"){
		return "R2";
	}
	else if(move == "L" || move == "l"){
		return "L2";
	}
	else if(move == "B" || move == "b"){
		return "B2";
	}
	else if(move == "F" || move == "f"){
		return "F2";
	}
	else if(move == "U" || move == "u"){
		return "U2";
	}
	else if(move == "D" || move == "d"){
		return "D2";
	}
    else{
		return move;
	}

}

Cube scramble_cube(string moves[], int dim, Cube starting_state){
	Cube scrambled_cube(starting_state);

	for(int i = 0; i<dim; i++){
		scrambled_cube = execute_move(moves[i], scrambled_cube);
	}

	return scrambled_cube;
}

