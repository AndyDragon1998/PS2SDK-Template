#ifndef TEXTTOGRAPHICS
#define TEXTTOGRAPHICS

#include <unistd.h>
#include <malloc.h>

#include <gsKit.h>
#include <dmaKit.h>
#include <gsToolkit.h>
#include <iopcontrol.h> 
#include <sbv_patches.h>

typedef struct
{
	int x;
	int y;
	int width;
	int height;
}Font;

Font setUpFontStruct(int x, int y, int width, int height);

void SetUpFont(int fontLanguage, GSGLOBAL* gsGlobal);

void DrawText(int xpos, int ypos, char* Text);

void DrawAnimatedText(int xpos, int ypos, char* Text, int type);

void textSelfDestruct();

#endif
