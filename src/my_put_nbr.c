/*
** EPITECH PROJECT, 2022
** my_all_put_nbr
** File description:
** all put_nbr functions for my_printf
*/

#include <unistd.h>
#include "root.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else {
        my_putchar(nb + '0');
    }
}
