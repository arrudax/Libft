# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 05:19:48 by maanton2          #+#    #+#              #
#    Updated: 2024/11/10 05:51:06 by maanton2         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                   PATH                                       #
# **************************************************************************** #

SRCS_CONVERT		:= src/convert/
SRCS_CTYPE			:= src/ctype/
SRCS_FILES			:= src/files/
SRCS_LINKEDL		:= src/linkedl/
SRCS_MEMORY			:= src/memory/
SRCS_STRING			:= src/string/
INCS				:= includes/
BUILD_DIR			:= build/

#******************************************************************************#
#                               BASH COMMANDS                                  #
#******************************************************************************#

RM					:= rm -rf
MKDIR				:= mkdir -p

# **************************************************************************** #
#                                   FILES                                      #
# **************************************************************************** #

NAME				:= libft.a

SOURCE_FILES		+=$(addprefix $(SRCS_CONVERT), ft_atoi.c \
	ft_itoa.c \
	ft_tolower.c \
	ft_toupper.c)

SOURCE_FILES		+=$(addprefix $(SRCS_CTYPE), ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c)

SOURCE_FILES		+=$(addprefix $(SRCS_FILES), ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c)

SOURCE_FILES		+=$(addprefix $(SRCS_LINKEDL), ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c)

SOURCE_FILES		+=$(addprefix $(SRCS_MEMORY), ft_calloc.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c)

SOURCE_FILES		+=$(addprefix $(SRCS_STRING), ft_bzero.c \
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
	ft_substr.c)

OBJECT_FILES		:= $(SOURCE_FILES:%.c=$(BUILD_DIR)%.o)

#******************************************************************************#
#                               COMPILATION                                    #
#******************************************************************************#

CC                 := cc
CFLAGS             := -Wall -Werror -Wextra
CPPFLAGS           := $(addprefix -I, $(INCS))
AR                 := ar -rcs
COMP_OBJS          = $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
COMP_LIB           = $(AR) $(NAME) $(OBJECT_FILES)

#******************************************************************************#
#                                  FUNCTION                                    #
#******************************************************************************#

define create_dir
	$(MKDIR) $(dir $@)
endef

define comp_objs
	$(COMP_OBJS)
endef

define comp_lib
	@$(COMP_LIB)
endef

define clean
	$(RM) $(BUILD_DIR)
endef

define fclean
	$(RM) $(NAME)
endef

#******************************************************************************#
#                                   RULES                                      #
#******************************************************************************#

all: $(NAME)

$(BUILD_DIR)%.o: %.c
	$(call create_dir)
	$(call comp_objs)

$(NAME): $(OBJECT_FILES)
	$(call comp_lib)
	@echo "Compilação concluída: $(NAME)"

clean:
	$(call clean)

fclean: clean
	$(call fclean)

re: fclean all

.PHONY: all clean fclean re
