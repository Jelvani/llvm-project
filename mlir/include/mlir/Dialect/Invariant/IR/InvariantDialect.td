//===- InvariantDialect.td - Invariant dialect definition ----------*- tablegen -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef INVARIANT_DIALECT
#define INVARIANT_DIALECT

include "mlir/IR/DialectBase.td"
def Invariant_Dialect : Dialect {

  let name = "invariant";

  // A short one-line summary of our dialect.
  let summary = "A dialect for summarizing scf.while loops.";

  // A much longer description of our dialect.
  let description = [{
    A dialect for summarizing scf.while loops.
  }];

  // The C++ namespace that the dialect class definition resides in.
  let cppNamespace = "::mlir::invariant";
}

#endif // INVARIANT_DIALECT