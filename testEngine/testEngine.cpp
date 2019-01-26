// testEngine.cpp: define el punto de entrada de la aplicación de consola.
//

#include <thread>
#include <chrono>
#include "ScriptInterfaceImpl.h"
#include "BaseScript.h"

int main()
{
	ScriptInterfaceImpl* impl = new ScriptInterfaceImpl;
	Script* script = CreateScript();
	script->SetEnvironment(impl);
	//typedef BaseScript(__cdecl *Create)();
	//HMODULE dll = LoadLibrary(L"Script1.dll");
	//if (dll != nullptr)
	//{
	//	Create CreateScript = (Create)GetProcAddress(dll, "CreateScript");
	//	if (CreateScript != nullptr)
	//	{
	//		BaseScript* script = CreateScript();
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