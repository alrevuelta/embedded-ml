//this file was generated by ../../../../../../scripts/onnx_generator/OperatorTemplate.py
#include "operator__ai_onnx__reshape__5.h"
#include "tracing.h"
#include "utils.h"

operator_status
execute_operator__ai_onnx__reshape__5__T_tensor_bool(
    node_context *ctx
)
{
    TRACE_ENTRY(1);

    TRACE_NODE(2, true, ctx->onnx_node);

    /* UNCOMMENT AS NEEDED */

    // Onnx__TensorProto *i_data = searchInputByName(ctx, 0);
    // Onnx__TensorProto *i_shape = searchInputByName(ctx, 1);

    // TRACE_TENSOR(2, true, i_data);
    // TRACE_TENSOR(2, true, i_shape);

    // context_operator__ai_onnx__reshape__5 *op_ctx = ctx->executer_context;

    

    

    // Onnx__TensorProto *o_reshaped = searchOutputByName(ctx, 0);

    // TRACE_TENSOR(2, true, o_reshaped);

    /* DO CALCULATION HERE */


    TRACE_EXIT(1);

    /* CHANGE RETURN CODE IF THIS EXECUTER IS VALID */
    return OP_ENOSYS;
    // return OP_OK;
}