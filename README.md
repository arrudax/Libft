# Libft

## 🚀 Libft: My First C Library!
Libft is a curated collection of essential C functions that I developed as part of the 42 SP curriculum. Through this library, I have recreated standard library functions, enhancing my programming skills and establishing a robust foundation in string manipulation, memory management, and more. This journey has allowed me to explore the intricacies of these fundamental functions, paving the way for more advanced projects!

## Table of Contents
- [How to Execute](#how-to-execute)
- [Functions](#functions)
- [Tests](#tests)
- [Setting Up Criterion for Testing](#setting-up-criterion-for-testing)
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
| [`ft_itoa`](https://github.com/arrudax/Libft/blob/main/ft_itoa.c) | `<stdlib.h>` | Converts an integer to a **string** representation. |
| [`ft_putchar_fd`](https://github.com/arrudax/Libft/blob/main/ft_putchar_fd.c) | `<unistd.h>` | Outputs a character to the specified file descriptor. |
| [`ft_putstr_fd`](https://github.com/arrudax/Libft/blob/main/ft_putstr_fd.c) | `<unistd.h>` | Outputs a string to the specified file descriptor. |
| [`ft_putendl_fd`](https://github.com/arrudax/Libft/blob/main/ft_putendl_fd.c) | `<unistd.h>` | Outputs a string followed by a newline to the specified file descriptor. |
| [`ft_putnbr_fd`](https://github.com/arrudax/Libft/blob/main/ft_putnbr_fd.c) | `<unistd.h>` | Outputs an integer as a string to the specified file descriptor. |
| [`ft_strchr`](https://github.com/arrudax/Libft/blob/main/ft_strchr.c) | `<string.h>` | Searches for the first **occurrence** of a character in a string. |
| [`ft_striteri`](https://github.com/arrudax/Libft/blob/main/ft_striteri.c) | `<string.h>` | Applies a function to each character of a string, passing its index as a parameter. |
| [`ft_strjoin`](https://github.com/arrudax/Libft/blob/main/ft_strjoin.c) | `<string.h>` | Allocates and returns a new string which is the result of the concatenation of two strings. |
| [`ft_split`](https://github.com/arrudax/Libft/blob/main/ft_split.c) | `<stdlib.h>` | Splits a string into an array of strings based on a delimiter. |
| [`ft_strlcat`](https://github.com/arrudax/Libft/blob/main/ft_strlcat.c) | `<string.h>` | Concatenates two strings, ensuring the result is null-terminated and doesn't exceed a specified size. |
| [`ft_strlcpy`](https://github.com/arrudax/Libft/blob/main/ft_strlcpy.c) | `<string.h>` | Copies a string into another, ensuring the result is null-terminated and doesn't exceed a specified size. |
| [`ft_strmapi`](https://github.com/arrudax/Libft/blob/main/ft_strmapi.c) | `<string.h>` | Applies a function to each character of a string and creates a new string from the results. |
| [`ft_strnstr`](https://github.com/arrudax/Libft/blob/main/ft_strnstr.c) | `<string.h>` | Locates a substring in a string, searching up to n characters. |
| [`ft_strtrim`](https://github.com/arrudax/Libft/blob/main/ft_strtrim.c) | `<stdlib.h>` | Trims specified characters from the start and end of a string. |
| [`ft_substr`](https://github.com/arrudax/Libft/blob/main/ft_substr.c) | `<stdlib.h>` | Allocates and returns a substring from a given string. |
| [`ft_lstnew_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstnew_bonus.c) | `<stdlib.h>` | Allocates and returns a new element for a linked list. |
| [`ft_lstadd_front_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstadd_front_bonus.c) | `<stdlib.h>` | Adds an element to the beginning of a linked list. |
| [`ft_lstadd_back_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstadd_back_bonus.c) | `<stdlib.h>` | Adds an element to the end of a linked list. |
| [`ft_lstiter_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstiter_bonus.c) | `<stdlib.h>` | Iterates over a linked list and applies a function to each element. |
| [`ft_lstmap_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstmap_bonus.c) | `<stdlib.h>` | Iterates over a linked list, applying a function to each element and creating a new list with the results. |
| [`ft_lstlast_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstlast_bonus.c) | `<stdlib.h>` | Returns the last element of a linked list. |
| [`ft_lstsize_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstsize_bonus.c) | `<stdlib.h>` | Returns the number of elements in a linked list. |
| [`ft_lstclear_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstclear_bonus.c) | `<stdlib.h>` | Deletes and frees a linked list. |
| [`ft_lstdelone_bonus`](https://github.com/arrudax/Libft/blob/main/ft_lstdelone_bonus.c) | `<stdlib.h>` | Deletes a single element from a linked list and frees its memory. |


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
4. Configure the Build with Meson: Run the Meson setup command:
```sh
meson setup build --prefix=$HOME/.local --reconfigure
```
5. Compile with Ninja: Use Ninja to compile:
```sh
ninja -C build
```
6. Install Criterion: Install the Criterion library:
```sh
ninja -C build install
```
7. Load the Environment Variables: Reload your shell configuration:
```sh
source ~/.bashrc  # or `source ~/.zshrc` if you're using zsh
```
8. Compile the Tests: Finally, compile the tests with the command:
```sh
make test
```
## Authors

- [@arrudax](https://www.github.com/arrudax)
- [@mendes-jv](https://www.github.com/mendes-jv)
