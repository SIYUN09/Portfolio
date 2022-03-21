#pragma once
#include <GameEngine/GameEngine.h>

// ���� : �������� ������� ������ �����ϱ� �׳� ���͵�����̶� �������ϴ�.
//       �����е��� ���� �ڽ��� ������� ���ӿ� �´� �̸��� �̳༮���� �ٿ��ֽø� �˴ϴ�.
class StudyGame : public GameEngine
{
public:
	// constrcuter destructer
	StudyGame();
	~StudyGame();

	// delete Function
	StudyGame(const StudyGame& _Other) = delete;
	StudyGame(StudyGame&& _Other) noexcept = delete;
	StudyGame& operator=(const StudyGame& _Other) = delete;
	StudyGame& operator=(StudyGame&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};

