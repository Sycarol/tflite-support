package(
    default_visibility = [
        "//tensorflow_lite_support:__subpackages__",
    ],
    licenses = ["notice"],  # Apache 2.0
)

cc_library(
    name = "frame_buffer_cpp_c_utils",
    srcs = [
        "frame_buffer_cpp_c_utils.cc",
    ],
    hdrs = [
        "frame_buffer_cpp_c_utils.h",
    ],
    deps = [
        "//tensorflow_lite_support/c/task/vision/core:frame_buffer",
        "//tensorflow_lite_support/cc/task/vision/utils:frame_buffer_common_utils",
    ],
)
