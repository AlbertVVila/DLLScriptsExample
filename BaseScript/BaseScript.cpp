#include "BaseScript.h"
#include <iostream>

void Script::SetEnvironment(Application* app)
{
	m_interface = app;
}

void Script::Update()
{
	//m_interface->Log();
	//GameObject *go = m_interface->GetGameObject();
	//std::cout << go->position << std::endl;
	std::cout << "update" << std::endl;
}

Script* CreateScript()
{
	Script* instance = new Script;
	return instance;
}