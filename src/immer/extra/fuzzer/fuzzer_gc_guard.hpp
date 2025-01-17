//
// immer: immutable data structures for C++
// Copyright (C) 2016, 2017, 2018 Juan Pedro Bolivar Puente
//
// This software is distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://boost.org/LICENSE_1_0.txt
//

#pragma once

#include <immer/heap/gc_heap.hpp>

struct fuzzer_gc_guard
{
    fuzzer_gc_guard() { GC_disable(); }

    ~fuzzer_gc_guard()
    {
        GC_enable();
        GC_gcollect();
    }
};
