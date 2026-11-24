// main.cpp — entry point. Wires config and subsystems together.

#include "ocfreesubgenerator/settings.h"
#include "ocfreesubgenerator/gen.h"
#include "ocfreesubgenerator/activate.h"
#include "ocfreesubgenerator/use.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    ocfreesubgenerator::Settings settings = ocfreesubgenerator::Settings::load_default();
    ocfreesubgenerator::Gen gen(settings.store_path);
    ocfreesubgenerator::Activate activate(settings.store_path);
    ocfreesubgenerator::Use use(settings.store_path);
    std::fprintf(stderr, "[oc-free-sub-generator] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
