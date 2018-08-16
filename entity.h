#ifndef ENTITY_H
#define ENTITY_H

#include <queue>
#include "Vector.h"
#include "event.h"

enum CALCDIST
    {
    CALC,
    NONCALC,
    };

enum SHAPE
    {
    RECTANGLE,
    CIRCLE,
    };

class Entity
    {
    public:
        Entity();
        Entity(CALCDIST c, SHAPE s, Vector pos, Vector size);
        virtual ~Entity() {}
    private:
        const CALCDIST calcdist_;
        const SHAPE shape_;
        Vector pos_;
        Vector size_; //! diagonal for rectangle and radius for circle
        std::queue <Event> qevents_;
    };

#endif
