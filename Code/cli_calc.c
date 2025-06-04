// A simple C programming language CLI calculator using stdin and stdout
// Aamir Elhaissouni
// 6-3-2025


// Libararies:
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	//Check for proper use calculator
	if (argc !=4){
		printf("Improper use, proper usage: %s <first #> <operator> <second #>", argv[0]); //Print how to use calcualtor for case of improper use	
		return 1; // Return 1 as error code for improper use
	}

	int num1 = atoi(argv[1]); 
	char op = atoi(argv[2]);
	int num2 = atoi(argv[3]);
	
	// Integer to store result of mathematical function
	int result;

	// Switch case to do numerical operation based on whta operation user entered
	switch(op){
		case "+":
			result = num1 + num2;
		case "-": 
			result = num1 - num2;
		case "*":
			result = num1 * num2;
		case "/":
			if num2 = 0{
				printf("Error: Attempting to divide by 0!\n");
				return 1;
			result = num1 / num2;
		// If operator not recognized print error
		default:
			printf("Error: Unknown operator, %c.\n", op);
			return 1;
	printf("Result: %d\n", result);
	return 0;
}

