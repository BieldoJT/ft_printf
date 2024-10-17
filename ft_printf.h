/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-conc <gda-conc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:03:06 by gda-conc          #+#    #+#             */
/*   Updated: 2024/10/17 20:03:09 by gda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		print_str(char *str);
int		print_char(char c);
int		print_nbr(int n);
int		print_ptr(void *ptr);
int		print_unsigned(unsigned int n);
int		print_hexa(unsigned int c, char caps);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
void	*ft_calloc(size_t nelem, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isalpha(int c);
void	ft_putnbr_fd(int n, int fd);
int		ft_printf(const char *str, ...);
#endif
