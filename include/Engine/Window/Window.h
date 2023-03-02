#pragma once


#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <string>

#include <Engine/ResourceManager/ResourceManager.h>



class Window
{
private:
    int width, height;
    std::string title;
    GLFWwindow* window;

    ResourceManager m_Manager;



protected:


    Window();
    ~Window();

    
public:
    static Window& Get()
    {
        static  Window w_Instance;
        return w_Instance;
    }

    void Run();
    void Init();
    void Loop();
    void ProccessInput();

    void ChangeScene(int newScene);



};

