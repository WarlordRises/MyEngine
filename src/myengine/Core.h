#include <memory>
#include <vector>

class Environment;
class Entity;
class Keyboard;

class Core
{
private:
	std::shared_ptr<Environment> m_environment;
	std::vector<std::shared_ptr<Entity>> m_entities;
	std::shared_ptr<Keyboard> m_keyboard;
	bool m_running;

public:
	std::shared_ptr<Core> Initialise();
	std::shared_ptr<Entity> AddEntity();
	void Start();
	void Stop();
	

};