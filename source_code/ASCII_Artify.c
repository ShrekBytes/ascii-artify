
/*
 * Program Name: ASCII Artify
 * Description: This program converts input text into ASCII art including spaces.
 *              English alphabets and - _ : . / signs only.
 *              Every loop prints one line and the arts have height of 3 lines(excluding newline).
 *              Change the ARRAY_SIZE(default 99) to generate more arts at a time.
 *
 * Author: ShrekBytes
 * Version: 1.2
 */


#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 99  // Increase the size to accommodate longer input strings

void ClearScreen();
void ASCII_Artify(char rawString[ARRAY_SIZE]);


int main()
{
	char rawString[ARRAY_SIZE], yORn;

	do
	{
		printf("\n       ==================================================\n");
		ASCII_Artify("ASCII ARTIFY");
		printf("\n       ==================================================\n");

		printf("\tType the Word or Sentence:\n\n\t>> ");
		scanf(" ");	// TO CLEAN BUFFER
		fgets(rawString, ARRAY_SIZE, stdin);

		ASCII_Artify(rawString);

		printf("\n\t--------------------------------\n\tPress y or 1 to generate again: ");
		scanf("%c", &yORn);
		ClearScreen();
	}
	while (yORn == 'y' || yORn == '1');

	return 0;
}


// Clears Console or Terminal Screen
void ClearScreen()
{
	#ifdef _WIN32
		system("cls");	// Windows
	#else
		printf("\033[2J\033[1;1H");	//Unix based OS
	#endif
}


// ASCII ART GENERATOR
void ASCII_Artify(char rawString[ARRAY_SIZE])
{
	printf("\t");
    for (int i = 0; i < strlen(rawString); i++)
    {
        if (rawString[i] == 'a' || rawString[i] == 'A') printf("____ ");
        else if (rawString[i] == 'b' || rawString[i] == 'B') printf("___  ");
        else if (rawString[i] == 'c' || rawString[i] == 'C') printf("____ ");
        else if (rawString[i] == 'd' || rawString[i] == 'D') printf("___  ");
        else if (rawString[i] == 'e' || rawString[i] == 'E') printf("____ ");
        else if (rawString[i] == 'f' || rawString[i] == 'F') printf("____ ");
        else if (rawString[i] == 'g' || rawString[i] == 'G') printf("____ ");
        else if (rawString[i] == 'h' || rawString[i] == 'H') printf("_  _ ");
        else if (rawString[i] == 'i' || rawString[i] == 'I') printf("_ ");
        else if (rawString[i] == 'j' || rawString[i] == 'J') printf(" _ ");
        else if (rawString[i] == 'k' || rawString[i] == 'K') printf("_  _ ");
        else if (rawString[i] == 'l' || rawString[i] == 'L') printf("_    ");
        else if (rawString[i] == 'm' || rawString[i] == 'M') printf("_  _ ");
        else if (rawString[i] == 'n' || rawString[i] == 'N') printf("_  _ ");
        else if (rawString[i] == 'o' || rawString[i] == 'O') printf("____ ");
        else if (rawString[i] == 'p' || rawString[i] == 'P') printf("___  ");
        else if (rawString[i] == 'q' || rawString[i] == 'Q') printf("____ ");
        else if (rawString[i] == 'r' || rawString[i] == 'R') printf("____ ");
        else if (rawString[i] == 's' || rawString[i] == 'S') printf("____ ");
        else if (rawString[i] == 't' || rawString[i] == 'T') printf("___ ");
        else if (rawString[i] == 'u' || rawString[i] == 'U') printf("_  _ ");
        else if (rawString[i] == 'v' || rawString[i] == 'V') printf("_  _ ");
        else if (rawString[i] == 'w' || rawString[i] == 'W') printf("_ _ _ ");
        else if (rawString[i] == 'x' || rawString[i] == 'X') printf("_  _ ");
        else if (rawString[i] == 'y' || rawString[i] == 'Y') printf("_   _ ");
        else if (rawString[i] == 'z' || rawString[i] == 'Z') printf("___  ");
        else if (rawString[i] == ' ') printf("   ");
        else if (rawString[i] == ':') printf(" ");
        else if (rawString[i] == '/') printf("  / ");
        else if (rawString[i] == '.') printf(" ");
        else if (rawString[i] == '-') printf("   ");
        else if (rawString[i] == '_') printf("    ");
    }
    printf("\n");


    printf("\t");
    for (int i = 0; i < strlen(rawString); i++)
    {
        if (rawString[i] == 'a' || rawString[i] == 'A') printf("|__| ");
        else if (rawString[i] == 'b' || rawString[i] == 'B') printf("|__] ");
        else if (rawString[i] == 'c' || rawString[i] == 'C') printf("|    ");
        else if (rawString[i] == 'd' || rawString[i] == 'D') printf("|  \\ ");
        else if (rawString[i] == 'e' || rawString[i] == 'E') printf("|___ ");
        else if (rawString[i] == 'f' || rawString[i] == 'F') printf("|___ ");
        else if (rawString[i] == 'g' || rawString[i] == 'G') printf("| __ ");
        else if (rawString[i] == 'h' || rawString[i] == 'H') printf("|__| ");
        else if (rawString[i] == 'i' || rawString[i] == 'I') printf("| ");
        else if (rawString[i] == 'j' || rawString[i] == 'J') printf(" | ");
        else if (rawString[i] == 'k' || rawString[i] == 'K') printf("|_/  ");
        else if (rawString[i] == 'l' || rawString[i] == 'L') printf("|    ");
        else if (rawString[i] == 'm' || rawString[i] == 'M') printf("|\\/| ");
        else if (rawString[i] == 'n' || rawString[i] == 'N') printf("|\\ | ");
        else if (rawString[i] == 'o' || rawString[i] == 'O') printf("|  | ");
        else if (rawString[i] == 'p' || rawString[i] == 'P') printf("|__] ");
        else if (rawString[i] == 'q' || rawString[i] == 'Q') printf("|  | ");
        else if (rawString[i] == 'r' || rawString[i] == 'R') printf("|__/ ");
        else if (rawString[i] == 's' || rawString[i] == 'S') printf("[__  ");
        else if (rawString[i] == 't' || rawString[i] == 'T') printf(" |  ");
        else if (rawString[i] == 'u' || rawString[i] == 'U') printf("|  | ");
        else if (rawString[i] == 'v' || rawString[i] == 'V') printf("|  | ");
        else if (rawString[i] == 'w' || rawString[i] == 'W') printf("| | | ");
        else if (rawString[i] == 'x' || rawString[i] == 'X') printf(" \\/  ");
        else if (rawString[i] == 'y' || rawString[i] == 'Y') printf(" \\_/  ");
        else if (rawString[i] == 'z' || rawString[i] == 'Z') printf("  /  ");
        else if (rawString[i] == ' ') printf("   ");
        else if (rawString[i] == ':') printf(".");
        else if (rawString[i] == '/') printf(" /  ");
        else if (rawString[i] == '.') printf(" ");
        else if (rawString[i] == '-') printf("__ ");
        else if (rawString[i] == '_') printf("    ");
    }
    printf("\n");


    printf("\t");
    for (int i = 0; i < strlen(rawString); i++)
    {
        if (rawString[i] == 'a' || rawString[i] == 'A') printf("|  | ");
        else if (rawString[i] == 'b' || rawString[i] == 'B') printf("|__] ");
        else if (rawString[i] == 'c' || rawString[i] == 'C') printf("|___ ");
        else if (rawString[i] == 'd' || rawString[i] == 'D') printf("|__/ ");
        else if (rawString[i] == 'e' || rawString[i] == 'E') printf("|___ ");
        else if (rawString[i] == 'f' || rawString[i] == 'F') printf("|    ");
        else if (rawString[i] == 'g' || rawString[i] == 'G') printf("|__] ");
        else if (rawString[i] == 'h' || rawString[i] == 'H') printf("|  | ");
        else if (rawString[i] == 'i' || rawString[i] == 'I') printf("| ");
        else if (rawString[i] == 'j' || rawString[i] == 'J') printf("_| ");
        else if (rawString[i] == 'k' || rawString[i] == 'K') printf("| \\_ ");
        else if (rawString[i] == 'l' || rawString[i] == 'L') printf("|___ ");
        else if (rawString[i] == 'm' || rawString[i] == 'M') printf("|  | ");
        else if (rawString[i] == 'n' || rawString[i] == 'N') printf("| \\| ");
        else if (rawString[i] == 'o' || rawString[i] == 'O') printf("|__| ");
        else if (rawString[i] == 'p' || rawString[i] == 'P') printf("|    ");
        else if (rawString[i] == 'q' || rawString[i] == 'Q') printf("|_\\| ");
        else if (rawString[i] == 'r' || rawString[i] == 'R') printf("|  \\ ");
        else if (rawString[i] == 's' || rawString[i] == 'S') printf("___] ");
        else if (rawString[i] == 't' || rawString[i] == 'T') printf(" |  ");
        else if (rawString[i] == 'u' || rawString[i] == 'U') printf("|__| ");
        else if (rawString[i] == 'v' || rawString[i] == 'V') printf(" \\/  ");
        else if (rawString[i] == 'w' || rawString[i] == 'W') printf("|_|_| ");
        else if (rawString[i] == 'x' || rawString[i] == 'X') printf("_/\\_ ");
        else if (rawString[i] == 'y' || rawString[i] == 'Y') printf("  |   ");
        else if (rawString[i] == 'z' || rawString[i] == 'Z') printf(" /__ ");
        else if (rawString[i] == ' ') printf("   ");
        else if (rawString[i] == ':') printf(".");
        else if (rawString[i] == '/') printf("/   ");
        else if (rawString[i] == '.') printf(".");
        else if (rawString[i] == '-') printf("   ");
        else if (rawString[i] == '_') printf("___ ");
    }
    printf("\n");
	
}
