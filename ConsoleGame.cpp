// ConsoleGame.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "GamePlayerObject.h"
#include "Level.h"
#include "SDL.h"
#include "GameRender.h"


int main(int argc, char* args[])
{

	std::shared_ptr<KeypressSubject> subj = std::make_shared<KeypressSubject>();
	KeypressVariable var;
	LevelPosition pos1{ 127, 127 };
	GameSprite sprite1{ "face_w2_2d.png", 0, 0 };
	std::shared_ptr<GamePlayerObject> player1 = std::make_shared<GamePlayerObject>(sprite1, pos1, subj, var);
	subj.get()->attach(player1);

	Level level1;
	level1 += *player1.get();
	GameRender g(level1, subj);
	g.startLoop();
    return 0;
}

