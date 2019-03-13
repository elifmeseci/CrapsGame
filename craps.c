#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){
	int d1,d2, sum=0, score=0, again= 1;
	
	while(again == 1){
		srand(time(NULL));
		d1= rand()%6+1;
		d2= rand()%6+1;
		
		sum = d1 + d2;
		
		printf("first dice : %d, second dice : %d\n", d1,d2);
		if(sum == 7 || sum == 11 )
			printf("you win ! ");
		else if(sum == 2 || sum == 3 || sum == 12 )
			printf("you lose ! ");
		else{
			score += sum;
			printf("your point : %d", score);
			sum =0;
			int d1= rand()%6+1;
			int d2= rand()%6+1;
			int sum = d1 + d2;
			
			printf("first dice : %d, second dice : %d\n", d1,d2);
			if(sum == 7 )
				printf("you get 7 you lose ! ");
			else if(sum==score)
				printf("you win ! ");
			else
				printf("Game Over");
			
		}
		printf("\nwill you play again? (0,1)");
		scanf("%d", &again);
	}

}
