load(
    "@org_tensorflow//tensorflow/lite/core/shims:cc_library_with_tflite.bzl",
    "cc_test_with_tflite",
)

package(
    default_visibility = [
        "//tensorflow_lite_support:__subpackages__",
    ],
    licenses = ["notice"],  # Apache 2.0
)

# To test it with Bazel, run the following command from the terminal of your desktop:
# bazel test tensorflow_lite_support/c/test/task/vision:image_classifier_test
cc_test_with_tflite(
    name = "image_classifier_test",
    srcs = ["image_classifier_test.cc"],
    data = [
        "//tensorflow_lite_support/cc/test/testdata/task/vision:test_images",
        "//tensorflow_lite_support/cc/test/testdata/task/vision:test_models",
    ],
    tflite_deps = [
        "//tensorflow_lite_support/c/task/vision:image_classifier",
        "@org_tensorflow//tensorflow/lite/core/shims:cc_shims_test_util",
    ],
    deps = [
        "//tensorflow_lite_support/c/task/processor:classification_result",
        "//tensorflow_lite_support/c/task/vision/core:frame_buffer",
        "//tensorflow_lite_support/cc/port:gtest_main",
        "//tensorflow_lite_support/cc/test:test_utils",
        "//tensorflow_lite_support/examples/task/vision/desktop/utils:image_utils",
    ],
)
