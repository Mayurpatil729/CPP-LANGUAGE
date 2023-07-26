// FOR TURBO

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()

{
	char file[20];
	clrscr();
	printf("\n\n\nplease enter name of turbo file\n\n\t==");
	scanf("%s", file);
	if (remove(file) == 0)
	{
		printf("\n\nYour file is deleted succesfully..!");
	}
	else
	{
		printf("\n\nYour file is not deleted");
		perror("\n\nREASON");
	}
	getch();
}