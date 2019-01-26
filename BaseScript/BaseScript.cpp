#include "BaseScript.h"
#include <iostream>

void Script::SetEnvironment(ScriptInterface* si)
{
	m_interface = si;
}

void Script::Update()
{
	m_interface->Log();
	GameObject *go = m_interface->GetGameObject();
	std::cout << go->position << std::endl;
	std::cout << "update" << std::endl;
}

Script* CreateScript()
{
	Script* instance = new Script;
	return instance;
}