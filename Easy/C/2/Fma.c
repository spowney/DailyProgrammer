#include <stdio.h>

int main() {

	printf("Do you want to calculate [F]orce [m]ass or [a]cceleration? ");
	
	char option_chosen;	

	scanf("%c", &option_chosen);

	double force;
	double acceleration;
	double mass;

	switch(option_chosen)
	{
		case 'F':
			printf("\nYou chose to calculate a Force using the mass and acceleration\n");
			
			printf("Enter the mass: ");
			scanf("%lf", &mass);
			printf("\nEnter the acceleration: ");
			scanf("%lf", &acceleration);
			
			force = mass * acceleration;
			
			printf("\nmass x acceleration = Force");
			printf("\n%1.2f x %1.2f = %1.2f\n",mass, acceleration, force);
			
			break;

		case 'm':
			printf("\nYou chose to calculate the mass using the Force and acceleration\n");
			printf("Enter the Force: ");
			scanf("%lf", &force);
			printf("\nEnter the acceleration: ");
			scanf("%lf", &acceleration);
			
			mass = force / acceleration;
			
			printf("\nForce / acceleration = mass");
			printf("\n%1.2f / %1.2f = %1.2f", force, acceleration, mass);

			break;

		case 'a':
			printf("\nYou chose to calculate the acceleration using the Force and mass\n");
			printf("Enter the Force: ");
			scanf("%lf", force);
			printf("\nEnter the mass: ");
			scanf("%lf", mass);
			
			acceleration = force / mass;

			printf("\nForce / mass = acceleration");
			printf("\n%1.2f / %1.2f = %1.2f", force, mass, acceleration);
			//Could probably spend some more effort learning about how to present decimal points & significant figures here. 
			break;
		
		default:
			printf("/nError that wasn't an option....exiting program\n");

	}





}
