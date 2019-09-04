# LETS DO FDF

### 1) initialize t_state
### 2) write render function:
	1. zoom
	2. rotation
	3. shift
	4. projections (maybe)

### 3) handle buttons (with menu)
### 4) use mlx_loop

---

``` c
typedef struct		s_point
{
	double		x;
	double		y;
	double		z;
	int		color;
}			t_point;
```
``` c
typedef struct		s_image
{
}			t_image;
```
``` c
typedef struct		s_fdf
{
	void		*mlx;
	void		*win;
	t_image		*img;
}			t_fdf;
```
``` c
typedef struct		s_map
{
	t_point		**map;
	int			h;
	int			w;
}			t_map;
```
``` c
typedef struct		s_cam
{
	t_point		rot;
	t_point		zoom;
	t_point		shift;
	t_point		pin;
}			t_cam;
```
``` c
typedef struct		s_state
{
	t_fdf		fdf;
	t_map		map;
	t_cam		cam;
}			t_state;
```