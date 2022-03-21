#pragma once
#include <GameEngine/GameEngine.h>

// ���� : �������� ������� ������ �����ϱ� �׳� ���͵�����̶� �������ϴ�.
//       �����е��� ���� �ڽ��� ������� ���ӿ� �´� �̸��� �̳༮���� �ٿ��ֽø� �˴ϴ�.
class MarioBrosGame : public GameEngine
{
public:
	// constrcuter destructer
	MarioBrosGame();
	~MarioBrosGame();

	// delete Function
	MarioBrosGame(const MarioBrosGame& _Other) = delete;
	MarioBrosGame(MarioBrosGame&& _Other) noexcept = delete;
	MarioBrosGame& operator=(const MarioBrosGame& _Other) = delete;
	MarioBrosGame& operator=(MarioBrosGame&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};
