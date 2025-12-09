/*
**Epitech Projects , 2025
**My_put_nbr
**File description:
** A function that displays the number given as a parameter 
*/
void my_putchar( char c);
int my_put_nbr( int n)
{
long nb = n;
long div = 1000000000;
int started = 0;
if( nb < 0 ){
  my_putchar('-');
  nb = -nb;
  }
if( nb == 0){
   my_putchar('0');
   return(0);
   }
while( div > 0 ){
     int digit = nb / div;
     if ( digit != 0 || started ){
         my_putchar('0' + digit);
         started = 1;
         }
     nb = nb % div;
     div = div / 10;
    }
 return(0);
}
