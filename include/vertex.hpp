#ifndef MCPP_VERTEX_HPP
#define MCPP_VERTEX_HPP

#include <glm/vec3.hpp>

namespace mc {

    class Vertex {
    public:
        Vertex(glm::vec3 position);

        ~Vertex();

        glm::vec3 position;
    };

}


#endif
