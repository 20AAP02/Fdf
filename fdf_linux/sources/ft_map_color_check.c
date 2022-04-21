#include <fdf.h>

int	ft_map_color_check(t_map *map_inf)
{
	int	x;
	int	y;

	y = 0;
	while (map_inf->map[y])
	{
		x = 0;
		while (x < map_inf->width)
		{
			if (map_inf->map[y][x].color != 0x0)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}
