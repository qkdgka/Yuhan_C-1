#include <stdio.h>

int print_title_screen()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##         Dino Run          ##\n");
	printf("##          V.0.1            ##\n");
	printf("##                           ##\n");
	printf("##  1. Start Game            ##\n");
	printf("##  2. How to Play           ##\n");
	printf("##  3. Exit                  ##\n");
	printf("##                           ##\n");
	printf("###############################\n");

	return 0;
}

int print_how_to_play_screen()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##      To Avoid Enemy       ##\n");
	printf("##                           ##\n");
	printf("##  Press Space Bar To Jump  ##\n");
	printf("##                           ##\n");
    	printf("###############################\n");

	return 0;
}

int main()
{
	int game_state = 1;

	char map[450];	/* 가로 : 30 + 1(개행문자)  세로 15  */
	
	int i = 0;
	while(i<450)
	{
      		map[i]='0';
		i=i+1;
	}
	
	map[2] = '\0';

	printf("%s", map);

	return 0;
}
