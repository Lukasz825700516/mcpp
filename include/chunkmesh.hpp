#ifndef MCPP_CHUNKMESH_HPP
#define MCPP_CHUNKMESH_HPP

#include "chunk.hpp"

namespace mc {

    class ChunkMesh {
    public:
        ChunkMesh(Chunk *chunk);

        ~ChunkMesh();

        void update();
    };

}

#endif
