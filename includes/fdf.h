#ifndef FDF_H
# define FDF_H
# include "../libft/includes/libft.h"
# include "../miniLibX/mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <limits.h>
# include <unistd.h>

# define BUFF_SIZE	4096

# define WIDTH		1280
# define HEIGHT		720

# define TEXT_COLOR	0xEAEAEA
# define BLUE		0x0000FF
# define RED		0xFF0000
# define GREEN		0x00FF00
# define ORANGE		0xF39C12
# define CIAN		0x117864
# define PURPLE		0x7D3C98
# define BLACK		0x000000

typedef struct		s_point
{
	double			x;
	double			y;
	double			z;
	int				color;
}					t_point;

typedef struct		s_image
{
}					t_image;

typedef struct		s_fdf
{
	void			*mlx;
	void			*win;
	t_image			*img;
}					t_fdf;

typedef struct		s_map
{
	t_point			**map;
	int				h;
	int				w;
}					t_map;

typedef struct		s_cam
{
	t_point			rot;
	t_point			zoom;
	t_point			shift;
	t_point			pin;
}					t_cam;

typedef struct		s_state
{
	t_fdf			fdf;
	t_map			map;
	t_cam			cam;
}					t_state;

/*
** <----------> add here your functions <---------->
*/

#endif