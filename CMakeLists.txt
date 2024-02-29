cmake_minimum_required(VERSION 3.25)
project(Cipher_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(Cipher_System main.cpp CipherManagement.cpp CipherManagement.h Caesar.cpp Caesar.h PlayFair.cpp PlayFair.h)
