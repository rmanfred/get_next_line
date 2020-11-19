# Get Next Line
This project will allow you to learn a highly interesting new concept in C programming: static variables

## Instructions
Calling your function get_next_line in a loop will then allow you to read the text
available on a file descriptor one line at a time until the EOF.

- Make sure that your function behaves well when it reads from a file and when it
reads from the standard input.
- The program must compile with the flag -D BUFFER_SIZE=xx. which will be used
as the buffer size for the read calls in your get_next_line. This value will be
modified by your evaluators and by moulinette.
- Compilation should be done this way : gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32
get_next_line.c get_next_line_utils.c
- Your read must use the BUFFER_SIZE defined during compilation to read from
a file or from stdin.

## Bonus part
- To succeed get_next_line with a single static variable.
- To be able to manage multiple file descriptor with your get_next_line. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.
