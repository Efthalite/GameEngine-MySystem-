#include <Engine/GameObject/GameObject.h>
#include <GLFW/glfw3.h>

GameObject::GameObject()
{
    
}

void GameObject::Render()
{
    sprite2D.Render();
}