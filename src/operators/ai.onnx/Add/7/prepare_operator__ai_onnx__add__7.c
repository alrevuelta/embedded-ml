//this file was generated by ../../../../../../scripts/onnx_generator/OperatorTemplate.py
#include "operator__ai_onnx__add__7.h"
#include "tracing.h"
#include "utils.h"

operator_status
prepare_operator__ai_onnx__add__7(
    node_context *ctx
)
{
    TRACE_ENTRY(1);

    TRACE_NODE(2, true, ctx->onnx_node);

    /* UNCOMMENT AS NEEDED */

    Onnx__TensorProto *i_A = searchInputByName(ctx, 0);
    Onnx__TensorProto *i_B = searchInputByName(ctx, 1);

    TRACE_TENSOR(2, true, i_A);
    TRACE_TENSOR(2, true, i_B);

    Onnx__TensorProto *o_C = searchOutputByName(ctx, 0);

    /* ALLOCATE AND INITIALIZE CONTEXT HERE IF NEEDED */
    // context_operator__ai_onnx__add__7 *op_ctx = NULL;
    // op_ctx = malloc(sizeof(context_operator__ai_onnx__add__7));
    // TRACE_FATAL(0 , !op_ctx, "could not allocate executer_context");

    /* INITIALIZE OUTPUTS DATA_TYPE AND SHAPE HERE */

    /* There order of operands if unknown. The longest one will determine the output */
    /* Quick and dirty solution */
    o_C->has_raw_data = 0;

    Onnx__TensorProto *ref = (i_A->n_dims > i_B->n_dims)?i_A:i_B;
    o_C->dims = ARRAYDUP(ref->dims, ref->n_dims);
    o_C->n_dims = ref->n_dims;
    o_C->data_type = ref->data_type;

    /* MALLOC OUTPUT TENSORS HERE */

    mallocTensorData(o_C);

    TRACE_TENSOR(2, true, o_C);

    /* CHOOSE EXECUTER AND CONTEXT HERE */
    /* YOU MAY USE THE GENERATED RESOLVER */

    ctx->executer = resolve_operator__ai_onnx__add__7(ctx);
    // ctx->executer_context = op_ctx;

    TRACE_EXIT(1);

    /* CHANGE RETURN CODE IF THIS PREPARER IS VALID */
    // return OP_ENOSYS;
    return OP_OK;
}