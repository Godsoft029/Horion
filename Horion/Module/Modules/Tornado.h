#pragma once
#include "Module.h"

class Tornado : public IModule {
public:
	Tornado();
	~Tornado();

	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};