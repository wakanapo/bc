# C++ Version

C++ can be quite tricky to compile when there's multiple
files/objects involved. So we're using [Bazel](http://www.bazel.io/)
(the open source version of Google's internal build tool to build.

Either

+ [download and install Bazel](http://www.bazel.io/docs/install.html)

or

+ Use the [class VM](https://docs.google.com/document/d/19xACeeHjvuDsMYrXtZuEoA8z2PFth51-vqQYkYTVDdY/edit) to run Bazel.

  * The latest version has been updated to include Bazel if you
    want to download it now.

  * You can use
    [VitualBox](https://www.virtualbox.org/wiki/Downloads) on
    Mac OS X too!

# Using Bazel

* To run tests

    bazel test :addressbook-test

* To run benchmarks

    bazel run :addressbook-bench

* You can run with compiler optimization by running

    bazel run -c opt :addressbook-bench

# Datastruct
linear list, binary search

# Benchmarks

```
INFO: Found 1 target...
INFO: From Linking addressbook-bench:
clang: warning: argument unused during compilation: '-pthread'
Target //:addressbook-bench up-to-date:
  bazel-bin/addressbook-bench
INFO: Elapsed time: 11.032s, Critical Path: 10.45s

INFO: Running command line: bazel-bin/addressbook-bench
Run on (4 X 1000 MHz CPU s)
2016-07-23 19:27:06
Benchmark                            Time           CPU Iterations
------------------------------------------------------------------
AddressBench/InsertOnly/8        11361 ns      11257 ns      70140   694.005k items/s
AddressBench/InsertOnly/64      105713 ns     104204 ns       7110   599.788k items/s
AddressBench/InsertOnly/512     986747 ns     962155 ns        854   519.667k items/s
AddressBench/InsertOnly/4k     8644502 ns    8432600 ns        100    474.35k items/s
AddressBench/InsertOnly/8k    17747391 ns   17485951 ns         41    457.51k items/s
AddressBench/LookupOnly/8         1514 ns       1478 ns     451400   660.687k items/s
AddressBench/LookupOnly/64        2148 ns       2116 ns     352442   461.602k items/s
AddressBench/LookupOnly/512       6671 ns       6601 ns     103995   147.935k items/s
AddressBench/LookupOnly/4k       42856 ns      42626 ns      14908     22.91k items/s
AddressBench/LookupOnly/8k       61016 ns      60486 ns      12882   16.1454k items/s
AddressBench/Mixed/8             55026 ns      53863 ns      13176   290.086k items/s
AddressBench/Mixed/64           441734 ns     412511 ns       1639   303.022k items/s
AddressBench/Mixed/512         7490660 ns    7364021 ns         96   135.795k items/s
AddressBench/Mixed/4k        274098635 ns  267731000 ns          3   29.8807k items/s
AddressBench/Mixed/8k        738156319 ns  734908000 ns          1   21.7714k items/s
AddressBench/FindNext/8           1321 ns       1307 ns     622709   747.436k items/s
AddressBench/FindNext/64          1513 ns       1491 ns     445511   654.947k items/s
AddressBench/FindNext/512         1731 ns       1712 ns     478665   570.346k items/s
AddressBench/FindNext/4k          1742 ns       1702 ns     432772    573.81k items/s
AddressBench/FindNext/8k          1880 ns       1869 ns     451671   522.388k items/s
```

