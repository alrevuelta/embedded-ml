//this file was generated by ../../../../../../scripts/onnx_generator/OperatorTemplate.py
#include "operator__ai_onnx__batchnormalization__9.h"
#include "tracing.h"
#include "utils.h"

void
free_operator__ai_onnx__batchnormalization__9(
    node_context *ctx
)
{
    TRACE_ENTRY(1);

    TRACE_NODE(2, true, ctx->onnx_node);

    /* UNCOMMENT AS NEEDED */

    // Onnx__TensorProto *i_X = searchInputByName(ctx, 0);
    // Onnx__TensorProto *i_scale = searchInputByName(ctx, 1);
    // Onnx__TensorProto *i_B = searchInputByName(ctx, 2);
    // Onnx__TensorProto *i_mean = searchInputByName(ctx, 3);
    // Onnx__TensorProto *i_var = searchInputByName(ctx, 4);

    // TRACE_TENSOR(2, true, i_X);
    // TRACE_TENSOR(2, true, i_scale);
    // TRACE_TENSOR(2, true, i_B);
    // TRACE_TENSOR(2, true, i_mean);
    // TRACE_TENSOR(2, true, i_var);

    // Onnx__AttributeProto *a_epsilon = searchAttributeNyName(ctx->onnx_node->n_attribute,ctx->onnx_node->attribute,"epsilon");
    // Onnx__AttributeProto *a_momentum = searchAttributeNyName(ctx->onnx_node->n_attribute,ctx->onnx_node->attribute,"momentum");

    // TRACE_ATTRIBUTE(2, a_epsilon, a_epsilon);
    // TRACE_ATTRIBUTE(2, a_momentum, a_momentum);

    // Onnx__TensorProto *o_Y = searchOutputByName(ctx, 0);
    // Onnx__TensorProto *o_mean = searchOutputByName(ctx, 1);
    // Onnx__TensorProto *o_var = searchOutputByName(ctx, 2);
    // Onnx__TensorProto *o_saved_mean = searchOutputByName(ctx, 3);
    // Onnx__TensorProto *o_saved_var = searchOutputByName(ctx, 4);

    // TRACE_TENSOR(2, true, o_Y);
    // TRACE_TENSOR(2, mean, o_mean);
    // TRACE_TENSOR(2, var, o_var);
    // TRACE_TENSOR(2, saved_mean, o_saved_mean);
    // TRACE_TENSOR(2, saved_var, o_saved_var);

    /* FREE CONTEXT HERE IF NEEDED */

    // context_operator__ai_onnx__batchnormalization__9 *op_ctx = ctx->executer_context;

    // TRACE_VAR(2, true, op_ctx->epsilon, "%f");
    // TRACE_VAR(2, true, op_ctx->momentum, "%f");

    

    // free(op_ctx);


    /* FREE OUTPUT DATA_TYPE AND SHAPE HERE */
    /* DO NOT FREE THE TENSOR ITSELF */

    // freeTensorData(o_Y);
    // free(o_Y->dims);
    // freeTensorData(o_mean);
    // free(o_mean->dims);
    // freeTensorData(o_var);
    // free(o_var->dims);
    // freeTensorData(o_saved_mean);
    // free(o_saved_mean->dims);
    // freeTensorData(o_saved_var);
    // free(o_saved_var->dims);

    TRACE_EXIT(1);
}