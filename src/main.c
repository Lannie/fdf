#include "../includes/fdf.h"

void			error(void)
{
	write(1, "error\n", 6);
	exit(0);
}

static int		reader(int fd, t_map *map)
{
	char		buf[BUFF_SIZE + 1];
	int			ret;

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		//smth
		buf[ret] = '\0';
	}
	return (0);
}

static t_map	*new_map(void)
{
	t_map		*map;

	map = ft_memalloc(sizeof(t_map));
	if (map == NULL)
		return (NULL);
	map->h = 0;
	map->w = 0;
	map->map = 0;
	return (map);
}

int				main(int ac, char *av[])
{
	t_state		*state;
	t_map		map;
	t_fdf		*fdf;
	int			fd;

	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	state = new_map();
	if (fd < 0 || reader(fd, state))
		return (0);
	if (!(valider(map, 0, 0)) || writer(map, 0, 0, 0))
		error;
	if ((fdf = init("FDF", map)) == NULL)
		error;
	state->map = map;
	render(fdf);
	mlx_hook(fdf->window, 2, 0, hook_keydown, fdf);
	// mlx_hook(fdf->window, 4, 0, mouse_scroll, fdf);
	mlx_loop(fdf->mlx);
	return (0);
}