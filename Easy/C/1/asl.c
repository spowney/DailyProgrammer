#include <stdio.h>

int main() {
	
	printf("What is your name?\n");
	
	char name[31];

	scanf("%s", name);

	printf("How old are you?\n");

	int age;
	
	scanf("%i", &age);

	printf("What is your username?\n");

	char username[31];
	
	scanf("%s", username);

	printf("Your name is %s, you are %i years old, and your username is %s\n", name, age, username);

}

