#include <Engine/ResourceManager/ResourceManager.h>
#include <iostream>




ResourceManager::ResourceManager() :
allID(0)
{

}

GameObject* ResourceManager::CreateGameObject()
{
    if(allID > MAX_ID)
    {
        std::cout << "Error trying to create more than " << MAX_ID << " objects\n";
    }

    allID++;
    std::cout << "ID:" <<allID << "\n";

    
    allGameObjects[allID] = GameObject();
    return &allGameObjects[allID];
}
