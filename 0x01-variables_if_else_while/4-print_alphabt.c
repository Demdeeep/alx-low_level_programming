#include <stdio.h>

/**
*main - this is the main function
*Return: Always 0 (Success)
*/

int main(void)
{
        char c;
        

        c = 'a';
        
        while
             (c <= 'z') {
                      if ((c != 'q' && c != 'e') && c <= 'z')
                             putchar(c);
                           c++;
                        }
       putchar ('\n');

        return (0);
}

