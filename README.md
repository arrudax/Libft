<h1 style="text-align: center;">
  <img src="https://cdn-icons-png.flaticon.com/512/2579/2579669.png" alt="Icon library" width="55" height="55" style="vertical-align: middle;"/> Libft
</h1>

[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language)) 
[![OS: Linux](https://img.shields.io/badge/OS-Linux-FCC624.svg)](https://en.wikipedia.org/wiki/Linux)

## 🚀 Libft: My First C Library!
Libft is a curated collection of essential C functions that I developed as part of the 42 SP curriculum. Through this library, I have recreated standard library functions, enhancing my programming skills and establishing a robust foundation in string manipulation, memory management, and more. This journey has allowed me to explore the intricacies of these fundamental functions, paving the way for more advanced projects!

## Table of Contents
- [How to Execute](#how-to-execute)
- [Functions](#functions)
- [Exemplos de Uso](#exemplos-de-uso)
- [Tests](#tests)
- [Referências](#referências)
- [Authors](#authors)

## How to Execute
1. Clone the repository and navigate to the project directory:
```sh
git clone https://github.com/arrudax/libft.git libft_arrudax && cd libft_arrudax
```
2. Compile the library:
```sh
make
```

### Functions
| Function | Library Header | Description                                      |
| :-------- | :------- | :----------------------------------------------- |
| [`ft_isalpha`](https://github.com/arrudax/Libft/blob/main/ft_isalpha.c) | `<ctype.h>` | Checks if a character is **alphabetic** (A-Z, a-z). |
| [`ft_isdigit`](https://github.com/arrudax/Libft/blob/main/ft_isdigit.c) | `<ctype.h>` | Checks if a character is a **decimal digit** (0-9). |
| [`ft_isalnum`](https://github.com/arrudax/Libft/blob/main/ft_isalnum.c) | `<ctype.h>` | Checks if a character is **alphanumeric** (A-Z, a-z, 0-9). |
| [`ft_isascii`](https://github.com/arrudax/Libft/blob/main/ft_isascii.c) | `<ctype.h>` | Checks if a character belongs to the **ASCII** character set (0-127). |
| [`ft_isprint`](https://github.com/arrudax/Libft/blob/main/ft_isprint.c) | `<ctype.h>` | Checks if a character is **printable**, including space. |
| [`ft_toupper`](https://github.com/arrudax/Libft/blob/main/ft_toupper.c) | `<ctype.h>` | Converts a lowercase letter to **uppercase** (a to A). |
| [`ft_tolower`](https://github.com/arrudax/Libft/blob/main/ft_tolower.c) | `<ctype.h>` | Converts an uppercase letter to **lowercase** (A to a). |
| [`ft_bzero`](https://github.com/arrudax/Libft/blob/main/ft_bzero.c) | `<string.h>` | Writes n zeroed bytes to the string s. |
| [`ft_memset`](https://github.com/arrudax/Libft/blob/main/ft_memset.c) | `<string.h>` | Fills a block of memory with a **specified byte value**. |
| [`ft_memchr`](https://github.com/arrudax/Libft/blob/main/ft_memchr.c) | `<string.h>` | Locates the first occurrence of a byte in a block of memory. |
| [`ft_memcmp`](https://github.com/arrudax/Libft/blob/main/ft_memcmp.c) | `<string.h>` | Compares two blocks of memory. |
| [`ft_memcpy`](https://github.com/arrudax/Libft/blob/main/ft_memcpy.c) | `<string.h>` | Copies n bytes from source to destination. |
| [`ft_memmove`](https://github.com/arrudax/Libft/blob/main/ft_memmove.c) | `<string.h>` | Moves n bytes from source to destination, handling overlapping memory areas. |
| [`ft_strlen`](https://github.com/arrudax/Libft/blob/main/ft_strlen.c) | `<string.h>` | Returns the **length of a string**, excluding the null terminator ('\0'). |
| [`ft_strchr`](https://github.com/arrudax/Libft/blob/main/ft_strchr.c) | `<string.h>` | Searches for the first **occurrence** of a character in a string. |
| [`ft_strrchr`](https://github.com/arrudax/Libft/blob/main/ft_strrchr.c) | `<string.h>` | Searches for the last **occurrence** of a character in a string. |
| [`ft_strncmp`](https://github.com/arrudax/Libft/blob/main/ft_strncmp.c) | `<string.h>` | Compares up to n characters of two **strings**. |
| [`ft_strnstr`](https://github.com/arrudax/Libft/blob/main/ft_strnstr.c) | `<string.h>` | Locates a substring in a string, searching up to n characters. |
| [`ft_atoi`](https://github.com/arrudax/Libft/blob/main/ft_atoi.c) | `<stdlib.h>` | Converts a string to an **integer**. |
| [`ft_calloc`](https://github.com/arrudax/Libft/blob/main/ft_calloc.c) | `<stdlib.h>` | Allocates memory for an array and initializes it to zero. |
| [`ft_strdup`](https://github.com/arrudax/Libft/blob/main/ft_strdup.c) | `<string.h>` | Duplicates a string, allocating sufficient memory for it. |
| [`ft_strlcat`](https://github.com/arrudax/Libft/blob/main/ft_strlcat.c) | `<string.h>` | Concatenates two strings, ensuring the result is null-terminated and doesn't exceed a specified size. |
| [`ft_strlcpy`](https://github.com/arrudax/Libft/blob/main/ft_strlcpy.c) | `<string.h>` | Copies a string into another, ensuring the result is null-terminated and doesn't exceed a specified size. |
| [`ft_putchar_fd`](https://github.com/arrudax/Libft/blob/main/ft_putchar_fd.c) | `libft.h` | Outputs a character to a given file descriptor. |
| [`ft_putstr_fd`](https://github.com/arrudax/Libft/blob/main/ft_putstr_fd.c) | `libft.h` | Outputs a string to a given file descriptor. |
| [`ft_putendl_fd`](https://github.com/arrudax/Libft/blob/main/ft_putendl_fd.c) | `libft.h` | Outputs a string followed by a newline to a given file descriptor. |
| [`ft_putnbr_fd`](https://github.com/arrudax/Libft/blob/main/ft_putnbr_fd.c) | `libft.h` | Outputs an integer to a given file descriptor. |
| [`ft_itoa`](https://github.com/arrudax/Libft/blob/main/ft_itoa.c) | `libft.h` | Converts an integer to a null-terminated string. |
| [`ft_strjoin`](https://github.com/arrudax/Libft/blob/main/ft_strjoin.c) | `libft.h` | Concatenates dois strings into uma nova. |
| [`ft_strmapi`](https://github.com/arrudax/Libft/blob/main/ft_strmapi.c) | `libft.h` | Applies uma função a cada caractere de uma string, criando uma nova string modificada. |
| [`ft_strtrim`](https://github.com/arrudax/Libft/blob/main/ft_strtrim.c) | `libft.h` | Trims especificados caracteres do início e do fim de uma string. |
| [`ft_substr`](https://github.com/arrudax/Libft/blob/main/ft_substr.c) | `libft.h` | Extracts uma substring de uma string dada. |
| [`ft_lstnew`](https://github.com/arrudax/Libft/blob/main/ft_lstnew.c) | `libft.h` | Creates uma nova node de lista com um dado conteúdo. |
| [`ft_lstadd_front`](https://github.com/arrudax/Libft/blob/main/ft_lstadd_front.c) | `libft.h` | Adds uma node ao início de uma lista ligada. |
| [`ft_lstsize`](https://github.com/arrudax/Libft/blob/main/ft_lstsize.c) | `libft.h` | Returns o número de nodes em uma lista ligada. |
| [`ft_lstlast`](https://github.com/arrudax/Libft/blob/main/ft_lstlast.c) | `libft.h` | Returns a última node em uma lista ligada. |
| [`ft_lstadd_back`](https://github.com/arrudax/Libft/blob/main/ft_lstadd_back.c) | `libft.h` | Adds uma node ao fim de uma lista ligada. |
| [`ft_lstdelone`](https://github.com/arrudax/Libft/blob/main/ft_lstdelone.c) | `libft.h` | Deletes uma única node de uma lista ligada. |
| [`ft_lstclear`](https://github.com/arrudax/Libft/blob/main/ft_lstclear.c) | `libft.h` | Deletes e frees todas as nodes em uma lista ligada. |
| [`ft_lstiter`](https://github.com/arrudax/Libft/blob/main/ft_lstiter.c) | `libft.h` | Iterates sobre cada node em uma lista ligada, aplicando uma função a cada uma. |
| [`ft_lstmap`](https://github.com/arrudax/Libft/blob/main/ft_lstmap.c) | `libft.h` | Maps uma função a cada node em uma lista ligada. |
| [`ft_striteri`](https://github.com/arrudax/Libft/blob/main/ft_striteri.c) | `libft.h` | Applies uma função a cada caractere de uma string, passando o índice do caractere para a função também. Isso é útil para modificar caracteres com base em suas posições. |
| [`ft_split`](https://github.com/arrudax/Libft/blob/main/ft_split.c) | `libft.h` | Splits uma string em um array de strings com base em um delimitador especificado. Cada substring é alocada dinamicamente, e o array final é null-terminated. |

### Tests

This section emphasizes the significance of testing my library functions to ensure their correctness. By implementing tests, I can validate functionality across a variety of scenarios.

#### Setting Up Criterion for Testing

To use Criterion for testing your library functions, follow these steps:

##### Install Criterion

Since you may not have `sudo` privileges on your 42 partition, you can install Criterion locally by following these steps:

1. **Install Required Libraries**:
```sh
   pip install meson ninja
```
2. Clone the Criterion Repository: Clone the Criterion repository to your home directory and navigate into the Criterion folder:
```sh
git clone https://github.com/Snaipe/Criterion.git && cd Criterion
```
3. Edit Your Shell Configuration: Open your .bashrc or .zshrc file and add the following lines:
```.bashrc | .zshrc
export PATH=$HOME/.local/bin:$PATH
export LD_LIBRARY_PATH=$HOME/.local/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$HOME/.local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH
```
4. Load the Environment Variables: Reload your shell configuration:
```sh
source ~/.bashrc  # or `source ~/.zshrc` if you're using zsh
```
5. Configure the Build with Meson: Run the Meson setup command:
```sh
meson setup build --prefix=$HOME/.local --reconfigure
```
6. Compile with Ninja: Use Ninja to compile:
```sh
ninja -C build
```
7. Install Criterion: Install the Criterion library:
```sh
ninja -C build install
```
8. Compile the Tests: Finally, compile the tests with the command:
```sh
make test
```

## Referências

- [Documentação do C](https://en.cppreference.com/w/c)
- [Critério - Framework de Testes](https://github.com/Snaipe/Criterion)

## Authors

- [@arrudax](https://www.github.com/arrudax)
- [@mendes-jv](https://www.github.com/mendes-jv)
