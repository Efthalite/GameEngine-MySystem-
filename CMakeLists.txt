cmake_minimum_required(VERSION 3.20 FATAL_ERROR)


project(AlexEngine)


# check if build directory exists and if it is not create it
if(EXISTS "build")
    message("build directory exists")
else()
    message("build directory does not exist")
    file(MAKE_DIRECTORY "build")
endif()

file(GLOB_RECURSE CPP_FILES "src/*.cpp")
file(COPY "assets" DESTINATION ".")

message("all cpp files \t\n"  ${CPP_FILES})

add_executable(${PROJECT_NAME} ${CPP_FILES})


include_directories("include")

add_subdirectory(external/glm)
target_link_libraries(${PROJECT_NAME} PRIVATE glm)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)

add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} PRIVATE glad)

add_subdirectory(external/stb)
target_link_libraries(${PROJECT_NAME} PRIVATE stb)


set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
