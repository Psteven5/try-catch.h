#define TRY_CATCH_IMPLEMENTATION
#include "try-catch.h"

void foo(void)
{
        TRY
                THROW(int, 42);
        CATCH(float, f)
                printf("%g\n", f);
        END_TRY
}

int main(void)
{
        TRY
                foo();
        CATCH(int, i)
                printf("%d\n", i);
        END_TRY
        return EXIT_SUCCESS;
}
