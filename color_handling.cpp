int insert_array(char array[], int last_index){
    int x;
    for(int i=last_index; i<last_index+8; i++){
        cin>>x;
        array[i] = x;
    }

	return last_index+8;
}

void insert_colors(char initial_array[]){ //order for adding colors: yellow, red, green blue, orange, white
    int last_index = 0;

    cout<<"Inserire tutti i colori da sinistra a destra, dal basso verso l'alto "<<endl;
    cout<<""<<endl;

	cout<<"Inserisci i colori della faccia gialla: ";
    last_index = insert_array(initial_array, last_index);
    cout<<""<<endl;

    cout<<"Inserisci i colori della faccia rossa: ";
    last_index = insert_array(initial_array, last_index);
    cout<<""<<endl;
	 
	cout<<"Inserisci i colori della faccia verde: ";
    last_index = insert_array(initial_array, last_index);
    cout<<""<<endl;    
    
	cout<<"Inserisci i colori della faccia blu: ";
    last_index = insert_array(initial_array, last_index);
    cout<<""<<endl;
 
    cout<<"Inserisci i colori della faccia arancione: ";
    last_index = insert_array(initial_array, last_index);
    cout<<""<<endl;

    cout<<"Inserisci i colori della faccia bianca: ";
    last_index = insert_array(initial_array, last_index);
    cout<<""<<endl;
}

void declare_goal_array(char goal_array[]){
	for(int i = 0; i < dim48; i++){
		if(i < 8){
			goal_array[i] = 'y';
		}
		else if(i < 16){
			goal_array[i] = 'r';
		}
		else if(i < 24){
			goal_array[i] = 'g';
		}
		else if(i < 32){
			goal_array[i] = 'b';
		}
		else if(i < 40){
			goal_array[i] = 'o';
		}
		else if(i < 48){
			goal_array[i] = 'w';
		}
	}
}