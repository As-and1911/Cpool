/*EPITECH PROJECTS , 2025
**My_putstr.c
**File description :
** A function that displays one-by-one all the characters of a string
*/
void my_putchar(char c);
int my_putstr(char const *str)
{
 int i = 0;
  while(str[i] != '\0'){
        my_putchar(str[i]);
        my_putchar(',');
        my_putchar(' ');
        i++;
   }
}
