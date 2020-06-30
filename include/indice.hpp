#ifndef MCPP_INDICE_HPP
#define MCPP_INDICE_HPP

#include <glm.hpp>

class Indice {
public:
    Indice(glm::vec3 start, glm::vec3 end);
    ~Indice();

    glm::vec3 start;
    glm::vec3 end;
};


#endif
