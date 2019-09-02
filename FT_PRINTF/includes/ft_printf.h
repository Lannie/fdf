/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 15:58:38 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 20:17:21 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BUFF_SIZE 64
# define ZERO p->flags[0]
# define MINUS p->flags[1]
# define PLUS p->flags[2]
# define HASH p->flags[3]
# define SPACE p->flags[4]

#include <stdarg.h>
#include <stdio.h>
#include "../libft/includes/libft.h"

typedef struct	s_printf
{
	char		flags[5];
	int			width;
	int			prec;
	int			dot;
	char		modifier[20];
	int			count_mod;
	char		specifier;
	char		hex_hash[2];
}				t_printf;

		/********************************/
		/* 			input				*/
		/********************************/

int		ft_printf(const char *format, ...);
int     ft_arg_reader(const char *format, int i, va_list ap);
void	distributor(va_list ap, t_printf *p);

		/********************************/
		/* 			struct init			*/
		/********************************/

void    parse_struct(char *buf, t_printf *p);
void	struct_init(t_printf *p);
int     width_converter(t_printf *p, char *buf, int i);
int		prec_converter(t_printf *p, char *buf, int i);
int		modif_checker(t_printf *p, char *buf, int i);

		/********************************/
		/* 			sorter				*/
		/********************************/

int		sort_int(va_list ap, t_printf *p);
int		sort_uint(va_list ap, t_printf *p);
int	    sort_chr(va_list ap, t_printf *p);
int		sort_str(va_list ap, t_printf *p);
int		sort_ptr(va_list ap, t_printf *p);
int		sort_hex(va_list ap, t_printf *p);
int		sort_oct(va_list ap, t_printf *p);
int		sort_per(t_printf *p);
int		sort_bin(char c, va_list ap);

		/********************************/
		/* 			arg format			*/
		/********************************/

void    format_str(char **s, char *tmp, int len, t_printf *p);
void    format_int(char **s, char *tmp, int len, t_printf *p);
void    format_chr(char **s, t_printf *p);
void    format_ptr(char **s, char *tmp, int len, t_printf *p);
void    format_oct(char **s, char *tmp, int len, t_printf *p);
void    format_hex(char **s, char *tmp, int len, t_printf *p);
void	format_per(char **s, char tmp, t_printf *p);

		/********************************/
		/* 			form tools			*/
		/********************************/

void    form_prec_min(char **s, char *tmp, t_printf *p);
void	form_zero(char **s, int size, t_printf *p);
void	ft_arg_mal(char **s, int len, t_printf *p);
void    ft_push_arg(char **s, char *tmp, t_printf *p);
void    ft_push_arg2(char **s, char *tmp, int size, t_printf *p);
void    push_arg_hex_oct(char **s, char *tmp, int len, t_printf *p);
void    push_arg_int(char **s, char *tmp, int len, t_printf *p);
void	push_hash(char **s, int calibr, int len, t_printf *p);
int		calibr_o_x(int calibr, t_printf *p);
int     push_zero(char **s, int calibr, int len, t_printf *p);
int		cut_front_zero(char **s, t_printf *p);
void    cut_zero(char **s, int len, t_printf *p);
char	*whats_hash(t_printf *p);
int		calibration_of_prec(int len, t_printf *p);
int     ft_size_modif(int len, t_printf *p);
int		ft_size_mal(int len, t_printf *p);
int     fill_plus_or_space(char **s, int calibr, t_printf *p);
void    var_sign_modif(long long *arg, t_printf *p);
void    var_unsign_modif(unsigned long long *arg, t_printf *p);
void    push_per(char **s, char tmp, t_printf *p);

		/********************************/
		/* 			another tools		*/
		/********************************/

int     ft_nbrlen(unsigned long i);
void    write_arg(char *s, int len, t_printf *p);
void    write_arg_c(char *s, int len, t_printf *p);
void    write_arg_hex_oct(char *s, int size, t_printf *p);
void    write_arg_int(char *s, int len, t_printf *p);
void    ft_strdup_free(char **s, char *arg, t_printf *p);
void	ft_strsub_free(char **s, char *tmp, t_printf *p);
char	*ft_itoa_base_c(unsigned long long value, int base, char c);
void	int_len_modif(int *len, t_printf *p);


		/********************************/
		/* 			  floats			*/
		/********************************/

// ft_do_w_float.c

char	*ft_print_inf_nan(double f, t_print *p);
char	*ft_join_one(char *s);
char	*ft_ronding(char *s, int pres);
char	*ft_conv_flt2(char *s, double f, t_print *p, unsigned int tmp);
char	*ft_conv_float(double f, t_print *p, int i);

// ft_do_w_ldouble.c

char	*ft_printl_inf_nan(long double f, t_print *p);
char	*ft_cld2(char *s, long double f, t_print *p, unsigned int tmp);
char	*ft_conv_ldouble(long double f, t_print *p, int i);

// ft_parse_float.c

void	ft_create_struct(t_printf *p);
char	*ft_str_write_push(char *dest, char *src, int push);
void	ft_pars_width_float2(char **s, t_printf *p, char **str);
char	*ft_pars_width_float(char **s, t_printf *p);
void	ft_space_zero_float(char **s, t_printf *p);

// ft_parse_float2.c

int		ft_intlen(int nb);
int		ft_float2(int h, char *spez, va_list ap, t_printf *p);
void	ft_move_i_whide(t_printf *p, int *i, char *mas);
void	ft_move_i_pres(t_printf *p, int *i, char *mas);
int		ft_float(char *mas, size_t h, char *spez, va_list ap);


#endif