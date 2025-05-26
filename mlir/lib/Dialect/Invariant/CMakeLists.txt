add_mlir_dialect_library(MLIRInvariantDialect
  InvariantDialect.cpp

  ADDITIONAL_HEADER_DIRS
  ${MLIR_MAIN_INCLUDE_DIR}/mlir/Dialect/Invariant

  DEPENDS
  MLIRInvariantOpsIncGen

  LINK_LIBS PUBLIC
  MLIRDialect
  MLIRIR
  MLIRUBDialect
)