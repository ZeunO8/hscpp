#pragma once

#include "hscpp/Tracker.h"

class Printer1
{
    HSCPP_TRACK(Printer1, "Printer1");

public:
    Printer1();
    ~Printer1();

    virtual void Update();
};