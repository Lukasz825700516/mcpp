#ifndef MCPP_WINDOW_HPP
#define MCPP_WINDOW_HPP

#include <GLFW/glfw3.h>
#include <string>

namespace mc {

    class Window {
    public:
        Window(int width, int height, std::string title);
        ~Window();

        GLFWwindow *window;

        int width;
        int height;
        std::string title;

        void init();
        void update();

        bool shouldClose();
        void shouldClose(bool value);

    };

}


#endif
