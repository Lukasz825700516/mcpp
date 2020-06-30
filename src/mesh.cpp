#include "mesh.hpp"
#include <glad/glad.h>

mc::Mesh::Mesh() {
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &verticesVbo);
    glGenBuffers(1, &indicesVbo);
}

mc::Mesh::~Mesh() {
    glDeleteVertexArrays(1, &vao);
}

void mc::Mesh::begin() {
    glBindVertexArray(vao);
}

void mc::Mesh::end() {
    update();

    glBindVertexArray(0);

    vertices.clear();
    indices.clear();
    vertices.shrink_to_fit();
    indices.shrink_to_fit();
}

void mc::Mesh::update() {
    glBindBuffer(GL_ARRAY_BUFFER, verticesVbo);
    glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), vertices.data(), GL_DYNAMIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), nullptr);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indicesVbo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(Indice), indices.data(), GL_DYNAMIC_DRAW);
}
