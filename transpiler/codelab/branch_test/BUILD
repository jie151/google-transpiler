load("@bazel_skylib//:bzl_library.bzl", "bzl_library")
load("//transpiler:fhe.bzl", "fhe_cc_library")

fhe_cc_library( # fhe_cc_library create a Bazel macro
    name = "test_tfhe", # name of the package
    src = "test.cc", # c++ file which will be transpiled
    hdrs = [], # any headers required by the source file
    # configurable parameters
   encryption = "openfhe",
   interpreter = True,
    optimizer = "yosys",
)