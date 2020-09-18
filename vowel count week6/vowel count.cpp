#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char message[100];
    int count, lename, x = 0, y = 0;
    printf("Enter your message :");
    scanf_s("%s", message);
    lename = strlen(message);
    printf("Convate Name:");
    for (count = lename; count > -1; count--)
    {
        printf("%c ", message[count]);
        if ((message[count] == 'a') || (message[count] == 'e') || (message[count] == 'i') || (message[count] == 'o') || (message[count] == 'u'))
            x++;
        else
            y++;
    }
    printf("\nYou message are %d Letter", lename);
    printf("\nVowel  =%d", x);
    printf("\nLetter =%d", y);

    return 0;
}