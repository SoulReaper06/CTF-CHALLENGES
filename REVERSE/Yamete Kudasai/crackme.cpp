#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <cstring>


bool is_printable( char c )
{
    return !( c & (1 << 7) );
}

void c(char *buf, ...)
{
	va_list args;
	va_start (args, buf);     /* Initialize the argument args. */

	char arg = va_arg(args, int);
	
	while( arg ) {
		sprintf(buf, "%s%c", buf, arg);
		arg = va_arg(args, int);
	}

	va_end (args);                  /* Clean up. */
}

int main(int argc, char** argv)
 {
     char* flagVariable[30];
     char flag[] = "";
    char str[512];
    c(str,'A', 'r', 'c', 'a', 'n', 'e', '{', 't', 'h', 'i', 's', '_', 'i', 's', '_', 'a', '_', 'f', 'a', 'k', 'e', '_', 'f', 'l', 'a', 'g', '}');
    char str2[512];
c(str2,'Q', 'X', 'J', 'j', 'Y', 'W', '5', 'l', 'e', '1', 'I', 'z', 'V', 'j', 'N', 'S', 'N', 'T', 'F', 'O', 'R', '1', '8', 'x', 'U', '1', '9', 'I', 'N', 'F', 'J', 'E', 'f', 'Q', '=', '=');
if (argc != 2) {
        printf("Need exactly one argument.\n");
        return -1;
    }

char* correct = "Asm0d3us";
if (strncmp(argv[1], correct, strlen(correct))) {
        printf("No, %s is not correct.\n", argv[1]);
        printf("%s\n", str);
        return 1;
    } else {
        printf("Yes, %s is correct!\n", argv[1]);
        printf("%s\n", str2);
        return 0;
    }
}