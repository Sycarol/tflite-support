/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_SUPPORT_EXAMPLES_TASK_VISION_DESKTOP_UTILS_IMAGE_UTILS_H_
#define TENSORFLOW_LITE_SUPPORT_EXAMPLES_TASK_VISION_DESKTOP_UTILS_IMAGE_UTILS_H_

#include "external/com_google_absl/absl/status/status.h"
#include "external/com_google_absl/absl/strings/string_view.h"
#include "tensorflow_lite_support/cc/port/integral_types.h"
#include "tensorflow_lite_support/cc/port/statusor.h"

namespace tflite {
namespace task {
namespace vision {

// Image data with pixels stored as a row-major flattened array.
// Channels can be:
// 1 : grayscale
// 3 : RGB, interleaved
// 4 : RGBA, interleaved
struct ImageData {
  uint8* pixel_data;
  int width;
  int height;
  int channels;
};

// Decodes image file and returns the corresponding image if no error
// occurred. If decoding succeeded, the caller must manage deletion of the
// underlying pixel data using `ImageDataFree`.
// Supports a wide range of image formats, listed in `stb_image/stb_image.h`.
tflite::support::StatusOr<ImageData> DecodeImageFromFile(
    const std::string& file_name);

// Encodes the image provided as an ImageData as lossless PNG to the provided
// path.
absl::Status EncodeImageToPngFile(const ImageData& image_data,
                                  const std::string& image_path);

// Releases image pixel data memory.
void ImageDataFree(ImageData* image);

}  // namespace vision
}  // namespace task
}  // namespace tflite

#endif  // TENSORFLOW_LITE_SUPPORT_EXAMPLES_TASK_VISION_DESKTOP_UTILS_IMAGE_UTILS_H_
