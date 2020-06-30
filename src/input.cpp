#include "input.hpp"

mc::InputManager::InputManager(Window *window) {
    glfwSetKeyCallback(window->window, [](GLFWwindow *window, int key, int scanCode, int action, int mods) {

    });
}

mc::InputManager::~InputManager() {

}