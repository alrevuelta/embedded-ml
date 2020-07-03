//this file was generated by ../../../../../scripts/onnx_generator/OperatorInfo.py
#include "operators/operator_info.h"
#include "operators/onnx/operator__onnx__batchnormalization__12.h"

/* attributes */
static
operator_info_attribute
attributes[] = {
{
    .name     = "epsilon",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__FLOAT
},
{
    .name     = "momentum",
    .optional = false,
    .type     = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__FLOAT
}
};

/* input tensors */
static
uint32_t
tensor_type_X[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_scale[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_B[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_mean[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_var[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_training_mode[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__BOOL
};

static
operator_info_tensor
inputs[] = {
{
    .name        = "X",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_X
},
{
    .name        = "scale",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_scale
},
{
    .name        = "B",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_B
},
{
    .name        = "mean",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_mean
},
{
    .name        = "var",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_var
},
{
    .name        = "training_mode",
    .optional    = true,
    .variadic    = true,
    .homogeneous = true,
    .constraint  = "T1",
    .n_types     = 1,
    .types       = tensor_type_training_mode
}
};

/* output tensors */
static
uint32_t
tensor_type_Y[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_output_mean[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_output_var[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_saved_mean[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
uint32_t
tensor_type_saved_var[] = {
ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16
};

static
operator_info_tensor
outputs[] = {
{
    .name        = "Y",
    .optional    = false,
    .variadic    = false,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_Y
},
{
    .name        = "output_mean",
    .optional    = true,
    .variadic    = true,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_output_mean
},
{
    .name        = "output_var",
    .optional    = true,
    .variadic    = true,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_output_var
},
{
    .name        = "saved_mean",
    .optional    = true,
    .variadic    = true,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_saved_mean
},
{
    .name        = "saved_var",
    .optional    = true,
    .variadic    = true,
    .homogeneous = true,
    .constraint  = "T",
    .n_types     = 3,
    .types       = tensor_type_saved_var
}
};

/* constraints */
static
operator_info_constraint
constraints[] = {
{ "T" },
{ "T1" }
};

/* operator info */
operator_info
info_operator__onnx__batchnormalization__12 = {
    .name         = "BatchNormalization",
    .range_input  = { 5, 6 },
    .range_output = { 1, 5 },
    .n_attribute  = 2,
    .attribute    = attributes,
    .n_input      = 6,
    .input        = inputs,
    .n_output     = 5,
    .output       = outputs,
    .n_constraint = 2,
    .constraint   = constraints
};