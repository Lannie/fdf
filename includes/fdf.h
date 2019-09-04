#ifndef FDF_H
# define FDF_H
# include "../libft/includes/libft.h"
# include "../miniLibX/mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <limits.h>
# include <unistd.h>

# define BUFF_SIZE  4096

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

struct              s_pixel
{
    int             x;
    int             y;
    int             z;
    int             color;
}                   t_pixel;

struct              s_fdf
{
    void            *mlx;
    void            *win;
    void            *img;
}                   t_fdf;





#endif