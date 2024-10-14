# Libft

## 🚀 Libft: My First C Library!
Libft is a collection of essential C functions I developed as part of the 42 SP curriculum. Through this library, I recreated standard library functions, enhancing my programming skills and building a solid foundation in string manipulation, memory handling, and more. This journey allowed me to dive deep into the inner workings of these fundamental functions, setting the stage for more advanced projects!

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

| Function | Include   | Description                |
| :-------- | :------- | :------------------------- |
| `ft_isalpha` | `<ctype.h>` | Checks if a character is **alphabetic** (A-Z, a-z).|
| `ft_isdigit` | `<ctype.h>` | Checks if a character is a **decimal digit** (0-9). |
| `ft_isalnum` | `<ctype.h>` | Checks if a character is **alphanumeric** (A-Z, a-z, 0-9).|
| `ft_isascii` | `<ctype.h>` | Checks if a character belongs to the **ASCII** character set (0-127).|
| `ft_isprint` | `<ctype.h>` | Checks if a character is **printable**, including space.|
| `ft_toupper` | `<ctype.h>` | Converts a lowercase letter to **uppercase** (a to A)|
| `ft_tolower` | `<ctype.h>` | Converts an uppercase letter to **lowercase** (A to a)|
| `ft_memset` | `<string.h>` | Fills a block of memory with a **specified byte value.**|
| `ft_strlen` | `<string.h>` | Returns the **length of a string**, excluding the null terminator ('\0').|
| `ft_strchr` | `<string.h>` | Searches for the first **occurrence** of a character in a string.|
| `ft_strrchr` | `<string.h>` | Searches for the last **occurrence** of a character in a string.|
| `ft_strncmp` | `<string.h>` | Compares up to n characters of two **strings.**|

### Tests

In this section, I highlight the importance of testing my library functions to ensure they work correctly. By implementing tests, I can verify the functionality across various scenarios.

#### Setting Up Criterion for Testing

To use Criterion for testing your library functions, follow these steps:

##### Install Criterion

Since you may not have sudo privileges on your 42 partition, you can install Criterion locally by following these steps:

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
export C_INCLUDE_PATH="$HOME/.local/include:$C_INCLUDE_PATH"
export LIBRARY_PATH="$HOME/.local/lib/x86_64-linux-gnu:$LIBRARY_PATH"
export LD_LIBRARY_PATH="$HOME/.local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH"
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

