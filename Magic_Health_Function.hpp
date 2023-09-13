#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
//Potion Variables
int health_potion = 20;
int magic_potion = 20;
//Potion Functions
void Health_Potion(){
    health += health_potion;
    if(health > 100){
        health = 100;
        int h2 = 100;
    }
}
void Magic_Potion(){
    magic += magic_potion;
    if(magic > 100){
        magic = 100;
    }
}