/* EPITECH PROJECTS , 2025
** My_getnbr.c
**File description :
** A function that displays a number sent to the function as a  string
*/
#include <limits.h>
int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int number = 0;
    //Gestions du signe de l'entier à retourné ainsi que des espaces blancs entre les opérateurs
    while (str[i] == '-' || str[i] == '+' || str[i] == ' '){
        if (str[i] == '-'){
            sign *= -1;
            i++;
        }
        else if (str[i] == '+'){
            i++;
        }
        else if (str[i] == ' '){
            i++;
        }
    }
    while ((str[i] >= '0' && str[i] <= '9') || str[i] == ' '){
        if (str[i] == ' '){
            i++;
            continue;
        }
        if ((number > INT_MAX / 10) || (number == INT_MAX / 10 && str[i] - '0' > 7)){
            return 0;
        }
        number = (number * 10) + (str[i] - '0');
        i++;
    }
    number *= sign;  
    return number;
}
