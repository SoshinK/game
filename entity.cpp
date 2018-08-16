#include "entity.h"
#include "Vector.h"


Entity::Entity():
    calcdist_(NONCALC),
    shape_(RECTANGLE)
    {
    Vector zero = {0, 0};
    Vector defsize = {1, 0};
    pos_ = zero;
    size_ = defsize;
    }


Entity::Entity(CALCDIST c, SHAPE s,Vector pos, Vector size):
    calcdist_(c),
    shape_(s),
    pos_(pos),
    size_(size)
    {}



