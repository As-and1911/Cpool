
/*
**EPITECH_PROJECTS , Tek1
g**My_isneg
**File description :
** A function that displays N for negative integer and P for positive ones 
*/
void my_putchar(char c);
int my_isneg( int n )
{
  
  if ( n >= 0 )
     my_putchar('P');
  else 
     my_putchar('N');
 return(0);
}
