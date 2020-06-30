#ifndef MCPP_CHUNKMESH_HPP
#define MCPP_CHUNKMESH_HPP


namespace mc {
	class Chunk;

    class ChunkMesh {
    public:
        ChunkMesh(Chunk *chunk);

        ~ChunkMesh();

        void update();
    };

}

#endif
