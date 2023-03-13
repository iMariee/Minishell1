/*
** EPITECH PROJECT, 2022
** my_all_put_nbr
** File description:
** all put_nbr functions for my_printf
*/

#include <unistd.h>
#include "root.h"

void my_put_lnbr(long int lnb)
{
    long long int llnb = (long long int)lnb;
    if (llnb < 0) {
        my_putchar('-');
        llnb = llnb * (-1);
    }
    if (llnb > 9) {
        my_put_lnbr((long int)llnb / 10);
        my_putchar(llnb % 10 + '0');
    } else {
        my_putchar(llnb + '0');
    }
}
