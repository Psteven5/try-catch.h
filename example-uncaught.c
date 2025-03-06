#define TRY_CATCH_IMPLEMENTATION
#include "try-catch.h"

int main(void)
{
        THROW(int, 42);
        return EXIT_SUCCESS;
}
