NAME				= libft.a

NAME_EXEC_TEST		= run_test

SOURCE_FILES		= ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

SOURCE_FILES_BONUS		= ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c 

SOURCE_FILES_TEST	= tests/test_ft_isalpha.c \
	tests/test_ft_isascii.c \
	tests/test_ft_isdigit.c \
	tests/test_ft_isprint.c \
	tests/test_ft_strchr.c \
	tests/test_ft_strlcpy.c \
	tests/test_ft_strlen.c \
	tests/test_ft_strncmp.c \
	tests/test_ft_tolower.c \
	tests/test_ft_toupper.c \
	tests/custom_print.c

SOURCE_DIR		= .
INCS			= .
CCPFLAGS		= -I $(INCS)
CCPFLAGS_TEST	:= -I$$HOME/.local/include -L$$HOME/.local/lib/x86_64-linux-gnu

OBJECT_FILES 		= $(SOURCE_FILES:.c=.o)
OBJECT_FILES_BONUS 	= $(SOURCE_FILES_BONUS:.c=.o)
ALL_OBJECTS 		= $(OBJECT_FILES) $(OBJECT_FILES_BONUS)

CC 			= cc
CFLAGS		= -Wall -Werror -Wextra

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $(CCPFLAGS) $< -o $@

$(NAME): $(OBJECT_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)
	@echo "Compilação concluída: $(NAME)"

bonus: $(OBJECT_FILES) $(OBJECT_FILES_BONUS)
	ar rcs $(NAME) $(ALL_OBJECTS) 
	@echo "Compilação bônus concluída: $(NAME)"

test: $(NOME)
	$(CC) -o $(NAME_EXEC_TEST) $(SOURCE_FILES_TEST) $(SOURCE_FILES) $(CCPFLAGS_TEST) -lcriterion && ./$(NAME_EXEC_TEST)

clean:
	rm -f $(NAME_EXEC_TEST) $(ALL_OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean rea bonus test
