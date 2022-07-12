/**
 * In C you cannot make a method below the main method unless you prototype:
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

double cubed(double number); //Now the method has been prototyped.
int max(int num1, int num2);
int max1(int num1, int num2, int num3);

struct Student { //structs are like classes. They start with a capital letter.
	char name[50];
	char major[50];
	int age;
	double gpa;
};//must end structs with semi-colon.

int main() {
	double number;

	printf("Enter a number : ");
	scanf("%lf", &number);
	printf("%f cubed is %f\n", number, cubed(number));

	printf("max of 10, 100, 6:%d\n", max1(10, 100, 6));

	struct Student student1;
	student1.age = 12;
	student1.gpa = 4.5;
	strcpy(student1.name, "joe"); //strcpy has to be used as a string is an array of chars in C.
	strcpy(student1.major, "CS");
	printf("name:%s\nmajor:%s",student1.name, student1.major); 

	int index = 1;
	while(index <= 5) {
		printf("%d\n", index); 
		index++;
	}

	// do {
	// 	printf("%d\n", index); //will execute before checking the condition.
	// }while (index <=5);

	for(int i = 0; i<10; i++) {
		printf("%d\n", i);
	}
	return 0;
}

double cubed(double number) {
	return number*number*number;
}

int max(int num1, int num2) {
	int result;
	if(num1 > num2) {
		result = num1;
	}
	else {
		result = num2;
	}
	return result;
}

int max1(int num1, int num2, int num3) {
	int result;
	if(num1 > num2 && num1 > num3) {
		result = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		result = num2;
	}
	else {
		result = num3;
	}
	return result;
}
