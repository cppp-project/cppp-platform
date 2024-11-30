#include <cppp/cppp-platform.h>

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 1)
    {
        fprintf(stderr, "Usage: %s\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (__has_windows__)
    {
        printf("Running on Windows!\n");
    }
    else
    {
        printf("Running non-Windows!\n");
    }
    printf("Target architcture id: %d\n", __arch__);
    printf("Target arch name: %s\n", __arch_name__);
    printf("Pointer width: %d\n", __POINTER_WIDTH__);

    return EXIT_SUCCESS;
}
