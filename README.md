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
git clone https://github.com/arrudax/libft.git && cd libft_arrudax
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
3. Set Up the Build Directory: Create a build directory:
```sh
mkdir build
```
4. Configure the Build with Meson: Run the Meson setup command:
```sh
meson setup build
```
5. Compile with Ninja: Use Ninja to compile:
```sh
ninja -C build
```
6. Install Criterion: Install the Criterion library:
```sh
ninja -C build install
```
7. Edit Your Shell Configuration: Open your .bashrc or .zshrc file and add the following lines:
```.bashrc | .zshrc
export PATH=$HOME/.local/bin:$PATH
export LD_LIBRARY_PATH=$HOME/.local/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$HOME/.local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH
```
8. Load the Environment Variables: Reload your shell configuration:
```sh
source ~/.bashrc  # or `source ~/.zshrc` if you're using zsh
```
9. Compile the Tests: Finally, compile the tests with the command:
```sh
make test
```
## Authors

- [@arrudax](https://www.github.com/arrudax)

