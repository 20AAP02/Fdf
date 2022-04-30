#include <fdf.h>

# define ESC 53 // -> click 5
# define KEY_Z 122 // -> mac(6) linux(122)
# define KEY_X 120 // -> mac(7) linux(122)
# define KEY_N 45 // click -
# define KEY_M 46 // click .
# define KEY_LEFT 106 // -> mac(123) linux(106)
# define KEY_RIGHT 108 // -> mac(124) linux(108)
# define KEY_DOWN 107 // -> mac(125) linux(107)
# define KEY_UP 105 // -> mac(126) linux(105)

int	ft_key_press(int keycode, t_inf *info)
{
	if (keycode == ESC)
	{
		ft_free_map(info->map_inf);
		free(info);
		exit(0);
	}
	if (keycode == KEY_Z || keycode == KEY_X)
	{
		if (keycode == KEY_Z)
			info->map_inf->scale += 1;
		else
			info->map_inf->scale -= 1;
		ft_draw_map(info->map_inf, info->mlx, info->win, info->img);
		return (0);
	}
	if (keycode == KEY_N || keycode == KEY_M)
	{
		if (keycode == KEY_N)
			info->map_inf->zoom += 1;
		else
			info->map_inf->zoom -= 1;
		ft_draw_map(info->map_inf, info->mlx, info->win, info->img);
		return (0);
	}
	if (keycode == KEY_LEFT || keycode == KEY_RIGHT || keycode == KEY_DOWN || keycode == KEY_UP)
	{
		if (keycode == KEY_LEFT)
			info->map_inf->move_x -= 10;
		else if (keycode == KEY_RIGHT)
			info->map_inf->move_x += 10;
		else if (keycode == KEY_DOWN)
			info->map_inf->move_y += 10;
		else if (keycode == KEY_UP)
			info->map_inf->move_y -= 10;
		ft_draw_map(info->map_inf, info->mlx, info->win, info->img);
		return (0);
	}
	return (0);
}