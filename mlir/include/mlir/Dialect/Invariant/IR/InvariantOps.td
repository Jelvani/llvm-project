#ifndef INVARIANT_OPS
#define INVARIANT_OPS

include "mlir/Dialect/Invariant/IR/InvariantDialect.td"
include "mlir/IR/OpBase.td"
include "mlir/IR/AttrTypeBase.td"
include "mlir/IR/RegionKindInterface.td"

//   * A list of traits for the operation.
class Invariant_Op<string mnemonic, list<Trait> traits = []> :
    Op<Invariant_Dialect, mnemonic, traits>;


def InvariantOp : Invariant_Op<"invariant">
{
  let regions = (region SizedRegion<1>:$body);

  let assemblyFormat = [{attr-dict-with-keyword $body}];
}

def YieldOp : Invariant_Op<"yield",[HasParent<"InvariantOp">,Terminator]> {
  
  let arguments = (ins AnyType:$results);

  let assemblyFormat = [{  attr-dict $results `:` type($results) }];


}

#endif // INVARIANT_OPS