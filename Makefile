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
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c 

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

OBJECT_FILES 	= $(SOURCE_FILES:.c=.o)

CC 			= cc
CFLAGS		= -Wall -Werror -Wextra

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $(CCPFLAGS) $< -o $@

$(NAME): $(OBJECT_FILES)
	ar rcs $(NAME) $(OBJECT_FILES)
	@echo "Compilação concluída: $(NAME)"

test: $(NOME)
	$(CC) -o $(NAME_EXEC_TEST) $(SOURCE_FILES_TEST) $(SOURCE_FILES) $(CCPFLAGS_TEST) -lcriterion && ./$(NAME_EXEC_TEST)

clean:
	rm -f $(OBJECT_FILES) $(NAME_EXEC_TEST)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
