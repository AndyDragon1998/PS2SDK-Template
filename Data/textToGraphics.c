
#include "include/textToGraphics.h"



Font fontENG[128];
Font fontRUS[128];

// Graphics Synthesizer Texture structs
GSTEXTURE fontEnglish, fontRussian;

Font setUpFontStruct(int x, int y, int width, int height)
{
	Font fonty;
	fonty.x = x;
	fonty.y = y;
	fonty.width = width;
	fonty.height = height;
	
	return fonty;
}


void SetUpFont(int fontLanguage, GSGLOBAL* gsGlobal)
{

	// This part here cuts the font in small pieces 
	int shift = 0;
	for(int i = 48; i < 58; i++)
	{
		fontENG[i] = setUpFontStruct(shift*9, 0, 9, 13);
		
		shift++;
	}
	
	shift = 0;

	for(int i = 65; i < 75; i++)
	{
		fontENG[i] = setUpFontStruct(shift*9, 13, 9, 13);
		shift++;
	}
	
	shift = 0;
		    
	for(int i = 75; i < 85; i++)
	{
		fontENG[i] = setUpFontStruct(shift*9, 26, 9, 13);
		shift++;
	}
		    
	shift = 0;
		    
	for(int i = 85; i < 92; i++)
	{
		fontENG[i] = setUpFontStruct(shift*9, 39, 9, 13);;
		shift++;
	}
}



void DrawText(int xpos, int ypos, char* Text)
{
	for(int i = 0; i < strlen(Text); i++)
	{
		int ascii = Text[i];

	}
}

void DrawAnimatedText(int xpos, int ypos, char* Text, int type)
{
	
}

void textSelfDestruct()
{

}

