# get_next_line

*This project has been created as part of the 42 curriculum by hfiqar.*

## Description

get_next_line is a function that reads a line from a file descriptor, one line at a time. 
This project teaches file manipulation, static variables, and memory management in C. 
The function returns one line ending with a newline character each time it's called, 
making it possible to read an entire file line by line efficiently.

## Function Prototype
```c
char *get_next_line(int fd);
```

**Parameters:**
- `fd`: File descriptor to read from

**Return Value:**
- The line read (including `\n` if present)
- `NULL` if EOF is reached or an error occurs

## Usage
```c
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;

    fd = open("file.txt", O_RDONLY);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}
```

## Compilation
```bash
# Compile with your buffer size
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c

# Or use provided Makefile (if any)
make
```

## Features

- Reads from any file descriptor (files, stdin, network sockets)
- Works with different buffer sizes
- Handles multiple file descriptors simultaneously (bonus)
- No memory leaks
- Efficient memory management with static variables

## Technical Details

**Key Concepts:**
- Static variables for persistent data between function calls
- Dynamic memory allocation
- Buffer management
- Edge case handling (empty lines, no newline at EOF, large files)

**Files:**
- `get_next_line.c` - Main function implementation
- `get_next_line_utils.c` - Helper functions (strlen, strjoin, etc.)
- `get_next_line.h` - Header file

## Resources

- [File I/O in C](https://www.gnu.org/software/libc/manual/html_node/Low_002dLevel-I_002fO.html)
- man pages: `read`, `open`, `close`, `malloc`, `free`
- [Understanding static variables in C](https://www.geeksforgeeks.org/static-variables-in-c/)

**AI Usage:**
AI was used for understanding static variable behavior, debugging edge cases with different buffer sizes, and optimizing memory management strategies.

---

*Reading files, one line at a time.*
