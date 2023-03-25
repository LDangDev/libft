# libft
The Libft project is a programming project at 42 school that requires students to create their own library of standard C functions, including functions for memory management, string manipulation, and input/output operations.

##Getting Started
To get started with this project, simply clone this repository to your local machine:
```
git clone https://github.com/LDangDev/libft
```
Or you can download the repository as a ZIP file and extract it to your desired location.

###Usage
Once you have cloned the repository, you can build the library using the following command:
```
make
```
To use the library in your own projects, you will need to include the header file libft.h in your source files and link against the libft.a library file. For example:
```
#include "libft.h"

int main()
{
    char *str = "Hello, world!";
    ft_putstr(str);
    return 0;
}
```
#Contributing
This project is intended for educational purposes and is not actively maintained. However, if you would like to contribute improvements or bug fixes, feel free to submit a pull request.

#License
