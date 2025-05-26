#include "mlir/Dialect/Invariant/IR/Invariant.h"

using namespace mlir;
using namespace mlir::invariant;

#include "mlir/Dialect/Invariant/IR/InvariantOpsDialect.cpp.inc"

void mlir::invariant::InvariantDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/Invariant/IR/InvariantOps.cpp.inc"
      >();
}

#define GET_OP_CLASSES
#include "mlir/Dialect/Invariant/IR/InvariantOps.cpp.inc"