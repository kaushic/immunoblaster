# 1 "main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "main.c"
# 1 "myLib.h" 1




typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
# 64 "myLib.h"
extern unsigned short *videoBuffer;
# 85 "myLib.h"
typedef struct {
 u16 tileimg[8192];
} charblock;


typedef struct {
 u16 tilemap[1024];
} screenblock;



void setPixel3(int col, int row, unsigned short color);
void drawRect3(int col, int row, int width, int height, volatile unsigned short color);
void fillScreen3(volatile unsigned short color);
void drawImage3(int col, int row, int width, int height, const unsigned short *image);
void drawFullscreenImage3(const unsigned short *image);


void setPixel4(int col, int row, unsigned char colorIndex);
void drawRect4(int col, int row, int width, int height, volatile unsigned char colorIndex);
void fillScreen4(volatile unsigned char colorIndex);
void drawImage4(int col, int row, int width, int height, const unsigned short *image);
void drawFullscreenImage4(const unsigned short *image);


void waitForVBlank();
void flipPage();





typedef struct {
    unsigned short attr0;
    unsigned short attr1;
    unsigned short attr2;
    unsigned short fill;
} OBJ_ATTR;



extern OBJ_ATTR shadowOAM[];
# 157 "myLib.h"
void hideSprites();






typedef struct {
    int screenRow;
    int screenCol;
    int worldRow;
    int worldCol;
    int rdel;
    int cdel;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
    int hide;
} ANISPRITE;
# 200 "myLib.h"
extern unsigned short oldButtons;
extern unsigned short buttons;
# 211 "myLib.h"
typedef volatile struct {
    volatile const void *src;
    volatile void *dst;
    volatile unsigned int cnt;
} DMA;


extern DMA *dma;
# 251 "myLib.h"
void DMANow(int channel, volatile const void *src, volatile void *dst, unsigned int cnt);
# 342 "myLib.h"
typedef struct{
    const unsigned char* data;
    int length;
    int frequency;
    int isPlaying;
    int loops;
    int duration;
    int priority;
    int vBlankCount;
} SOUND;




int collision(int colA, int rowA, int widthA, int heightA, int colB, int rowB, int widthB, int heightB);
# 2 "main.c" 2
# 1 "sky.h" 1
# 22 "sky.h"
extern const unsigned short skyTiles[1856];


extern const unsigned short skyMap[1024];


extern const unsigned short skyPal[256];
# 3 "main.c" 2
# 1 "city.h" 1
# 22 "city.h"
extern const unsigned short cityTiles[224];


extern const unsigned short cityMap[2048];


extern const unsigned short cityPal[256];
# 4 "main.c" 2
# 1 "startScreen.h" 1
# 22 "startScreen.h"
extern const unsigned short startScreenTiles[2192];


extern const unsigned short startScreenMap[1024];


extern const unsigned short startScreenPal[256];
# 5 "main.c" 2
# 1 "paused.h" 1
# 22 "paused.h"
extern const unsigned short pausedTiles[864];


extern const unsigned short pausedMap[1024];


extern const unsigned short pausedPal[256];
# 6 "main.c" 2
# 1 "instructions.h" 1
# 22 "instructions.h"
extern const unsigned short instructionsTiles[4400];


extern const unsigned short instructionsMap[1024];


extern const unsigned short instructionsPal[256];
# 7 "main.c" 2
# 1 "win.h" 1
# 22 "win.h"
extern const unsigned short winTiles[912];


extern const unsigned short winMap[1024];


extern const unsigned short winPal[256];
# 8 "main.c" 2
# 1 "lose.h" 1
# 22 "lose.h"
extern const unsigned short loseTiles[1088];


extern const unsigned short loseMap[1024];


extern const unsigned short losePal[256];
# 9 "main.c" 2
# 1 "game.h" 1
typedef struct {
    int row;
    int worldCol;
    int cdel;
    int rdel;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
    int pillTimer;
    int screenCol;
}DOCSPRITE;

typedef struct {
    int row;
    int worldCol;
    int cdel;
    int rdel;
    int width;
    int height;
    int hitsTaken;
    int active;
    int num;
    int screenCol;
}ENEMY;

typedef struct {
    int row;
    int worldCol;
    int cdel;
    int rdel;
    int width;
    int height;
    int active;
    int screenCol;
}PILL;

typedef struct {
    int row;
    int col;
    int worldCol;
    int worldRow;
    int cdel;
    int rdel;
    int width;
    int height;
    int active;
    int confettiType;
}CONFETTI;

typedef struct {
    int worldCol;
    int worldRow;
    int cdel;
    int rdel;
    int width;
    int height;
    int active;
    int powerupType;
    int screenCol;
    int screenRow;
}POWERUP;

typedef struct {
    int row;
    int col;
    int width;
    int height;
    int active;
}BOX;

typedef struct {
    int row;
    int col;
    int width;
    int height;
}BOXCOUNTER;

typedef struct {
    int row;
    int col;
    int width;
    int height;
    int active;
}DOOR;
# 102 "game.h"
extern int vOff;
extern int hOff;
extern int hOff2;
extern OBJ_ATTR shadowOAM[128];
extern int frameCounter;
extern PILL pills[5];
extern POWERUP powerups[5];
extern int bubbles;
extern int fast;
extern int slow;
extern int box;
extern int attack;
extern int activeEnemies;
extern int activePowerups;
extern int boxesCollected;
extern int pillSpeed;
extern int collided;
extern ENEMY enemies[10];
extern DOCSPRITE doctor;
extern int livesRemaining;
extern BOX boxes[5];
extern BOXCOUNTER boxbar;
extern CONFETTI confetti[3];
extern int frameCounter2;
extern int cheat;
extern int hitDoor;
extern DOOR door;


void initGame();
void updateGame();
void drawGame();
void updateBkgd();

void initDoctor();
void updateDoctor();
void drawDoctor();
void initDoctor2();
void updateDoctor2();
void drawDoctor2();

void initEnemy();
void spawnEnemy();
void updateEnemy(ENEMY *);
void drawEnemy();

void initPill();
void firePill();
void updatePill(PILL *);
void drawPill();

void initPowerup();
void spawnPowerup();
void updatePowerup(POWERUP *);
void drawPowerup();

void initBar();
void drawBar();
void initBox();
void updateBox();
void drawBox();

void initIntroWin();
void updateIntroWin();
void drawIntroWin();
void initWin();
void updateWin();
void drawWin();
void initConfetti();
void fireConfetti();
void updateConfetti(CONFETTI *);
void drawConfetti();
# 10 "main.c" 2
# 1 "sound.h" 1
SOUND soundA;
SOUND soundB;



void setupSounds();
void playSoundA(const signed char* sound, int length, int loops);
void playSoundB(const signed char* sound, int length, int loops);

void setupInterrupts();
void interruptHandler();

void pauseSound();
void unpauseSound();
void stopSound();
# 11 "main.c" 2
# 1 "menuSong.h" 1




extern const signed char menuSong[2628272];
# 12 "main.c" 2
# 1 "loseSong.h" 1




extern const signed char loseSong[64298];
# 13 "main.c" 2
# 1 "pauseSong.h" 1




extern const signed char pauseSong[177120];
# 14 "main.c" 2
# 1 "gameSong.h" 1




extern const signed char gameSong[1176230];
# 15 "main.c" 2
# 1 "winSong.h" 1




extern const signed char winSong[38896];
# 16 "main.c" 2
# 1 "winBkgd.h" 1
# 22 "winBkgd.h"
extern const unsigned short winBkgdTiles[3680];


extern const unsigned short winBkgdMap[1024];


extern const unsigned short winBkgdPal[256];
# 17 "main.c" 2

void initialize();
void initialize();


void goToStart();
void start();
void goToInstructions();
void instructions();
void goToGame();
void game();
void goToPause();
void pause();
void goToWin();
void win();
void goToWin2();
void win2();
void goToLose();
void lose();



enum {START, GAME, PAUSE, WIN, WIN2, LOSE, INSTRUCTIONS};
int state;


unsigned short buttons;
unsigned short oldButtons;


int hOff;
int hOff2;
int vOff;

SOUND soundA;
SOUND soundB;

int main() {
    initialize();
    while(1) {
        oldButtons = buttons;
        buttons = (*(volatile unsigned short *)0x04000130);

        switch(state) {

            case START:
                start();
                break;
            case INSTRUCTIONS:
                instructions();
                break;
            case GAME:
                game();
                break;
            case PAUSE:
                pause();
                break;
            case WIN:
                win();
                break;
            case WIN2:
                win2();
                break;
            case LOSE:
                lose();
                break;

        }
 }
}


void initialize() {
    (*(unsigned short *)0x4000000) = 0 | (1<<9) | (1<<8) | (1<<12);
    (*(volatile unsigned short*)0x400000A) = (0<<14) | ((0)<<2) | ((28)<<8) | (0<<7);
    (*(volatile unsigned short*)0x4000008) = (1<<14) | ((1)<<2) | ((30)<<8) | (0<<7);
    buttons = (*(volatile unsigned short *)0x04000130);
    setupSounds();
    setupInterrupts();
    goToStart();
}
void goToStart() {
    (*(volatile unsigned short *)0x04000010) = 0;
    (*(volatile unsigned short *)0x04000014) = 0;
    DMANow(3, startScreenTiles, &((charblock *)0x6000000)[0], 4384/2);
    DMANow(3, startScreenMap, &((screenblock *)0x6000000)[28], 2048/2);
    DMANow(3, startScreenTiles, &((charblock *)0x6000000)[1], 4384/2);
    DMANow(3, startScreenMap, &((screenblock *)0x6000000)[30], 2048/2);
    DMANow(3, startScreenPal, ((unsigned short *)0x5000000), 256);
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);

    playSoundA(menuSong, 2628272, 1);
    state = START;
}
void start() {
    if ((!(~(oldButtons)&((1<<3))) && (~buttons & ((1<<3))))){
        stopSound();

        playSoundA(gameSong, 1176230, 1);
        goToGame();
        initGame();
    }
    if ((!(~(oldButtons)&((1<<2))) && (~buttons & ((1<<2))))){
       pauseSound();
       goToInstructions();
    }
}
void goToInstructions() {
    (*(volatile unsigned short *)0x04000010) = 0;
    (*(volatile unsigned short *)0x04000014) = 0;
 DMANow(3, instructionsTiles, &((charblock *)0x6000000)[0], 8800/2);
    DMANow(3, instructionsMap, &((screenblock *)0x6000000)[28], 2048/2);
    DMANow(3, instructionsTiles, &((charblock *)0x6000000)[1], 8800/2);
    DMANow(3, instructionsMap, &((screenblock *)0x6000000)[30], 2048/2);
    DMANow(3, instructionsPal, ((unsigned short *)0x5000000), 256);
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    state = INSTRUCTIONS;
}
void instructions(){
    if((!(~(oldButtons)&((1<<2))) && (~buttons & ((1<<2))))){
        unpauseSound();
        goToStart();
    } else if ((!(~(oldButtons)&((1<<3))) && (~buttons & ((1<<3))))){
        playSoundA(gameSong, 1176230, 1);
        goToGame();
        initGame();
    }
}
void goToGame() {
    DMANow(3, skyPal, ((unsigned short *)0x5000000), 512/2);

    DMANow(3, skyTiles, &((charblock *)0x6000000)[0], 3712/2);
    DMANow(3, skyMap, &((screenblock *)0x6000000)[28], 2048/2);

    DMANow(3, cityTiles, &((charblock *)0x6000000)[1], 448/2);
    DMANow(3, cityMap, &((screenblock *)0x6000000)[30], 4096/2);


    waitForVBlank();
    DMANow(3, shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    hOff = 0;
    state = GAME;
}

void game() {
    updateGame();
    drawGame();
    waitForVBlank();
    DMANow(3,shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);

    if ((!(~(oldButtons)&((1<<3))) && (~buttons & ((1<<3))))){
        pauseSound();
        goToPause();
    } else if ((!(~(oldButtons)&((1<<1))) && (~buttons & ((1<<1))))){
  if (cheat == 0){
   cheat = 1;
  } else {
   cheat = 0;
  }
 } else if (boxesCollected == 5){



        goToWin();
        initWin();
    } else if (livesRemaining == 0){
        stopSound();

        playSoundA(loseSong, 64298, 0);
        goToLose();
    }
}

void goToPause(){
    (*(volatile unsigned short *)0x04000010) = 0;
    (*(volatile unsigned short *)0x04000014) = 0;
    DMANow(3, pausedTiles, &((charblock *)0x6000000)[0], 1728/2);
    DMANow(3, pausedMap, &((screenblock *)0x6000000)[28], 2048/2);
    DMANow(3, pausedTiles, &((charblock *)0x6000000)[1], 1728/2);
    DMANow(3, pausedMap, &((screenblock *)0x6000000)[30], 2048/2);
    DMANow(3, pausedPal, ((unsigned short *)0x5000000), 256);
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    state = PAUSE;
}
void pause(){
    waitForVBlank();

    DMANow(3,shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    if((!(~(oldButtons)&((1<<2))) && (~buttons & ((1<<2))))){
        pauseSound();
        goToStart();
    } else if ((!(~(oldButtons)&((1<<3))) && (~buttons & ((1<<3))))){
        unpauseSound();
        goToGame();
    }
}
void goToWin(){
    (*(volatile unsigned short *)0x04000010) = 0;
    (*(volatile unsigned short *)0x04000014) = 0;
    DMANow(3, winBkgdTiles, &((charblock *)0x6000000)[0], 7360/2);
    DMANow(3, winBkgdMap, &((screenblock *)0x6000000)[28], 2048/2);
    DMANow(3, winBkgdTiles, &((charblock *)0x6000000)[1], 7360/2);
    DMANow(3, winBkgdMap, &((screenblock *)0x6000000)[30], 2048/2);
    DMANow(3, winBkgdPal, ((unsigned short *)0x5000000), 256);
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    state = WIN;
}
void goToWin2(){
    (*(volatile unsigned short *)0x04000010) = 0;
    (*(volatile unsigned short *)0x04000014) = 0;
    DMANow(3, winTiles, &((charblock *)0x6000000)[0], 1824/2);
    DMANow(3, winMap, &((screenblock *)0x6000000)[28], 2048/2);
    DMANow(3, winTiles, &((charblock *)0x6000000)[1], 1824/2);
    DMANow(3, winMap, &((screenblock *)0x6000000)[30], 2048/2);
    DMANow(3, winPal, ((unsigned short *)0x5000000), 256);
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    state = WIN2;
}
void win(){
    updateIntroWin();
    drawIntroWin();
    waitForVBlank();
    DMANow(3,shadowOAM,((OBJ_ATTR*)(0x7000000)), 512);
    if(hitDoor == 1){
        stopSound();

        playSoundA(winSong, 38896, 0);
        goToWin2();
    }
}
void win2(){
    updateWin();
    drawWin();
    waitForVBlank();
    DMANow(3,shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    if((!(~(oldButtons)&((1<<3))) && (~buttons & ((1<<3))))){
        goToStart();
    }
}
void goToLose(){
    (*(volatile unsigned short *)0x04000010) = 0;
    (*(volatile unsigned short *)0x04000014) = 0;
    DMANow(3, loseTiles, &((charblock *)0x6000000)[0], 2176/2);
    DMANow(3, loseMap, &((screenblock *)0x6000000)[28], 2048/2);
    DMANow(3, loseTiles, &((charblock *)0x6000000)[1], 2176/2);
    DMANow(3, loseMap, &((screenblock *)0x6000000)[30], 2048/2);
    DMANow(3, losePal, ((unsigned short *)0x5000000), 256);
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, ((OBJ_ATTR*)(0x7000000)), 512);
    state = LOSE;
}
void lose(){
    if((!(~(oldButtons)&((1<<3))) && (~buttons & ((1<<3))))){
        goToStart();
    }
}
