#include <unistd.h>

int main(int argc, char*argv[])
{
    if (argc == 2)
    {
        int i = 0;
        int checker = 0;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if(checker)
                write(1, "   ", 3);
            write(1, &argv[1][i], 1);
            i++;
            checker = 0;
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                checker = 1;
                i++;
            }
            
        }
    }
    write(1, "\n", 1);
}