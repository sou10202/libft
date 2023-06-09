NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rc

SRCS = ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c \
		ft_strchr.c ft_strrchr.c ft_split.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strnstr.c ft_memcmp.c ft_memchr.c \
		ft_calloc.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c \
		ft_split.c ft_itoa.c ft_strtrim.c ft_split.c ft_striteri.c ft_strmapi.c 

SRCS_B = ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstiter.c ft_lstadd_back.c ft_lstdelone.c \
		 ft_lstclear.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
# ifdef bonusflag
# OBJS = $(SRCS:.c=.o) $(SRCS_B:.c=.o)

# endif

OBJS_B = $(SRCS_B:.c=.o)

INCS = libft.h

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -I $(INCS) -c $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

bonus: $(OBJS_B) $(OBJS)
	$(AR) $(NAME) $(OBJS_B) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re