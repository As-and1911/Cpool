/*EPITECH PROJECTS , 2025
**My_putstr.c
**File description :
**A function that displays one-by-one the characters of a string
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
void my_test()
{
  char const* p = "Je m'appelle As-and";
  my_putstr(p);
  return;
}
