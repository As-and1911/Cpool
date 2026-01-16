/*EPITECH PROJECTS , 2025
** My_strlen.c
**File description:
** A function that counts and returns the number of characters found in the string given as parameter
*/
void my_putchar(char c);
int my_strlen(char const *str)
{
 int i = 0;
 while(str[i] != '\0'){
      i++;
   }
 return i;
}
