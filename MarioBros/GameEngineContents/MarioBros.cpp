#include "MrioBrosGame.h"
#include "PlayLevel.h"
#include "EndingLevel.h"
#include "TitleLevel.h"
#include <GameEngineBase/GameEngineWindow.h>

MarioBrosGame::MarioBrosGame()
{
}

MarioBrosGame::~MarioBrosGame()
{
}

void MarioBrosGame::GameInit()
{
	GameEngineWindow::GetInst().SetWindowScaleAndPosition({ 100, 100 }, { 1280, 720 });

	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
	ChangeLevel("Play");
}

void MarioBrosGame::GameLoop()
{

}
void MarioBrosGame::GameEnd()
{

}