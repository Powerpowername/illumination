// #include <GLAD/glad.h>
#pragma once
#include <GLFW/glfw3.h>
#include <string>
class winIni
{
public:
    GLFWwindow* winptr=nullptr;
    unsigned WIDTH=0;
    unsigned HIGHT=0;

private:
    winIni(int width, int hight,std::string winName);
    ~winIni();
    GLFWwindow* getWinPtr();
};

winIni::winIni(int width, int hight,std::string winName)
{
    //indicating the version of glfw,which is a fundmental window
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR ,3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR ,3);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    WIDTH =width;
    HIGHT =hight;
    winptr = glfwCreateWindow(WIDTH,HIGHT,winName.c_str(),NULL,NULL);


}

winIni::~winIni()
{
    glfwDestroyWindow(winptr);
}

inline GLFWwindow *winIni::getWinPtr()
{
    return winptr;
}

