vector<string> breadth_first_search(Cube starting_state, Cube goal_state){
	queue<Cube> frontier;
	vector<string> moves;

	starting_state.add_move("0");
	frontier.push(starting_state);
	int n_cicles = 0;
	bool goal_found = false;

	while(goal_found == false){
		
		n_cicles++;
		cout<<n_cicles<<"\n";

		if(frontier.front() == goal_state){ //checking if the node is the goal state
			goal_found = true;
			cout<<"Goal Node found"<<endl;
			cout<<"Clearing frontier"<<endl;

			for(int i =0; i<frontier.front().moves.size(); i++){
				moves.insert(moves.begin(), frontier.front().moves[i]);
			}

			frontier = {};
			return moves;
		}
		else{
			frontier.front().return_possible_states(&frontier);//checking for the new possible states(deleting the one already seen)

			frontier.pop(); //deleting new node from the frontier
		}
	}

	return {"0"};
}
