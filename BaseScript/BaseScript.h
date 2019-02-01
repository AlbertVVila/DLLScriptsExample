#pragma once

#include "Application.h"

#ifdef BASESCRIPT_EXPORTS
#define BASESCRIPT_API __declspec(dllexport)

#else
#define BASESCRIPT_API __declspec(dllimport)
#endif

class BASESCRIPT_API Script
{
public:
	void SetEnvironment(Application* app);

	virtual void Update();

protected:
	Application * m_interface;
};

BASESCRIPT_API Script* CreateScript();
