#include "entity.h"
#include "Vector.h"

int main()
    {
    Vector a = {1, 2};
    Entity e(NONCALC, CIRCLE, a, a);
    return 0;
    }
