#pragma once
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile

#include "lo.h"

extern char _binary_main_js_start[];
extern char _binary_main_js_end[];

void register_builtins() {
  lo::builtins_add("main.js", _binary_main_js_start, _binary_main_js_end - _binary_main_js_start);
}

static unsigned int main_js_len = _binary_main_js_end - _binary_main_js_start;
static const char* main_js = _binary_main_js_start;
static const char* v8flags = "--stack-trace-limit=10 --use-strict --turbo-fast-api-calls --no-freeze-flags-after-init";
static unsigned int _v8flags_from_commandline = 1;
static unsigned int _v8_threads = 2;
static unsigned int _v8_cleanup = 0;
static unsigned int _on_exit = 0;

