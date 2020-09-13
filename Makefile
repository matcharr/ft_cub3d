NAME = libft.a

SRC = libft/ft_abs.c\
	  libft/ft_atoi.c\
      libft/ft_bzero.c\
	  libft/ft_calloc.c\
	  libft/ft_concat.c\
	  libft/ft_ft.c\
      libft/ft_isalnum.c\
      libft/ft_isalpha.c\
      libft/ft_isascii.c\
      libft/ft_isdigit.c\
      libft/ft_isprint.c\
	  libft/ft_isspace.c\
      libft/ft_itoa.c\
	  libft/ft_memalloc.c\
      libft/ft_memccpy.c\
      libft/ft_memchr.c\
      libft/ft_memcmp.c\
      libft/ft_memcpy.c\
      libft/ft_memdel.c\
      libft/ft_memmove.c\
      libft/ft_memset.c\
      libft/ft_putchar.c\
      libft/ft_putchar_fd.c\
      libft/ft_putendl.c\
      libft/ft_putendl_fd.c\
      libft/ft_putnbr.c\
      libft/ft_putnbr_fd.c\
      libft/ft_putstr.c\
      libft/ft_putstr_fd.c\
	  libft/ft_split.c\
	  libft/ft_sqrt.c\
	  libft/ft_strcapitalize.c\
      libft/ft_strcat.c\
      libft/ft_strchr.c\
      libft/ft_strclr.c\
      libft/ft_strcmp.c\
      libft/ft_strcpy.c\
      libft/ft_strdel.c\
      libft/ft_strdup.c\
      libft/ft_strequ.c\
      libft/ft_striter.c\
      libft/ft_striteri.c\
      libft/ft_strjoin.c\
      libft/ft_strjoin_free.c\
      libft/ft_strlcat.c\
	  libft/ft_strlcpy.c\
      libft/ft_strlen.c\
      libft/ft_strmap.c\
      libft/ft_strmapi.c\
      libft/ft_strncat.c\
      libft/ft_strncmp.c\
      libft/ft_strncpy.c\
      libft/ft_strnequ.c\
      libft/ft_strnew.c\
      libft/ft_strnstr.c\
      libft/ft_strrchr.c\
      libft/ft_strsplit.c\
      libft/ft_strstr.c\
      libft/ft_strtrim.c\
      libft/ft_substr.c\
      libft/ft_tolower.c\
      libft/ft_toupper.c\
	  libft/ft_lstpop.c\

BONUS =	libft/ft_lstnew_bonus.c\
      	libft/ft_lstdelone_bonus.c\
      	libft/ft_lstclear_bonus.c\
      	libft/ft_lstadd_front_bonus.c\
      	libft/ft_lstadd_back_bonus.c\
		libft/ft_lstlast_bonus.c\
	   	libft/ft_lstiter_bonus.c\
	  	libft/ft_lstsize_bonus.c\
      	libft/ft_lstmap_bonus.c\

OBJ = $(SRC:.c=.o)

OBJS = $(BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

all : $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJ) $(OBJS)

fclean : clean
	@rm -f $(NAME)

bonus :
	@gcc -c $(FLAGS) $(BONUS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

re : fclean all

.PHONY: all re clean fclean bonus
