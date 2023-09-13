#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
//Loop Runner
int loop2 = 0;
//Red Slime Stats
int RSlime_hp = 50;
int RSlime_dp = 25;
//Blue Slime Stats
int BSlime_hp = 25;
int BSlime_dp = 10;
//Dire Wolf Stats
int DWolf_hp = 100;
int DWolf_dp = 25;
//Goblin Stats
int Goblin_hp = 30;
int Goblin_dp = 20;
//Death Functions
void RSlime_death(){
    if(RSlime_hp <= 0){
        cout << "\nYou Killed the Monster!!!\n\033[0;93m15g\033[0;37m was added to your pouch.";
        gold += 15;
        sleep_for(seconds(5));
        sleep_until(system_clock::now());
        loop2 += 1;
    }
    else{
        
    }
}
void BSlime_death(){
    if(BSlime_hp <= 0){
        cout << "\nYou Killed the Monster!!!\n\033[0;93m5g\033[0;37m was added to your pouch.";
        gold += 5;
        sleep_for(seconds(5));
        sleep_until(system_clock::now());
        loop2 += 1;
    }
    else{
        
    }
}
void DWolf_death(){
    if(DWolf_hp <= 0){
        cout << "\nYou Killed the Monster!!!\n\033[0;93m20g\033[0;37m was added to your pouch.";
        gold += 20;
        sleep_for(seconds(5));
        sleep_until(system_clock::now());
        loop2 += 1;
    }
    else{
        
    }
}
void Goblin_death(){
    if(Goblin_hp <= 0){
        cout << "\nYou Killed the Monster!!!\n\033[0;93m10g\033[0;37m was added to your pouch.";
        gold += 10;
        sleep_for(seconds(5));
        sleep_until(system_clock::now());
        loop2 += 1;
    }
    else{
        
    }
}