#ifndef MCPP_MESH_HPP
#define MCPP_MESH_HPP


#include <vector>
#include "vertex.hpp"
#include "indice.hpp"

namespace mc {

    class Mesh {
    public:
        constexpr static float DEFAULT_TEXTURE_COORDINATES[] = {
                0, 0,
                0, 1,
                1, 1,
                1, 0
        };

        Mesh();

        ~Mesh();

        void begin();

        void end();

        void update();
    private:
        std::vector<Vertex> vertices;
        std::vector<Indice> indices;

        uint vao;
        uint verticesVbo;
        uint indicesVbo;
    };

}


#endif
