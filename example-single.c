#define TRY_CATCH_IMPLEMENTATION
#include "try-catch.h"

int main(void)
{
        TRY
                THROW(int, 42);
        CATCH(int, i)
                printf("%d\n", i);
        END_TRY
        return EXIT_SUCCESS;
}
