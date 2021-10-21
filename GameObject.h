#pragma once
//---------------------------
//	[GameObject.h]
//	Yuta Yanagisawa 
//---------------------------

//新しいゲームオブジェクトを作成する場合はゲームオブジェクトを必ず継承してください。

//継承せずに使いたい場合は言ってください。

#include "main.h"

class GameObject {
public:
	GameObject() {}
	virtual ~GameObject() {}

	virtual void Initialize(void) = 0;
	virtual void Finalize(void) = 0;
	virtual void Update(void) = 0;
	virtual void Draw(void) = 0;

};

