/*
**EPITECH_PROJECTS , Tek1
**My_print_digits
**File description :
**A function that displays all the digits in ascending order on a single line
*/
void my_putchar (char c);
int my_print_digits (void)
{
 char digit = '0';
 while ( digit <= '9' ) {
    my_putchar(digit);
    digit++;
  }
 return(0);
}
