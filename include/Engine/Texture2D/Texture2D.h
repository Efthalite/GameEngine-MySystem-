#pragma once


#include <string>   


class Texture
{
private:
    std::string filePath;
    unsigned int textureID;

public:

    Texture(std::string filePath);

    void Bind();
    void Unbind();


};

