#include <benchmark/benchmark.h>
#include "my_add.hpp"

static void BM_my_add(benchmark::State& state) {
    int a = 300;
    int b = 10000;
    for (auto _ : state) {
        benchmark::DoNotOptimize(my_add(a, b));
    }
}

BENCHMARK(BM_my_add);

BENCHMARK_MAIN();
