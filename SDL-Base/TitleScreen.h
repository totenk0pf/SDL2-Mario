#pragma once

#ifndef _TITLE_SCREEN_H
#define _TITLE_SCREEN_H

#include <SDL.h>
#include "Commons.h"
#include "GameScreen.h"
#include <vector>

class Texture2D;
class GameManager;
class TextRenderer;
class AudioClip;

class TitleScreen : GameScreen {
public:
	TitleScreen(SDL_Renderer* renderer);
	~TitleScreen();
	void Render();
	void Update(float deltaTime, const Uint8* keyState);

private:
	AudioClip* mBgMusic;
	AudioClip* mSelectSnd;
	TextRenderer* UIText;
	Texture2D* titleSpr;
	Texture2D* selectSpr;

	bool SetUpLevel();
	int opt;
};

#endif // !_TITLE_SCREEN_H

