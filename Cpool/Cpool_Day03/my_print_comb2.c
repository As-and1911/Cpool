/* 
**Epitech_Projects , 2025
**My_print_comb2.c
**File description
**A function that displays, in ascending order, all the combinations of two two digit numbers
*/
void my_putchar(char c);
int my_print_comb2 (void)
{
int a = 0 ;
int b ;
while(a <= 98){
      b = a + 1;
      while(b <= 99){
            my_putchar('0' + a / 10);
            my_putchar('0' + a % 10);
            my_putchar(' ');
            my_putchar('0' + b / 10);
            my_putchar('0' + b % 10);
            if(a != 98 || b != 99){
               my_putchar(',');
               my_putchar(' '); 
            }
            b++;
       }
       a++;
 }
return(0);
}    
