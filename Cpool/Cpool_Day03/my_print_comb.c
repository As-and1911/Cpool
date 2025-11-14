/*
**EPITECH_PROJECTS , Tek1
**My_print_comb
**File description :
**A function that displays all numbers composed by three differents digits in ascending order 
*/
void my_putchar(char c );
int my_print_comb(void)
{
 char a = '0';
 char b = '1';
 char c = '2';
 while(a <= '7' && b <= '8' && c <= '9') {
      if (a != b &&  b != c && a != c) {
       my_putchar(a);
       my_putchar(b);
       my_putchar(c);
      }
      if( a != '7' || b != '8' || c != '9') {
         my_putchar(',');
         my_putchar(' ');
      }
      c++;
      if(c == '9' + 1) 
         c = b++ + 1;
      if(b == '8' + 1)
         b = a++ + 1;
 }
return(0);
}
