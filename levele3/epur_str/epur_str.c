#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int checker;
        int i = 0;
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if(checker == 1)
                write(1, " ", 1);
            checker = 0;
            write(1, &argv[1][i], 1);
            i++;
            while(argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                checker = 1;
                i++;
            }
        }
    }
    write(1, "\n", 1);
}
