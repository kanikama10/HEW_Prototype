#pragma once
//---------------------------
//	[GameScene.h]
//	Yuta Yanagisawa 
//---------------------------

//�Q�[�����ł̃V�[���J�ڂ��Ǘ����܂��B


enum GAMESCENE{
    GAMESCENE_NONE,
    GAMESCENE_SCRAMBLE,       //�[��������V�[��
    GAMESCENE_BUNGEE_JUMP,  //�o���W�[�W�����v�̃V�[��
    GAMESCENE_MAX
};

class GameScene
{
public:
    virtual void Initialize(void) = 0;
    virtual void Finalize(void) = 0;
    virtual void Update(void) = 0;
    virtual void Draw(void) = 0;
};

