NAME = libft.a
CC = cc
RM = rm -f
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_memcpy.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs -o $(NAME) $^

%.o: %.c	
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	
	