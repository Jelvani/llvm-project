
//===- Invariant.h - Invariant Dialect ----------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares Invariant in MLIR.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_DIALECT_INVARIANT_H
#define MLIR_DIALECT_INVARIANT_H

#include "mlir/Bytecode/BytecodeOpInterface.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/BuiltinOps.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/Interfaces/CastInterfaces.h"
#include "mlir/Interfaces/ControlFlowInterfaces.h"
#include "mlir/Interfaces/FunctionInterfaces.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"

#include "mlir/Dialect/Invariant/IR/InvariantOpsDialect.h.inc"


#define GET_OP_CLASSES
#include "mlir/Dialect/Invariant/IR/InvariantOps.h.inc"

#endif // MLIR_DIALECT_INVARIANT_H