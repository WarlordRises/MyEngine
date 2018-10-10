#include <memory>

class Entity;
class Keyboard;
class Environment;
class Core;

class Component
{
private:
	std::weak_ptr<Entity> m_entity;

public:
	std::shared_ptr<Entity> GetEntity();
	std::shared_ptr<Core> GetCore();
	std::shared_ptr<Keyboard> GetKeyboard();
	std::shared_ptr<Environment> GetEnvironment();
	void OnInit();
	void OnBegin();
	void OnTick();
	void OnDisplay();

};