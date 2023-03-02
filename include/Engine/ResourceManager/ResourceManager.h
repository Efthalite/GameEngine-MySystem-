#pragma once


#include <Engine/GameObject/GameObject.h>


constexpr unsigned int MAX_ID = 10000;

class ResourceManager
{
private:
    unsigned int allID;

    GameObject* allGameObjects = new GameObject[MAX_ID];

public:
    ResourceManager();

    GameObject* CreateGameObject();



};


