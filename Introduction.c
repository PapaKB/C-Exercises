#include <stdio.h> // Standard input output
#include <stdlib.h>
#include <math.h>

char *sayHi(char name[]) { // * before function means it returns a void pointer
	printf("Hello %s\n", name);
	return name;
}

double cube(double number) {
	return pow(number, 3);
}

int main() 
{
	double number;
	printf("Enter a number : ");
	scanf("%lf", &number); // &number means address of number
	printf("%f cubed is %f\n", number, cube(number));

	char name[20];
	printf("Enter a name : ");
	scanf("%s", name); //%s means it will be replaced with a string.
	sayHi(name);

	char name2[] = "John"; //the [] mean that what is stored is a string and not just one charcater.
	int age = 12;
	double number1 = 30.7; 
	char grade = 'A'; //char is for ONE character in single quotation marks.
	const int NUM= 5; //constant - cannot be changed. Typically in all capitals.

	printf("You %s, %d \n", "are", age); // %d means it will be replaced with an integer. "are" and 600 are also considered constants.
	printf("%f \n", 5.0*3.3); //%f is for a decimal number. Answer = 16.500000
			//%c is for characters.
			// Maths with to integers will only return an integer.
			// pow(2,3) is 2 cubed.

	//scanf does not take input with spaces.
	char usersName[20];
	fflush(stdin);
	printf("Please enter your name : ");//fgets can be used to store multiple words, as in text with spaces.
	//scanf("%s%s", somestringname, somestringname2); //this will take two string from the same line. Alternative to fgets.
	fgets(usersName, 20, stdin); //stdin stands for standard input. 20 is the size.
	printf("Your name is : %s", usersName);

	int userAge;
	printf("Enter your age : ");
	scanf("%d", &userAge); //takes input from the user. & points to age variable
	printf("You are %d \n", userAge);

	double mark;
	printf("Enter your mark : ");
	scanf("%lf", &mark); //lf means its looking for a double value.
	printf("Your mark is %f\n", mark);

	char userName[12];//needs a specified size unless a value is given.
	printf("Enter your user name: ");
	scanf("%s", userName); //For string & is not needed.
	printf("first letter : %c\n", userName[0]);

	return 0;
}


