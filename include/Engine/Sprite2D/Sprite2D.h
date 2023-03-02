#pragma once

#include <Engine/Shader/Shader.h>
#include <Engine/Texture2D/Texture2D.h>

class Sprite2D
{
private:
    Shader shader;
    float vertices[4 * 9] =
    {
         // Position                 // Color                    // UV Coordinates
         0.5f, -0.5f,  0.0f,        1.0f, 0.0f, 0.0f, 1.0f,     1, 0,
        -0.5f,  0.5f,  0.0f,        0.0f, 1.0f, 0.0f, 1.0f,     0, 1,
         0.5f,  0.5f,  0.0f,        0.0f, 0.0f, 1.0f, 1.0f,     1, 1,
        -0.5f, -0.5f,  0.0f,        1.0f, 1.0f, 0.0f, 1.0f,     0, 0
    };

    unsigned int elementArray[6] =
    {
        0, 1, 2,
        0, 1, 3
    };

public:
    Sprite2D();
    
    void Render();



};