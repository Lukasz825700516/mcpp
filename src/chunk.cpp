#include "chunk.hpp"

mc::Chunk::Chunk(int x, int z) : mesh(this) {
    generate();

    mesh.update();
}

mc::Chunk::~Chunk() {

}

short mc::Chunk::getBlock(int x, int y, int z) {
    return blocks[x][y][z];
}

void mc::Chunk::generate() {
    for (int x = 0; x < CHUNK_SIZE; ++x) {
        for (int y = 0; y < 256; ++y) {
            for (int z = 0; z < CHUNK_SIZE; ++z) {
                blocks[x][y][z] = 1;
            }
        }
    }
}

