#pragma once

#include "Timer.h"
#include <memory>

class FrameManager {

private:

    FrameManager();
    static FrameManager *_instance;

    std::shared_ptr<Timer> _stepTimer;
    float _cappedFrameTimeStep;
    float _deltaTime;

public:

    ~FrameManager();
    static FrameManager *Instance() {
        if(!_instance) {
            _instance = new FrameManager;
        }
        return _instance;
    }

    bool Config(float refreshRateCap);
    void Start();
    void Reset();
    void SynchronizeFrameTime();

    float GetCappedFrameTimeStep() { return _cappedFrameTimeStep; }
    float GetDeltaTime() { return _deltaTime; }
};

#define frame_manager FrameManager::Instance()