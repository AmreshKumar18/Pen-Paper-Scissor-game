// GAME PROJECT //  pen paper scissor game
#include<stdio.h>
#include<stdlib.h>   //It is used for random library srand() and rand()
int player1, player2;   //player 2 is computer, it generates random numbers
int menu(){
	int choice;
	printf("\n\t\t===================================");
	printf("\n\t\t<|                               |>");
	printf("\n\t\t<|   ----WELCOME TO GAME----     |>");
	printf("\n\t\t<|                               |>");
	printf("\n\t\t<|   1. Select Rock              |>");
	printf("\n\t\t<|   2. Select Paper             |>");
	printf("\n\t\t<|   3. Select Scissor           |>");
	printf("\n\t\t<|   4. Exit                     |>");
	printf("\n\t\t<|                               |>");
	printf("\n\t\t<|   CREATED BY:- AMRESH KUMAR   |>");
	printf("\n\t\t<|                               |>");
	printf("\n\t\t===================================");
	printf("\n\n\t\t Enter the your Choice (Player 1):- ");
	scanf("%d",&choice);
	    
	return(choice);
}

int setup(){
	label:
		player2=rand()%4;        //modulus divisor is used for gives remainder (0,1,2,3)
		if(player2==0)          //0 is not available in the option so, exclude the 0, and go again to check the conditions
		goto label;            //label is just same as jumping the level to again label statements
		
		player1=menu();
}

int logic(){
	switch(player1){
		case 1:     //player1 (you) select rock
			if(player2==1){
				printf("\n\nGame Draw");      //player2 (computer) choose rock
				printf("\n\nYour choice is (Rock) and Player 2 choice is (Rock)\n");
			}
			else if(player2==2){
			    printf("\n\nPlayer 2 Won");          //player2 (computer) choose Paper
				printf("\n\nYour choice is (Rock) and Player 2 choice is (Paper)\n");	
			}
			else{
				printf("\n\nPlayer 1 Won");          //player2 (computer) choose Scissor 
				printf("\n\nYour choice is Rock and Player 2 choice is Scissor");
			}
			break;
	    case 2:                 //player1 (you) select paper
	    	if(player2==1){
				printf("\n\nPlayer 1 is WON");      //player2 (computer) choose rock
				printf("\n\nYour choice is Paper and Player 2 choice is Rock\n");
			}
			else if(player2==2){
			    printf("\n\nGame Draw");          //player2 (computer) choose paper 
				printf("\n\nYour choice is Paper and Player 2 choice is Paper\n");	
			}
			else{
				printf("\n\nPlayer 2 is Won");          //player2 (computer) choose scissor 
				printf("\n\nYour choice is Paper and Player 2 choice is Scissor\n");
			}
			break;
	    case 3:         //player1 (you) select scissor
	    	if(player2==1){
				printf("\n\nPlayer 2 is WON");      //player2 (computer) choose rock
				printf("\n\nYour choice is Scissor and Player 2 choice is Rock\n");
			}
			else if(player2==2){
			    printf("\n\nPlayer 2 is WON");          //player2 (computer) choose paper 
				printf("\n\nYour choice is Scissor and Player 2 choice is Paper\n");	
			}
			else{
				printf("\n\nGame Draw");          //player2 (computer) choose scissor 
				printf("\n\nYour choice is Scissor and Player 2 choice is Scissor\n");
			}
			break;
	    case 4:
			exit(0);
		default:
			printf("\nInvalid Your Choice");
	}
}

int main(){
	
	while(1){
		setup();
	    logic();
	}
	
	return 0;
}
