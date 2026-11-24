// activate.cpp — part of oc-free-sub-generator.

#include "ocfreesubgenerator/activate.h"

#include <cstdio>

namespace ocfreesubgenerator {

Activate::Activate(const std::string& config_path)
    : config_path_(config_path) {}

void Activate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Activate::run() {
    if (verbose_) std::fprintf(stderr, "[oc-free-sub-generator] activate: run\n");
    // core logic lives here
    return true;
}

}  // namespace ocfreesubgenerator
