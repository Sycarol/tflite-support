package(
    default_visibility = [
        "//tensorflow_lite_support:users",
    ],
    licenses = ["notice"],  # Apache 2.0
)

# bazel run \
#  tensorflow_lite_support/examples/task/vision/desktop/python:image_classifier_demo -- \
#  --model_path=/tmp/aiy_vision_classifier_birds_V1_3.tflite \
#  --image_path=\
# $(pwd)/tensorflow_lite_support/examples/task/vision/desktop/g3doc/sparrow.jpg \
#  --max_results=3
py_binary(
    name = "image_classifier_demo",
    srcs = ["image_classifier_demo.py"],
    data = ["//tensorflow_lite_support/examples/task/vision/desktop:image_classifier_demo"],
    deps = [
        "@absl_py//absl:app",
        "@absl_py//absl/flags",
    ],
)

# bazel run \
#  tensorflow_lite_support/examples/task/vision/desktop/python:object_detector_demo -- \
#  --model_path=/tmp/ssd_mobilenet_v1_1_metadata_1.tflite \
#  --image_path=\
# $(pwd)/tensorflow_lite_support/examples/task/vision/desktop/g3doc/dogs.jpg \
#  --output_png=/tmp/detection-output.png \
#  --max_results=2
py_binary(
    name = "object_detector_demo",
    srcs = ["object_detector_demo.py"],
    data = ["//tensorflow_lite_support/examples/task/vision/desktop:object_detector_demo"],
    deps = [
        "@absl_py//absl:app",
        "@absl_py//absl/flags",
    ],
)

# bazel run \
#  tensorflow_lite_support/examples/task/vision/desktop/python:image_segmenter_demo -- \
#  --model_path=/tmp/keras_post_training_unet_mv2_128_quant.tflite \
#  --image_path=\
# $(pwd)/tensorflow_lite_support/examples/task/vision/desktop/g3doc/cat.jpg \
#  --output_mask_png=/tmp/segmentation-output.png
py_binary(
    name = "image_segmenter_demo",
    srcs = ["image_segmenter_demo.py"],
    data = ["//tensorflow_lite_support/examples/task/vision/desktop:image_segmenter_demo"],
    deps = [
        "@absl_py//absl:app",
        "@absl_py//absl/flags",
    ],
)
