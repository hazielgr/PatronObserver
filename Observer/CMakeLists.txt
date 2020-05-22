cmake_minimum_required(VERSION 3.15)
project(Observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer sources/main.cpp headers/Subject.h sources/Subject.cpp sources/ConcreteSubject.cpp headers/ConcreteSubject.h sources/ConcreteObserver.cpp headers/ConcreteObserver.h)