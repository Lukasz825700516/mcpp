#include <iostream>
#include "window.hpp"

mc::Window::Window(int width, int height, std::string title) {
    this->width = width;
    this->height = height;
    this->title = title;
}

mc::Window::~Window() {

}

void mc::Window::init() {
    if (!glfwInit()) {
        throw "Can't initialize GLFW";
    }

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

    window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);

    if (!window) {
        throw "Can't initialize window";
    }

    const GLFWvidmode *videoMode = glfwGetVideoMode(glfwGetPrimaryMonitor());

    glfwSetWindowPos(window, (videoMode->width - width) / 2, (videoMode->height - height) / 2);

    glfwMakeContextCurrent(window);

    glfwShowWindow(window);
}

void mc::Window::update() {
    glfwSwapBuffers(window);
    glfwPollEvents();
}

bool mc::Window::shouldClose() {
    return glfwWindowShouldClose(window);
}

void mc::Window::shouldClose(bool value) {
    glfwSetWindowShouldClose(window, value);
}
