/* Copyright 2021 The TensorFlow Authors. All Rights Reserved.

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
#ifndef TENSORFLOW_LITE_SUPPORT_C_TASK_PROCESSOR_CLASSIFICATION_RESULT_H_
#define TENSORFLOW_LITE_SUPPORT_C_TASK_PROCESSOR_CLASSIFICATION_RESULT_H_

// Defines C structure for Classification Results and associated helper methods.

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

// A single predicted class.
typedef struct TfLiteCategory {
  // The index of the class in the corresponding label map, usually packed in
  // the TFLite Model Metadata [1].
  //
  // [1]: https://www.tensorflow.org/lite/convert/metadata
  int index;

  // The score for this class e.g. (but not necessarily) a probability in [0,1].
  float score;

  // A human readable name of the class filled from the label map.
  char* display_name;
  // An ID for the class, not necessarily human-readable (e.g. a Google
  // Knowledge Graph ID [1]), filled from the label map.
  //
  // [1]: https://developers.google.com/knowledge-graph
  char* label;
} TfLiteCategory;

// List of predicted classes (aka labels) for a given image classifier head.
typedef struct TfLiteClassifications {
  // The index of the image classifier head these classes refer to. This is
  // useful for multi-head models.
  int head_index;

  // Number of predicted classes which can be used to traverse the array of
  // predicted classes.
  int size;

  // The array of predicted classes, usually sorted by descending scores (e.g.
  // from high to low probability). Since this array is dynamically allocated,
  // use size to traverse through the array.
  TfLiteCategory* categories;
} TfLiteClassifications;

// Holds Image Classification results.
// Contains one set of results per image classifier head.
typedef struct TfLiteClassificationResult {
  // Number of predicted classes which can be used to traverse the array of
  // predicted classes.
  int size;

  // Array of image classifier results per image classifier head. This array can
  // have any number of results. size holds the size of this array. size should
  // be used to traverse this array.
  TfLiteClassifications* classifications;
} TfLiteClassificationResult;

// Frees up the ClassificationResult Structure.
void TfLiteClassificationResultDelete(
    TfLiteClassificationResult* classification_result);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif  // TENSORFLOW_LITE_SUPPORT_C_TASK_VISION_CLASSIFICATION_RESULT_H_
