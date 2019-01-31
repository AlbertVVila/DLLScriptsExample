#pragma once

#ifdef BASESCRIPT_EXPORTS
#define BASESCRIPT_API __declspec(dllexport)

#else
#define BASESCRIPT_API __declspec(dllimport)
#endif

//struct GameObject
//{
//	int position = 5;
//	int scale = 1;
//};

class BASESCRIPT_API TransformInterface
{
public:
	virtual void GetPosition() = 0;
	virtual void SetPosition(int x, int y, int z) = 0;
};

class BASESCRIPT_API GameObjectInterface
{
public:
	virtual TransformInterface GetTransform() = 0;
};

class BASESCRIPT_API ScriptInterface
{
public:
	virtual void Log() = 0;
	//virtual GameObject* GetGameObject() = 0;
};

class BASESCRIPT_API Script
{
public:
	void SetEnvironment(ScriptInterface* si);

	virtual void Update();

protected:
	ScriptInterface * m_interface;
};

BASESCRIPT_API Script* CreateScript();
