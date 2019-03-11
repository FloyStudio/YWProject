//
//  main.cpp
//  YW
//
//  Created by wangyanqing on 2018/10/17.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <GLFW/glfw3.h>

#include "YWPhysics/YWParticle.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    YPhy::Particle partice;
    
    GLFWwindow* window;
    
    /* Initialize the library */
    if (!glfwInit())
        return -1;
    
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(480, 320, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    
    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Draw a triangle */
        glBegin(GL_TRIANGLES);
        
        glColor3f(1.0, 0.0, 0.0);    // Red
        glVertex3f(0.0, 1.0, 0.0);
        
        glColor3f(0.0, 1.0, 0.0);    // Green
        glVertex3f(-1.0, -1.0, 0.0);
        
        glColor3f(0.0, 0.0, 1.0);    // Blue
        glVertex3f(1.0, -1.0, 0.0);
        
        glEnd();
        
        /* Swap front and back buffers */
        glfwSwapBuffers(window);
        
        /* Poll for and process events */
        glfwPollEvents();
    }
    
    /*
    const GLubyte* name = glGetString(GL_VENDOR);//返回负责当前OpenGL实现厂商的名字
    const GLubyte* biaoshifu = glGetString(GL_RENDERER);//返回一个渲染器标识符，通常是个硬件平台
    const GLubyte* OpenGLVersion = glGetString(GL_VERSION);//返回当前OpenGL实现的版本号
    std::cout<<name<<std::endl;
    std::cout<<biaoshifu<<std::endl;
    std::cout<<OpenGLVersion<<std::endl;*/
    
    
    glfwTerminate();
    
    
    return 0;
}
