#ifndef EMBEDDEDML_ADD_H
#define EMBEDDEDML_ADD_H
#include "../pb/onnx.pb-c.h"

void operator_add(size_t n_input,
                  Onnx__TensorProto **input,
                  size_t n_attribute,
                  Onnx__AttributeProto **attribute,
                  size_t n_output,
                  Onnx__TensorProto **output);

#endif