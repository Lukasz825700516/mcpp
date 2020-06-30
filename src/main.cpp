#include <glad/glad.h>
#include <world.hpp>
#include <window.hpp>

int main() {
    mc::Window window(800, 600, "test");

    window.init();

    mc::World world;

    while (!window.shouldClose()) {
        glClearColor(0, 0, 1, 1);

        window.update();
    }

    return 0;
}
