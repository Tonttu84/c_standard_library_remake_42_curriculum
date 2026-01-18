CC = cc
CFLAGS = -Wall -Wextra -Werror 
SOURCES = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_toupper.c\
	 	ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c  ft_strlen.c ft_strnstr.c	ft_substr.c\
	 	ft_calloc.c ft_isascii.c ft_itoa.c ft_memcpy.c  ft_putchar_fd.c  ft_putstr_fd.c ft_strdup.c  ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c

OBJECTS = $(SOURCES:%.c=%.o)

BONUS			=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
					ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
					ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUS_OBJS		= $(BONUS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJECTS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(BONUS_OBJS)

re:	fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
		ar -rc $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
