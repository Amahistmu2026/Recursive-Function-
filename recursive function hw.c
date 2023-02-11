/* C Program by Abdullah Mohammad Mahi for CS 1311

 o            o
  \          /
   \        /
    :-'""'-:
 .-'  ____  `-.
( (  (_()_)  ) )
 `-.   ^^   .-'
    `._==_.'
    __)(___
*This program finds the value of your function in the regular and recursive way 
*It asks users for a positive integer value for x, and print out the result. 
*General function: In this function we directly input value in  
*place of x and get the value for that function.For example: f(x)= 10x^2 + 5x + 3; 
*Recursive function: In recursive function we rearranged the general 
*function where it repeats itself to calculate its own values. 
*For example: f(z)= f(z-1) + 20(z-1) + 15; 
f(0)= 3;
*/
#include<stdio.h>
#include<string.h>


 int fofx (int x) /*function for calculating result in the general way*/
 {
	return (10*x*x + 5*x +3); 
	
 }
 int recursivefnc(int z)  /*function for calculating result in recursive way*/
 {
 	if (z==0)
 		return 3; 
 	else 
 		return (recursivefnc(z-1) + 20*(z-1) +15); 
	
 }
	

void main (void)
{
	int x; /*take variable value  for f(x)*/	
	int a=10, b=5, c=3; /* coefficents and constant values of f(x)*/
	char userchoice;  /*recieve user choice for play again command*/
	
	printf(" This program calculates the values of a quardatic function f(x) using general"
	 " and recursive ways"); 
	printf("\n\n Our general function is f(x): 10x^2 + 5x + 3 ");
	printf("\n and, recursive function is f(x)= f(x-1) + 20(x-1) + 15" ); 	
	do {
       do{ 
        	printf("\n\n --------------------------------CALCULATION--------------------------------\n\n");
	 		
			 /*asking for a positive integer input from user*/
			printf("\n Please type a positive integer to calculate the function's value: ");
			scanf ("%i", &x);
			
			if (x < 0) /*Giving reminder if input is negative*/
				{ 
			  		printf("\n Oh! You entered a negative integer which is look like: %i.\n", x);
			  		printf("\n Please think carefully and try again ");
		    	}
				
			else 
				{ 
			  		printf("\n Wow, Great! You entered a positive number : %i.\n", x);
		    	}
		}while (x < 0); /*condition for only taking positive value*/
		/*printing results in general function ways*/
		printf("\n\n1.---------RESULT IN GENERAL FUNCTION WAY---------");
  		printf("\n Our general function is: f(x): 10x^2 + 5x + 3 "); 
  		printf("\n Since you entered x : %d.\n The quardatic function looks like :" 
		  " f(%d)= 10*(%d)^2 + 5*(%d) +3", x, x, x, x);/*Replacing function's variable with input*/
		printf ("\n The value of this quardatic function: %d", fofx(x)); /*printing ans from function*/
		
		/*printing results in general function ways*/
		printf("\n\n2.---------RESULT IN RECURSIVE FUNCTION WAY---------");
		printf("\n Our recursive function is: f(x)= f(x-1) + 20(x-1) + 15 ");
  		printf("\n Since you entered x : %d.\n The recursive function looks like :" 
		  " f(%d)= f*(%d-1) + 20*(%d-1) +15", x, x, x, x); /*Replacing function's variable with input*/
		/*printing ans using recursive function*/
		printf ("\n The value of this quardatic function in recursive way: %d", recursivefnc(x));
		
	printf("\n\nDo you want to calculate again? Enter 'Y' for yes and 'N' for no:");
    scanf(" %c", &userchoice); /*Taking user choice to play again*/
   }while(userchoice=='Y');	
}
