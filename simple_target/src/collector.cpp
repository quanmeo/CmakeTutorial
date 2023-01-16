#include "collector.h"
#include <iostream>
#include "ui.h"
#include "algo.h"
#include "engine.h"

namespace collector
{
    void print()
    {
        std::cout << "collector::print\n";
        ui::print();
        algo::print();
        engine::print();
    }
} // namespace collector
