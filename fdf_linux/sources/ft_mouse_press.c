#include <fdf.h>

int	ft_mouse_press(int keycode, t_inf *info)
{
	printf("mouse_press\n");
	if (keycode)
		return (ft_close(info));
	else
		return (printf("click\n"));
}
