/*
**EPITECH_PROJECT , Tek1
**My_print_revalpha
**File description :
** A function that displays the lowercase alphabet in descending order , beginning with 'z'
*/

void my_putchar (char c );
int my_print_revalpha (void)
{
   char  letter = 'z' ;
   while (letter >= 'a') {
       my_putchar(letter);
       letter--;
   }
   return(0);
}
