#include <stdio.h>
#include <GLFW/glfw3.h>

int main(void) {
    glfwInit();

    GLFWwindow* window = glfwCreateWindow(800, 600, "todo", NULL, NULL);

    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();



    return 0;
}
