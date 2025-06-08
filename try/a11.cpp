#include <iostream>
#include <vulkan/vulkan.h>  // 添加Vulkan头文件

int main()
{
    // 初始化应用信息结构体
    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Hello Vulkan";
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = "No Engine";
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_0;

    // 初始化实例创建信息
    VkInstanceCreateInfo createInfo{};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;

    // 创建Vulkan实例
    VkInstance instance;
    VkResult result = vkCreateInstance(&createInfo, nullptr, &instance);

    // 检查创建结果
    if (result != VK_SUCCESS) {
        std::cerr << "Failed to create Vulkan instance!" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Vulkan instance created successfully!" << std::endl;
    
    // 清理资源
    vkDestroyInstance(instance, nullptr);
    return 0;
}