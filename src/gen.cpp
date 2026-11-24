// gen.cpp — part of oc-free-sub-generator.

#include "ocfreesubgenerator/gen.h"

#include <cstdio>

namespace ocfreesubgenerator {

Gen::Gen(const std::string& config_path)
    : config_path_(config_path) {}

void Gen::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Gen::run() {
    if (verbose_) std::fprintf(stderr, "[oc-free-sub-generator] gen: run\n");
    // core logic lives here
    return true;
}

}  // namespace ocfreesubgenerator
