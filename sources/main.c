#include "../includes/fdf.h"
#include "mlx.h"
#include "../includes/error_message.h"
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

int				main(int ac, char *av[])
{
	int			fd;
	t_map		*map;
	t_coord_val	*coords_stack;
	t_fdf		*fdf;

	errno = 0;
	coords_stack = NULL;
	if (ac == 2)
	{
		if (!((fd = open(av[1], O_RDONLY)) >= 0))
			terminate(ERR_MAP);
		map = map_init();
		if (read_map(fd, &coords_stack, map) == -1)
			terminate(ERR_MAP_READING);
		fdf = fdf_init(map);
		stack_to_arrays(&coords_stack, map);
		draw(fdf->map, fdf);
		setup_controls(fdf);
		mlx_loop(fdf->mlx);
	}
	terminate(ERR_USAGE);
	return (0);
}
