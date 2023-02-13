/*
** EPITECH PROJECT, 2023
** navy
** File description:
** check_pos
*/

#include "navy.h"

bool good_coords(int size, int pos1, int pos2)
{
    int diff = pos1 - pos2;
    int diff2 = pos2 - pos1;

    diff = diff2 > diff ? diff2 : diff;

    if (size == diff + 1 || diff == 0)
        return (true);
    return (false);
}

bool check_pos(char *position)
{
    if (good_coords(position[0] - 48, position[from_hor], position[to_hor]) &&
    good_coords(position[0] - 48, position[from_ver], position[to_ver]))
        return (true);
    return (false);
}
