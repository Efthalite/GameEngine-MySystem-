#include <Engine/Window/Window.h>
#include <iostream>

#include <glad/glad.h>
#include <Engine/GameObject/GameObject.h>


Window::Window() :
width(500), height(500),
title("AlexEngine")
{

}

Window::~Window()
{

}

void Window::Run()
{
    std::cout << "run";
    Init();
    Loop();
    
}


GameObject* go;

void Window::Init()
{
    if(!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW\n";
        return ;
    }

    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
    //glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    //glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_ANY_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);

   

    if(!window)
    {
        std::cerr << "Failed to initialize a window\n" << height ;
        glfwTerminate();
        return ;
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);


    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
    }

    glViewport(0, 0, width, height);

    glfwShowWindow(window);
}

void Window::Loop()
{

   
    float timeStarted;
    float timeEnded;
    float deltaTime = 0;
    float FPS = 0;


    go = m_Manager.CreateGameObject();

    while (!glfwWindowShouldClose(window))
    {
        ProccessInput();
        glfwPollEvents();

       

        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(1, 1, 0, 1.0f);

        
       
       

        
        glfwSetWindowTitle(this->window, ("FPS: " + std::to_string(FPS) + "\t" + this->title).c_str()); 

        glfwSwapBuffers(this->window);

        timeEnded = glfwGetTime();

        deltaTime = timeEnded - timeStarted;
        timeStarted = timeEnded;
        
        FPS = 1 / deltaTime;
    }
}



void Window::ProccessInput()
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_TRUE)
    {
        glfwSetWindowShouldClose(window, 1);
    }
}






