#define TRY_CATCH_IMPLEMENTATION
#include "try_catch.h"

int main(void)
{
        TRY
                THROW(int, 42);
        CATCH(float, f)
                printf("%g\n", f);
        CATCH(T)
                printf("%s\n", T);
        END_TRY
}
