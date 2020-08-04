//this file was generated by ../../../../../../scripts/onnx_generator/OperatorHeader.py
# ifndef OPERATOR_OPERATOR__AI_ONNX__TRANSPOSE__1_H
# define OPERATOR_OPERATOR__AI_ONNX__TRANSPOSE__1_H

# include "operators/operator.h"
# include "operators/operator_stub.h"
# include "operators/operator_info.h"

/**
 * ai.onnx operator 'Transpose' version 1
 *
 * @param[in]  ctx  Operator context
 * @return          Status code
 *
 * Transpose the input tensor similar to numpy.transpose. For example, when
 * perm=(1, 0, 2), given an input tensor of shape (1, 2, 3), the output shape
 * will be (2, 1, 3).
 *
 * Constraint T:
 *   Constrain input and output types to all tensor types.
 *   Allowed Types: tensor_bool, tensor_complex128, tensor_complex64,
 *                  tensor_double, tensor_float, tensor_float16, tensor_int16,
 *                  tensor_int32, tensor_int64, tensor_int8, tensor_string,
 *                  tensor_uint16, tensor_uint32, tensor_uint64, tensor_uint8
 * Input T data:
 *   An input tensor.
 *   Allowed Types: tensor_bool, tensor_complex128, tensor_complex64,
 *                  tensor_double, tensor_float, tensor_float16, tensor_int16,
 *                  tensor_int32, tensor_int64, tensor_int8, tensor_string,
 *                  tensor_uint16, tensor_uint32, tensor_uint64, tensor_uint8
 * Output T transposed:
 *   Transposed output.
 *   Allowed Types: tensor_bool, tensor_complex128, tensor_complex64,
 *                  tensor_double, tensor_float, tensor_float16, tensor_int16,
 *                  tensor_int32, tensor_int64, tensor_int8, tensor_string,
 *                  tensor_uint16, tensor_uint32, tensor_uint64, tensor_uint8
 * Attribute INTS perm (optional):
 *   A list of integers. By default, reverse the dimensions, otherwise permute
 *   the axes according to the values given.
 *
 * @since version 1
 *
 * @see io/onnx/onnx/defs/tensor/defs.cc:794
 * @see https://github.com/onnx/onnx/blob/master/docs/Operators.md#Transpose
 */

operator_status
prepare_operator__ai_onnx__transpose__1(
    node_context *ctx
);

extern operator_info info_operator__ai_onnx__transpose__1;

typedef struct {
    size_t n_perm;
    int64_t* perm;

} context_operator__ai_onnx__transpose__1;

operator_executer
resolve_operator__ai_onnx__transpose__1(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_bool(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_complex128(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_complex64(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_double(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_float(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_float16(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_int16(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_int32(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_int64(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_int8(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_string(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_uint16(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_uint32(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_uint64(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__transpose__1__T_tensor_uint8(
    node_context *ctx
);

# endif