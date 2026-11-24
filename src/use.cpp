// use.cpp — part of oc-free-sub-generator.

#include "ocfreesubgenerator/use.h"

#include <cstdio>

namespace ocfreesubgenerator {

Use::Use(const std::string& config_path)
    : config_path_(config_path) {}

void Use::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Use::run() {
    if (verbose_) std::fprintf(stderr, "[oc-free-sub-generator] use: run\n");
    // core logic lives here
    return true;
}

}  // namespace ocfreesubgenerator
