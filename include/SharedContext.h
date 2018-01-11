#pragma once
#include <cstdint>
#include "Scene.h"
#include "Window.h"

struct SharedContext
{
	bool isRunning = true;
	float lastTime = 0;
	float currentTime = 0;
	float deltaTime = 0;
	uint16_t fpsCounter = 0;
	Scene* scene = nullptr;
	Window* window = nullptr;
};
