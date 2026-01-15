/*EPITECH PROJECTS , 2025
** My_swap.c
**File description:
**A function that swaps the content of two integers , whose adresses are given as parameters
*/
void my_putchar(char c);
int my_swap(int*a, int*b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
