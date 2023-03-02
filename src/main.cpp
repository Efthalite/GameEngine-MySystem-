#include <iostream>
#include <string>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <Engine/Window/Window.h>



int main()
{
    Window::Get().Run();

    return 0;
}