#pragma once
#include "GameScene.h"

class GameObject;
class Enemy;
class GO_Player;
class Collision;
class GO_Scramble;
class GO_ScrambleRotation;
class GO_Throw;
class GO_Timer;

class GS_Scramble :public GameScene
{
public:
	// GameScene ����Čp������܂���
	virtual void Initialize(void) override;

	virtual void Finalize(void) override;

	virtual void Update(void) override;

	virtual void Draw(void) override;

	//m_pGameObjects[]��GameObject���l�ߍ���
	void Register(GameObject* pGameObject);

private:
	static const int GAME_OBJECT_MAX = 100;

	//GameObject�̃|�C���^
	GameObject* m_pGameObjects[GAME_OBJECT_MAX];

	GO_Player* mp_player;
	GO_Scramble* mp_vortex;
	GO_ScrambleRotation* mp_VoRot;
	GO_Throw* mp_Throw;
	GO_Timer* mp_Timer;

	//GameScene
	int m_GameScene = GAMESCENE_SCRAMBLE;

	//nullptr����[��new�œ��I�����[��Register�o�^���܂Ƃ߂Ă��ꏊ�B
	//�R���X�g���N�^�Ŏg�p
	void Create();

	//���̃Q�[���t���[�����[�N�Ɋ��������ꍇ�g�p
	void SetGameObject();
};

