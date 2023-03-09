/*****************************************************************************/
/*  Автор         		: Дракончик				                             */
/*  Приставка     		: Sony PlayStation 2					             */
/*  ОС			  		: OSDSYS											 */
/*  Язык	      		: GNU C                                              */
/*                                                                           */
/*  Содержимое файла	: Стадия игровой детельности                         */
/*  Атрибут файла		: SOURCE                                             */
/*  Имя файла     		: gameState.c	                                     */
/*                                                                           */
/*****************************************************************************/

#include "include/gameState.h"
#include "include/menuState.h"
#include "include/overState.h"
#include "include/introState.h"
#include "include/pad.h"
#include "include/musicManager.h"

extern StateMachine GameMachineState;

/****** User External Files ********/
#include "extern/gameState.ext"

/****** User Table Files ***********/


/****** User Define Files ***********/
#include "define/gameState.def"

// Graphics Synthesizer Texture structs
GSTEXTURE BackgroundImage;


BGM BackgroundMusic;


void GameStart(GSGLOBAL* gsGlobal)
{
	
}

void GameUpdate(GSGLOBAL* gsGlobal)
{

	if(PlaystationGamePad.UP_KEY_TAP)
	{

	}
	
	if(PlaystationGamePad.DOWN_KEY_TAP)
	{

	}
	
	if(PlaystationGamePad.LEFT_KEY_TAP)
	{

	}	
	
	if(PlaystationGamePad.RIGHT_KEY_TAP)
	{

	}
	
	if(PlaystationGamePad.BUTTON_X_KEY_TAP)
	{

	}
	
	if(PlaystationGamePad.BUTTON_O_KEY_TAP)
	{

	}
	
}

void GameDraw(GSGLOBAL* gsGlobal, u64 colour)
{

	gsKit_prim_sprite_texture(gsGlobal, &BackgroundImage,0,  // X1
										0,  // Y1
										0,  // U1
										0.0f,  // V1
										BackgroundImage.Width  * 2, // X2
										BackgroundImage.Height * 2, // Y2
										BackgroundImage.Width  * 2, // U2
										BackgroundImage.Height * 2, // V2
										2,
										colour);	
}

void GameEnd(GSGLOBAL* gsGlobal)
{

}

StateManager GameState =
{
	GameStart,
	GameUpdate,
	GameDraw,
	GameEnd
};
