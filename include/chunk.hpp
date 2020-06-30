#ifndef MCPP_CHUNK_HPP
#define MCPP_CHUNK_HPP

#include "chunkmesh.hpp"

namespace mc {

    class Chunk {
    public:
        static const int CHUNK_SIZE = 16;

        Chunk(int x, int z);

        ~Chunk();

        ChunkMesh mesh;

        short getBlock(int x, int y, int z);

        void generate();
    private:
        short ***blocks;
    };

}


#endif
