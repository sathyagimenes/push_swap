/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:49:49 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/30 21:01:57 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFFER_SIZE 32
# define TRUE 1
# define FALSE 0

typedef int	t_bool;

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include <stdarg.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(char c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_strcpy(char *dst, char *src, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_convert_to_base(unsigned long n, int base);
int		ft_printf(const char *parameter, ...);
int		type_upperx(unsigned long number);
int		type_x(unsigned long number);
int		type_d_i(int number);
int		type_s(char *s);
int		type_c(int c);
int		type_u(unsigned long number);
int		type_p(unsigned long number);
long	ft_atol(const char *nptr);

// =============================================================================
// Linked List
// =============================================================================

/**
 * @brief Basic structure of a linked list node.
 * @param content The data contained in the node.
 * @param next The address of the next node.
 * or NULL if the next node is the last one.
**/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief Allocates and returns a new node.
 * @param content to create the node with.
 * @return The new node.
**/
t_list	*ft_newnode(void *content);

/**
 * @brief Returns the last node.
 * @param list where to search.
 * @return The last node.
**/
t_list	*ft_lastnode(t_list *list);

/**
 * @brief Returns the node at the given position.
 * @param list where to search.
 * @param n position of required node.
 * @return The node at the given position.
**/
t_list	*ft_getnode(t_list *list, unsigned int n);


#endif