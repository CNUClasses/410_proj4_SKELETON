#pragma once
#include <mutex>
#include <iostream>

//used to make PRINT statements work properly
extern std::mutex printMutex;

//if following symbol defined couts are synchronized 
//otherwise they are not
#ifndef SYNCHRONIZED_PRINT
#define SYNCHRONIZED_PRINT
#endif

#ifdef SYNCHRONIZED_PRINT
#define PRINT1(txt) {printMutex.lock();std::cout<<txt<<std::endl;printMutex.unlock();};
#define PRINT2(txt,txt1) {printMutex.lock();std::cout<<txt<<txt1<<std::endl;printMutex.unlock();};
#define PRINT3(txt,txt1,txt2) {printMutex.lock();std::cout<<txt<<txt1<<txt2<<std::endl;printMutex.unlock();};
#define PRINT4(txt,txt1,txt2,txt3) {printMutex.lock();std::cout<<txt<<txt1<<txt2<<txt3<<std::endl;printMutex.unlock();};
#define PRINT5(txt,txt1,txt2,txt3,txt4) {printMutex.lock();std::cout<<txt<<txt1<<txt2<<txt3<<txt4<<std::endl;printMutex.unlock();};
#define PRINT6(txt,txt1,txt2,txt3,txt4,txt5) {printMutex.lock();std::cout<<txt<<txt1<<txt2<<txt3<<txt4<<txt5<<std::endl;printMutex.unlock();};
#define PRINT7(txt,txt1,txt2,txt3,txt4,txt5,txt6) {printMutex.lock();std::cout<<txt<<txt1<<txt2<<txt3<<txt4<<txt5<<txt6<<std::endl;printMutex.unlock();};
#else
#define PRINT1(txt) {std::cout<<txt<<std::endl;};
#define PRINT2(txt,txt1) {std::cout<<txt<<txt1<<std::endl;};
#define PRINT3(txt,txt1,txt2) {std::cout<<txt<<txt1<<txt2<<std::endl;};
#define PRINT4(txt,txt1,txt2,txt3) {std::cout<<txt<<txt1<<txt2<<txt3<<std::endl;};
#define PRINT5(txt,txt1,txt2,txt3,txt4) {std::cout<<txt<<txt1<<txt2<<txt3<<txt4<<std::endl;};
#define PRINT6(txt,txt1,txt2,txt3,txt4,txt5) {std::cout<<txt<<txt1<<txt2<<txt3<<txt4<<txt5<<std::endl;};
#define PRINT7(txt,txt1,txt2,txt3,txt4,txt5,txt6) {std::cout<<txt<<txt1<<txt2<<txt3<<txt4<<txt5<<txt6<<std::endl;};
#endif
