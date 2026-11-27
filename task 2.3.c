#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int secret = 42;
	int user_guess ;
	printf("Guess the secret number:");
	scanf("%d",&user_guess);
	
	if (user_guess < secret)
	  printf("Your guess is too low!");
	else if(user_guess > secret)
	  printf("Your guess is too high!");
	else
	  printf("You guessed it! The secret was %d.",secret);
	return 0;
}
