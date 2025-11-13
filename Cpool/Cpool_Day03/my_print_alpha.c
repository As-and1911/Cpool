/*
**EPITECH_PROJECT ,  Tek1
**My_print_alpha
**File description :
** A function that displays the lowercase alphabet, beginning with a
*/
 void my_putchar (char c) ;
 
int my_print_alpha (void)
{
  char letter = 'a';
  while ( letter <= 'z' ) {
     my_putchar(letter);
     letter++;
  }
 return(0);
}
