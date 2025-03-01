load(
    "@org_tensorflow//tensorflow/lite/core/shims:cc_library_with_tflite.bzl",
    "cc_library_with_tflite",
)

package(
    default_visibility = ["//tensorflow_lite_support:users"],
    licenses = ["notice"],  # Apache 2.0
)

cc_library_with_tflite(
    name = "nl_classifier",
    srcs = [
        "nl_classifier.cc",
    ],
    hdrs = [
        "nl_classifier.h",
    ],
    tflite_deps = [
        "@org_tensorflow//tensorflow/lite/core/shims:builtin_ops",
        "//tensorflow_lite_support/cc/task/core:base_task_api",
        "//tensorflow_lite_support/cc/task/core:task_api_factory",
    ],
    deps = [
        "//tensorflow_lite_support/cc:common",
        "//tensorflow_lite_support/cc/port:status_macros",
        "//tensorflow_lite_support/cc/port:statusor",
        "//tensorflow_lite_support/cc/task/core:category",
        "//tensorflow_lite_support/cc/task/core:task_utils",
        "//tensorflow_lite_support/cc/task/text/proto:nl_classifier_options_proto_inc",
        "//tensorflow_lite_support/cc/text/tokenizers:regex_tokenizer",
        "//tensorflow_lite_support/cc/text/tokenizers:tokenizer",
        "//tensorflow_lite_support/cc/utils:common_utils",
        "//tensorflow_lite_support/metadata/cc:metadata_extractor",
        "@com_google_absl//absl/algorithm:container",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
        "@flatbuffers",
        "@org_tensorflow//tensorflow/lite:string",
        "@org_tensorflow//tensorflow/lite/c:common",
        "@org_tensorflow//tensorflow/lite/core/api",
        "@org_tensorflow//tensorflow/lite/kernels/internal:tensor",
    ],
)

cc_library_with_tflite(
    name = "bert_nl_classifier",
    srcs = [
        "bert_nl_classifier.cc",
    ],
    hdrs = [
        "bert_nl_classifier.h",
    ],
    tflite_deps = [
        ":nl_classifier",
        "@org_tensorflow//tensorflow/lite/core/shims:builtin_ops",
        "//tensorflow_lite_support/cc/task/core:task_api_factory",
    ],
    deps = [
        "//tensorflow_lite_support/cc:common",
        "//tensorflow_lite_support/cc/port:status_macros",
        "//tensorflow_lite_support/cc/task/core:category",
        "//tensorflow_lite_support/cc/task/core:task_utils",
        "//tensorflow_lite_support/cc/task/text/proto:bert_nl_classifier_options_proto_inc",
        "//tensorflow_lite_support/cc/text/tokenizers:tokenizer",
        "//tensorflow_lite_support/cc/text/tokenizers:tokenizer_utils",
        "//tensorflow_lite_support/metadata/cc:metadata_extractor",
        "@com_google_absl//absl/base:core_headers",
        "@com_google_absl//absl/status",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@org_tensorflow//tensorflow/lite:string",
        "@org_tensorflow//tensorflow/lite/c:common",
        "@org_tensorflow//tensorflow/lite/core/api",
    ],
)
