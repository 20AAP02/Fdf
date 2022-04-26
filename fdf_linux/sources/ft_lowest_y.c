#include <fdf.h>

int ft_lowest_y(t_map *map_inf, int comp)
{
    int     y;
    int     x;
    int     z;
    int     y1;
    int     y2;

    y = 0;
    y2 = 0;
    while (y < map_inf->height)
    {
        x = 0;
        while (x < map_inf->width)
        {
            z = map_inf->map[y][x].altitude;
            y1 = iso(x, y, z, 1) + comp;
            if ((y == 0 && x == 0)|| y1 < y2)
                y2 = y1;
            x++;
        }
        y++;
    }
    return (y2);
}
