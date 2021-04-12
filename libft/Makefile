SRCS= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c  ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_isdigit.c ft_memcmp.c ft_memcmp.c ft_split.c ft_strjoin.c
SRCB= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
CC=gcc
CFLAGS= -Wall -Wextra -Werror -I.
NAME= libft.a
OBJ= $(SRCS:.c=.o)

.PHONY: bonus clean fclean re 

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< 

bonus: $(OBJ) $(SRCB:.c=.o)
	ar rcs $(NAME) $^
clean:
	rm -f $(OBJ) $(SRCB:.c=.o)
fclean: clean
	rm -f $(NAME)
re: fclean all
