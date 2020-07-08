//this file was generated by ../../../../scripts/onnx_generator/OperatorHeader.py
# ifndef OPERATOR_OPERATOR__ONNX__GLOBALAVERAGEPOOL__1_H
# define OPERATOR_OPERATOR__ONNX__GLOBALAVERAGEPOOL__1_H

# include "operators/operator.h"
# include "operators/operator_stub.h"
# include "operators/operator_info.h"

/**
 * onnx operator 'GlobalAveragePool' version 1
 *
 * @param[in]  ctx  Operator context
 * @return          Status code
 *
 * GlobalAveragePool consumes an input tensor X and applies average pooling across
 *  the values in the same channel. This is equivalent to AveragePool with kernel size
 *  equal to the spatial dimension of input tensor.
 * 
 * Constraint T:
 *   Constrain input and output types to float tensors.
 *   Allowed Types: tensor_double, tensor_float, tensor_float16
 * Input T X:
 *   Input data tensor from the previous operator; dimensions for image case
 *   are (N x C x H x W), where N is the batch size, C is the number of
 *   channels, and H and W are the height and the width of the data. For non
 *   image case, the dimensions are in the form of (N x C x D1 x D2 ... Dn),
 *   where N is the batch size.
 *   Allowed Types: tensor_double, tensor_float, tensor_float16
 * Output T Y:
 *   Output data tensor from pooling across the input tensor. The output
 *   tensor has the same rank as the input. The first two dimensions of output
 *   shape are the same as the input (N x C), while the other dimensions are
 *   all 1.
 *   Allowed Types: tensor_double, tensor_float, tensor_float16

 *
 * @since version 1
 *
 * @see io/onnx/onnx/defs/nn/defs.cc:1437
 * @see https://github.com/onnx/onnx/blob/master/docs/Operators.md#GlobalAveragePool
 */
operator_status operator__onnx__globalaveragepool__1(
    node_context *ctx
);
operator_status operator__onnx__globalaveragepool__1__T_tensor_double(
    node_context *ctx
);
operator_status operator__onnx__globalaveragepool__1__T_tensor_float(
    node_context *ctx
);
operator_status operator__onnx__globalaveragepool__1__T_tensor_float16(
    node_context *ctx
);

operator_executer resolve_operator__onnx__globalaveragepool__1(
    node_context *ctx
);

extern operator_info info_operator__onnx__globalaveragepool__1;
# endif