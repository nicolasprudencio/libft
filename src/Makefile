NAME = libft.a
CC = cc
RM = rm -f
SRCS = \
ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memset.c ft_strlen.c ft_memcpy.c \
ft_memmove.c ft_strdup.c ft_strlcpy.c  \
ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memcmp.c ft_memchr.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_putchar_fd.c \
 ft_putstr_fd.c ft_substr.c ft_strjoin.c \
 ft_strtrim.c ft_putendl_fd.c ft_putnbr_fd.c \
 ft_itoa.c ft_strmapi.c ft_striteri.c \
 ft_split.c
BONUS_SRC = \
ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back.c ft_lstdelone_bonus.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o);
FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJ)
	ar -rcs -o $(NAME) $^

%.o: %.c
	$(CC) $(FLAGS) -c $(SRCS) $(BONUS_SRC)

bonus: $(NAME) $(BONUS_OBJ)
	ar -rcs $(NAME) $(BONUS_OBJ)

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS) $(BONUS_SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJ)

clean:
	$(RM) $(OBJS) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all