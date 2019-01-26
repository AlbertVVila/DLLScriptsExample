#pragma once

#ifdef PLAYERMOVEMENT_EXPORTS
#define PLAYERMOVEMENT_API __declspec(dllexport)

#else
#define PLAYERMOVEMENT_API __declspec(dllimport)
#endif


#include "BaseScript.h"
class PLAYERMOVEMENT_API PlayerMovement : public Script
{
public:
	void Update() override;
};

PLAYERMOVEMENT_API Script* CreateScript()
{
	Script* instance = new PlayerMovement;
	return instance;
}