#include <iostream>
#include <sched.h>
using namespace std;

struct Chip8State{
    // Chip-8 has 35 OPCODES which are only two bytes long
    unsigned short OPCODE; //byte is exactly 2 bytes long
    // Chip-8 had a 4k memory system, i.e., it had 4096 memory locations
    unsigned char memory[4096];
    // CHIP-8 has 16 8-bit data registers named V0 to VF
    unsigned char registers[16]; //Note: VF is a carry flag
    unsigned short I; //Index register
    unsigned short PC; //Program Counter

    //For graphics handling
    unsigned char gfx[64*32];

    //Timers used in Chip 8
    unsigned char delay_timer;
    unsigned char sound_timer; // Might not need it rn!

    //For stack
    unsigned short stack[16];
    unsigned short sp; //Stack Pointer
};

int main() {

    cout<<"In this small project, we will be building a Chip 8 Emulator\n";
    return 0;
}
