#include <stdio.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
    for(int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
