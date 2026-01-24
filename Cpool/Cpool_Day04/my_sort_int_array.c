/* EPITECH PROJECT, 2026
** My_sort_int_array.c
**File description :
**A function that sorts an integer array in ascending order 
*/
#include <stddef.h>
int my_get_min(int *array, int size)
{
    int i = 0;
    int idx_min = 0;
    if (array == NULL || size == 0) {
        return 0;
    }
    while (i < size) {
        if (array[i] < array[idx_min]) {
            idx_min = i;
        }
        i++;
    }
    return idx_min;
}
void my_swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int relative_idx;
    int absolute_idx;
    if (array == NULL || size == 0) {
        return;
    }
    while (i < size) {
        relative_idx = my_get_min(array + i, size - i);
        absolute_idx = i + relative_idx;
        if (array[i] != array[absolute_idx]) {
            my_swap_int(&array[i], &array[absolute_idx]);
        }
        i++;
    }
    return;
}
