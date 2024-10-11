NAME 				= libft.a


SOURCE_FILES 		= ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_islower.c \
	ft_toupper.c

SOURCE_DIR 			= .
INCS 				= .
CCPFLAGS			= -I $(INCS)

OBJECT_FILES 		= $(SOURCE_FILES:.c=.o)

CC 					= cc
CFLAGS				= -Wall -Werror -Wextra

all: $(NAME)


%.o:%.c
	$(CC) $(CFLAGS) -c $(CCPFLAGS) $< -o $@


$(NAME): $(OBJECT_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)
	@echo "Compilação concluída: $(NAME)"


clean:
	rm -f $(OBJECT_FILES)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re
