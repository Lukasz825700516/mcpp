#ifndef MCPP_WORLD_HPP
#define MCPP_WORLD_HPP

#include <vector>
#include "chunk.hpp"

namespace mc {

    class World {
    public:
        World();
        ~World();

    private:
        std::vector<Chunk> chunks;
    };

}


#endif
