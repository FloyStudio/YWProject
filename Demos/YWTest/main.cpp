//
//  main.cpp
//  YW
//
//  Created by wangyanqing on 2018/10/17.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#define GLFW_INCLUDE_VULKAN

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "YWPhysics/YWParticle.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    YPhy::Particle partice;
    
    
    glfwInit();
    
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    
    GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);
    
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
    
    std::cout << extensionCount << " extensions supported" << std::endl;
    
    
    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
    
    glfwDestroyWindow(window);
    
    glfwTerminate();
    
    return 0;
}
