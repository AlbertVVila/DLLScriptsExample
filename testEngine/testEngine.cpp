// testEngine.cpp: define el punto de entrada de la aplicación de consola.
//

#include <thread>
#include <chrono>
#include "ScriptInterfaceImpl.h"
#include "BaseScript.h"
#include <list>
#include "windows.h"

int main()
{
	ScriptInterfaceImpl* impl = new ScriptInterfaceImpl;
	Script* script = CreateScript();
	script->SetEnvironment(impl);

	std::list<Script*> scripts;
	std::list<std::string> scriptnames;

	//typedef Script*(__cdecl *Create)();
	//HMODULE dll = LoadLibrary(scriptnames.front());
	//if (dll != nullptr)
	//{
	//	Create CreateScript = (Create)GetProcAddress(dll, "CreateScript");
	//	if (CreateScript != nullptr)
	//	{
	//		Script* script = CreateScript();
	//		std::cout << "script created" << std::endl;
	//	}
	//	if (!FreeLibrary(dll))
	//	{
	//		std::cout << "CAN'T RELEASE LIBRARY" << std::endl;
	//	}
	//}

	while (true) //mainLoop
	{
		script->Update();
		std::this_thread::sleep_for(std::chrono::seconds(2));
	}
}