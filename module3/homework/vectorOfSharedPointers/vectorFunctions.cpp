#include "vectorFunctions.hpp"
#include <iostream>

std::vector<std::shared_ptr<int>> generate(int count){
    std::vector<std::shared_ptr<int>> vec{};
    vec.reserve(count);
    for(size_t i = 0; i < count; i++){
        vec.emplace_back(std::make_shared<int>(i));
    }
    return vec;
}

void print(const std::vector<std::shared_ptr<int>>& vec){
    for(const auto& ptr : vec){
        std::cout << *ptr << " ";
    }
}

void add10(const std::vector<std::shared_ptr<int>>& vec){
    for(const auto& ptr : vec){
        if(ptr){
            *ptr += 10;
        }
    }
}

void sub10 (int* const ptr){
    if(ptr){
        *ptr -= 10;
    }
}

void sub10 (const std::vector<std::shared_ptr<int>>& vec){
    for(const auto& ptr : vec){
        if (ptr) {
            sub10(ptr.get());
        }
    }
}
