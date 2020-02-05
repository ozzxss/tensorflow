/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// Inputs/Outputs exclusion lists for GradientTape.
//
// This file is MACHINE GENERATED! Do not edit.
// Generated by: tensorflow/python/eager/gen_gradient_input_output_exclusions.py

#include "tensorflow/python/eager/pywrap_gradient_exclusions.h"

#include "tensorflow/core/lib/gtl/flatmap.h"
#include "tensorflow/core/lib/gtl/flatset.h"

using tensorflow::string;

bool OpGradientDoesntRequireInputIndices(
    const string& op_name,
    std::pair<bool, tensorflow::gtl::FlatSet<int>>** output) {
  static tensorflow::gtl::FlatMap<
      string, std::pair<bool, tensorflow::gtl::FlatSet<int>>>* m =
      new tensorflow::gtl::FlatMap<
          string, std::pair<bool, tensorflow::gtl::FlatSet<int>>>({
          {"Acosh", {true, {}}},
          {"AllToAll", {false, {0}}},
          {"ApproximateEqual", {true, {}}},
          {"ArgMax", {true, {}}},
          {"ArgMin", {true, {}}},
          {"AsString", {true, {}}},
          {"Asinh", {true, {}}},
          {"Assign", {true, {}}},
          {"AssignAdd", {true, {}}},
          {"AssignSub", {true, {}}},
          {"AudioSummary", {true, {}}},
          {"AudioSummaryV2", {true, {}}},
          {"AvgPool3DGrad", {false, {1}}},
          {"AvgPoolGrad", {false, {1}}},
          {"BatchNormWithGlobalNormalization", {false, {3}}},
          {"BatchToSpace", {false, {0}}},
          {"BatchToSpaceND", {false, {0}}},
          {"BiasAdd", {true, {}}},
          {"BiasAddV1", {true, {}}},
          {"BitwiseAnd", {true, {}}},
          {"BitwiseOr", {true, {}}},
          {"BitwiseXor", {true, {}}},
          {"BroadcastGradientArgs", {true, {}}},
          {"CSRSparseMatrixToDense", {true, {}}},
          {"CTCBeamSearchDecoder", {true, {}}},
          {"CTCGreedyDecoder", {true, {}}},
          {"CTCLoss", {true, {}}},
          {"CTCLossV2", {true, {}}},
          {"Ceil", {true, {}}},
          {"CheckNumerics", {true, {}}},
          {"CheckNumericsV2", {true, {}}},
          {"Cholesky", {true, {}}},
          {"CollectivePermute", {false, {0}}},
          {"Conj", {true, {}}},
          {"ConjugateTranspose", {false, {0}}},
          {"Const", {true, {}}},
          {"Conv2DBackpropFilter", {false, {1}}},
          {"Conv2DBackpropInput", {false, {0}}},
          {"Conv3DBackpropFilterV2", {false, {1}}},
          {"Conv3DBackpropInputV2", {false, {0}}},
          {"CropAndResize", {false, {3}}},
          {"CrossReplicaSum", {false, {0}}},
          {"Cumsum", {false, {0}}},
          {"DebugGradientIdentity", {true, {}}},
          {"DebugGradientRefIdentity", {true, {}}},
          {"DebugIdentityV2", {true, {}}},
          {"DecodeBase64", {true, {}}},
          {"DecodePaddedRaw", {true, {}}},
          {"DecodeProtoV2", {true, {}}},
          {"DecodeRaw", {true, {}}},
          {"DeleteSessionTensor", {true, {}}},
          {"DenseToCSRSparseMatrix", {true, {}}},
          {"DenseToDenseSetOperation", {true, {}}},
          {"DenseToSparseSetOperation", {true, {}}},
          {"DepthToSpace", {true, {}}},
          {"DepthwiseConv2dNativeBackpropFilter", {false, {1}}},
          {"DepthwiseConv2dNativeBackpropInput", {false, {0}}},
          {"Diag", {true, {}}},
          {"DiagPart", {true, {}}},
          {"DrawBoundingBoxes", {true, {}}},
          {"EditDistance", {true, {}}},
          {"Elu", {true, {}}},
          {"EncodeBase64", {true, {}}},
          {"EnsureShape", {true, {}}},
          {"Enter", {true, {}}},
          {"Equal", {true, {}}},
          {"Erfinv", {true, {}}},
          {"Exit", {true, {}}},
          {"Exp", {true, {}}},
          {"ExpandDims", {false, {1}}},
          {"ExtractGlimpse", {true, {}}},
          {"FFT", {true, {}}},
          {"FFT2D", {true, {}}},
          {"FFT3D", {true, {}}},
          {"Fill", {true, {}}},
          {"FixedLengthRecordReader", {true, {}}},
          {"Floor", {true, {}}},
          {"FloorDiv", {true, {}}},
          {"FusedBatchNorm", {false, {2}}},
          {"FusedBatchNormGradV3", {false, {5}}},
          {"FusedBatchNormV2", {false, {2}}},
          {"FusedBatchNormV3", {false, {2}}},
          {"GenerateBoundingBoxProposals", {true, {}}},
          {"GenerateVocabRemapping", {true, {}}},
          {"GetSessionHandle", {true, {}}},
          {"GetSessionHandleV2", {true, {}}},
          {"GetSessionTensor", {true, {}}},
          {"Greater", {true, {}}},
          {"GreaterEqual", {true, {}}},
          {"HSVToRGB", {true, {}}},
          {"HashTable", {true, {}}},
          {"HashTableV2", {true, {}}},
          {"HistogramSummary", {true, {}}},
          {"IFFT", {true, {}}},
          {"IFFT2D", {true, {}}},
          {"IFFT3D", {true, {}}},
          {"Identity", {true, {}}},
          {"IdentityN", {true, {}}},
          {"IdentityReader", {true, {}}},
          {"Imag", {true, {}}},
          {"ImageProjectiveTransformV2", {false, {2}}},
          {"ImageSummary", {true, {}}},
          {"InitializeTable", {true, {}}},
          {"InitializeTableFromTextFile", {true, {}}},
          {"InitializeTableFromTextFileV2", {true, {}}},
          {"InitializeTableV2", {true, {}}},
          {"Inv", {true, {}}},
          {"Invert", {true, {}}},
          {"InvertPermutation", {true, {}}},
          {"LMDBReader", {true, {}}},
          {"LeakyReluGrad", {false, {0}}},
          {"LeftShift", {true, {}}},
          {"Less", {true, {}}},
          {"LessEqual", {true, {}}},
          {"LinSpace", {true, {}}},
          {"LoadAndRemapMatrix", {true, {}}},
          {"LogSoftmax", {true, {}}},
          {"LogicalAnd", {true, {}}},
          {"LogicalNot", {true, {}}},
          {"LogicalOr", {true, {}}},
          {"LookupTableFind", {true, {}}},
          {"LookupTableFindV2", {true, {}}},
          {"LookupTableInsert", {true, {}}},
          {"LookupTableInsertV2", {true, {}}},
          {"LookupTableSize", {true, {}}},
          {"LookupTableSizeV2", {true, {}}},
          {"LoopCond", {true, {}}},
          {"MatrixBandPart", {false, {0}}},
          {"MatrixDiag", {true, {}}},
          {"MatrixDiagPartV2", {false, {2}}},
          {"MatrixDiagPartV3", {false, {2}}},
          {"MatrixDiagV2", {false, {0, 2, 3, 4}}},
          {"MatrixDiagV3", {false, {0, 2, 3, 4}}},
          {"MatrixInverse", {true, {}}},
          {"MatrixSetDiagV2", {false, {0}}},
          {"MatrixSetDiagV3", {false, {0}}},
          {"MatrixSolve", {false, {1}}},
          {"MatrixSquareRoot", {true, {}}},
          {"MaxPool3DGrad", {false, {2}}},
          {"MaxPool3DGradGrad", {false, {2}}},
          {"MaxPoolGrad", {false, {2}}},
          {"MaxPoolGradGrad", {false, {2}}},
          {"MaxPoolGradV2", {false, {2}}},
          {"MirrorPad", {false, {0}}},
          {"MirrorPadGrad", {false, {0}}},
          {"Multinomial", {true, {}}},
          {"MutableDenseHashTable", {true, {}}},
          {"MutableDenseHashTableV2", {true, {}}},
          {"MutableHashTable", {true, {}}},
          {"MutableHashTableOfTensors", {true, {}}},
          {"MutableHashTableOfTensorsV2", {true, {}}},
          {"MutableHashTableV2", {true, {}}},
          {"NcclAllReduce", {true, {}}},
          {"NcclBroadcast", {true, {}}},
          {"Ndtri", {true, {}}},
          {"Neg", {true, {}}},
          {"NextIteration", {true, {}}},
          {"NonMaxSuppression", {true, {}}},
          {"NonMaxSuppressionV2", {true, {}}},
          {"NonMaxSuppressionWithOverlaps", {true, {}}},
          {"NotEqual", {true, {}}},
          {"NthElement", {false, {1}}},
          {"OneHot", {true, {}}},
          {"OnesLike", {true, {}}},
          {"OptionalGetValue", {true, {}}},
          {"Pack", {true, {}}},
          {"ParameterizedTruncatedNormal", {true, {}}},
          {"ParseTensor", {true, {}}},
          {"PlaceholderWithDefault", {true, {}}},
          {"PopulationCount", {true, {}}},
          {"PreventGradient", {true, {}}},
          {"Qr", {true, {}}},
          {"QuantizeAndDequantize", {true, {}}},
          {"QuantizeAndDequantizeV2", {true, {}}},
          {"QuantizeAndDequantizeV3", {true, {}}},
          {"QueueClose", {true, {}}},
          {"QueueDequeue", {true, {}}},
          {"QueueDequeueMany", {true, {}}},
          {"QueueDequeueUpTo", {true, {}}},
          {"QueueSize", {true, {}}},
          {"RaggedRange", {true, {}}},
          {"RandomCrop", {true, {}}},
          {"RandomStandardNormal", {true, {}}},
          {"RandomUniform", {true, {}}},
          {"Range", {true, {}}},
          {"Rank", {true, {}}},
          {"ReadVariableOp", {true, {}}},
          {"ReaderNumRecordsProduced", {true, {}}},
          {"ReaderNumWorkUnitsCompleted", {true, {}}},
          {"ReaderRead", {true, {}}},
          {"ReaderReadUpTo", {true, {}}},
          {"ReaderReset", {true, {}}},
          {"ReaderRestoreState", {true, {}}},
          {"ReaderSerializeState", {true, {}}},
          {"Real", {true, {}}},
          {"Reciprocal", {true, {}}},
          {"ReduceJoin", {true, {}}},
          {"RefEnter", {true, {}}},
          {"RefExit", {true, {}}},
          {"RefIdentity", {true, {}}},
          {"RefNextIteration", {true, {}}},
          {"RegexReplace", {true, {}}},
          {"Relu", {true, {}}},
          {"Relu6", {true, {}}},
          {"Relu6Grad", {false, {0}}},
          {"ReluGrad", {false, {0}}},
          {"Reshape", {false, {1}}},
          {"ResizeBicubic", {false, {1}}},
          {"ResizeBilinear", {false, {1}}},
          {"ResizeNearestNeighbor", {false, {1}}},
          {"Reverse", {false, {0}}},
          {"ReverseSequence", {false, {0}}},
          {"ReverseV2", {false, {0}}},
          {"RightShift", {true, {}}},
          {"Rint", {true, {}}},
          {"Roll", {false, {0}}},
          {"Round", {true, {}}},
          {"Rsqrt", {true, {}}},
          {"SampleDistortedBoundingBox", {true, {}}},
          {"SampleDistortedBoundingBoxV2", {true, {}}},
          {"ScalarSummary", {true, {}}},
          {"ScaleAndTranslate", {false, {1}}},
          {"ScatterAdd", {true, {}}},
          {"ScatterDiv", {true, {}}},
          {"ScatterMul", {true, {}}},
          {"ScatterNd", {false, {1, 2}}},
          {"ScatterNdAdd", {true, {}}},
          {"ScatterNdNonAliasingAdd", {false, {0, 2}}},
          {"ScatterNdSub", {true, {}}},
          {"ScatterNdUpdate", {true, {}}},
          {"ScatterSub", {true, {}}},
          {"SdcaFprint", {true, {}}},
          {"SegmentSum", {false, {0}}},
          {"Select", {false, {2}}},
          {"Selu", {true, {}}},
          {"SerializeTensor", {true, {}}},
          {"SetSize", {true, {}}},
          {"Shape", {true, {}}},
          {"Sigmoid", {true, {}}},
          {"Size", {true, {}}},
          {"Slice", {false, {2}}},
          {"Softmax", {true, {}}},
          {"SoftmaxCrossEntropyWithLogits", {false, {1}}},
          {"SpaceToBatch", {false, {0}}},
          {"SpaceToBatchND", {false, {0}}},
          {"SpaceToDepth", {true, {}}},
          {"SparseAdd", {false, {2, 5, 6}}},
          {"SparseAddGrad", {true, {}}},
          {"SparseDenseCwiseAdd", {true, {}}},
          {"SparseFillEmptyRows", {true, {}}},
          {"SparseMatrixMul", {true, {}}},
          {"SparseMatrixNNZ", {true, {}}},
          {"SparseMatrixSoftmax", {true, {}}},
          {"SparseMatrixTranspose", {true, {}}},
          {"SparseMatrixZeros", {true, {}}},
          {"SparseReduceSum", {false, {1}}},
          {"SparseReorder", {false, {1}}},
          {"SparseSegmentMeanWithNumSegments", {false, {3}}},
          {"SparseSegmentSqrtNWithNumSegments", {false, {3}}},
          {"SparseSegmentSumWithNumSegments", {false, {3}}},
          {"SparseSlice", {false, {2, 4}}},
          {"SparseSoftmax", {false, {1}}},
          {"SparseSoftmaxCrossEntropyWithLogits", {true, {}}},
          {"SparseSparseMaximum", {true, {}}},
          {"SparseSparseMinimum", {true, {}}},
          {"SparseTensorDenseAdd", {false, {1, 2, 3}}},
          {"SparseToSparseSetOperation", {true, {}}},
          {"Split", {false, {1}}},
          {"Sqrt", {true, {}}},
          {"SqrtGrad", {false, {1}}},
          {"Stack", {true, {}}},
          {"StackClose", {true, {}}},
          {"StackPop", {true, {}}},
          {"StackPush", {true, {}}},
          {"StatelessMultinomial", {true, {}}},
          {"StatelessRandomNormal", {true, {}}},
          {"StatelessRandomUniform", {true, {}}},
          {"StatelessRandomUniformInt", {true, {}}},
          {"StatelessTruncatedNormal", {true, {}}},
          {"StopGradient", {true, {}}},
          {"StridedSliceGrad", {false, {0, 4}}},
          {"StringSplit", {true, {}}},
          {"StringToHashBucket", {true, {}}},
          {"StringToHashBucketFast", {true, {}}},
          {"StringToHashBucketStrong", {true, {}}},
          {"StringToNumber", {true, {}}},
          {"TFRecordReader", {true, {}}},
          {"Tanh", {true, {}}},
          {"TensorArray", {true, {}}},
          {"TensorArrayClose", {true, {}}},
          {"TensorArrayCloseV2", {true, {}}},
          {"TensorArrayCloseV3", {true, {}}},
          {"TensorArrayGrad", {true, {}}},
          {"TensorArrayGradV2", {true, {}}},
          {"TensorArrayGradV3", {true, {}}},
          {"TensorArrayGradWithShape", {true, {}}},
          {"TensorArrayScatter", {false, {2, 3}}},
          {"TensorArrayScatterV2", {false, {2, 3}}},
          {"TensorArrayScatterV3", {false, {2, 3}}},
          {"TensorArraySize", {true, {}}},
          {"TensorArraySizeV2", {true, {}}},
          {"TensorArraySizeV3", {true, {}}},
          {"TensorArraySplit", {false, {1, 2, 3}}},
          {"TensorArraySplitV2", {false, {1, 2, 3}}},
          {"TensorArraySplitV3", {false, {1, 2, 3}}},
          {"TensorArrayV2", {true, {}}},
          {"TensorArrayV3", {true, {}}},
          {"TensorArrayWrite", {false, {2, 3}}},
          {"TensorArrayWriteV2", {false, {2, 3}}},
          {"TensorArrayWriteV3", {false, {2, 3}}},
          {"TensorListConcatLists", {true, {}}},
          {"TensorListConcatV2", {false, {1, 2}}},
          {"TensorListElementShape", {true, {}}},
          {"TensorListFromTensor", {false, {1}}},
          {"TensorListGetItem", {false, {2}}},
          {"TensorListLength", {true, {}}},
          {"TensorListPopBack", {true, {}}},
          {"TensorListPushBack", {false, {0}}},
          {"TensorListPushBackBatch", {true, {}}},
          {"TensorListScatter", {false, {2}}},
          {"TensorListScatterV2", {false, {2, 3}}},
          {"TensorListStack", {true, {}}},
          {"TensorScatterAdd", {false, {0, 2}}},
          {"TensorScatterSub", {false, {0, 2}}},
          {"TensorScatterUpdate", {false, {0}}},
          {"TensorSummary", {true, {}}},
          {"TensorSummaryV2", {true, {}}},
          {"TextLineReader", {true, {}}},
          {"Timestamp", {true, {}}},
          {"TopKV2", {false, {1}}},
          {"Transpose", {false, {0}}},
          {"TridiagonalSolve", {false, {1}}},
          {"TruncateDiv", {true, {}}},
          {"TruncatedNormal", {true, {}}},
          {"Unpack", {true, {}}},
          {"UnsortedSegmentSum", {false, {0, 2}}},
          {"VarIsInitializedOp", {true, {}}},
          {"VariableShape", {true, {}}},
          {"WholeFileReader", {true, {}}},
          {"XlaClusterOutput", {true, {}}},
          {"XlaSharding", {true, {}}},
          {"ZerosLike", {true, {}}},
          {"VarHandleOp", {true, {}}},
      });

  auto it = m->find(op_name);

  if (it == m->end()) return false;

  *output = &it->second;
  return true;
}

bool OpGradientDoesntRequireOutputIndices(
    const string& op_name,
    std::pair<bool, tensorflow::gtl::FlatSet<int>>** output) {
  static tensorflow::gtl::FlatMap<
      string, std::pair<bool, tensorflow::gtl::FlatSet<int>>>* m =
      new tensorflow::gtl::FlatMap<
          string, std::pair<bool, tensorflow::gtl::FlatSet<int>>>({
          {"Abs", {true, {}}},
          {"AccumulateNV2", {true, {}}},
          {"Acos", {true, {}}},
          {"Add", {true, {}}},
          {"AddN", {true, {}}},
          {"AddV2", {true, {}}},
          {"AllToAll", {true, {}}},
          {"Angle", {true, {}}},
          {"ApproximateEqual", {true, {}}},
          {"ArgMax", {true, {}}},
          {"ArgMin", {true, {}}},
          {"AsString", {true, {}}},
          {"Asin", {true, {}}},
          {"Assert", {true, {}}},
          {"Assign", {true, {}}},
          {"AssignAdd", {true, {}}},
          {"AssignSub", {true, {}}},
          {"Atan", {true, {}}},
          {"Atan2", {true, {}}},
          {"Atanh", {true, {}}},
          {"AudioSummary", {true, {}}},
          {"AudioSummaryV2", {true, {}}},
          {"AvgPool", {true, {}}},
          {"AvgPool3D", {true, {}}},
          {"AvgPool3DGrad", {true, {}}},
          {"AvgPoolGrad", {true, {}}},
          {"BatchMatMul", {true, {}}},
          {"BatchMatMulV2", {true, {}}},
          {"BatchNormWithGlobalNormalization", {true, {}}},
          {"BatchToSpace", {true, {}}},
          {"BatchToSpaceND", {true, {}}},
          {"Betainc", {true, {}}},
          {"BiasAdd", {true, {}}},
          {"BiasAddGrad", {true, {}}},
          {"BiasAddV1", {true, {}}},
          {"BitwiseAnd", {true, {}}},
          {"BitwiseOr", {true, {}}},
          {"BitwiseXor", {true, {}}},
          {"BroadcastGradientArgs", {true, {}}},
          {"BroadcastTo", {true, {}}},
          {"CSRSparseMatrixToDense", {true, {}}},
          {"CTCGreedyDecoder", {true, {}}},
          {"CTCLoss", {false, {0}}},
          {"CTCLossV2", {false, {0}}},
          {"Cast", {true, {}}},
          {"Ceil", {true, {}}},
          {"CheckNumerics", {true, {}}},
          {"CheckNumericsV2", {true, {}}},
          {"CollectivePermute", {true, {}}},
          {"Complex", {true, {}}},
          {"Concat", {true, {}}},
          {"ConcatV2", {true, {}}},
          {"Conj", {true, {}}},
          {"ConjugateTranspose", {true, {}}},
          {"Const", {true, {}}},
          {"Conv2D", {true, {}}},
          {"Conv2DBackpropFilter", {true, {}}},
          {"Conv2DBackpropInput", {true, {}}},
          {"Conv3D", {true, {}}},
          {"Conv3DBackpropFilterV2", {true, {}}},
          {"Conv3DBackpropInputV2", {true, {}}},
          {"Cos", {true, {}}},
          {"Cosh", {true, {}}},
          {"CropAndResize", {true, {}}},
          {"Cross", {true, {}}},
          {"CrossReplicaSum", {true, {}}},
          {"Cumprod", {true, {}}},
          {"Cumsum", {true, {}}},
          {"DebugGradientIdentity", {true, {}}},
          {"DebugGradientRefIdentity", {true, {}}},
          {"DebugIdentityV2", {true, {}}},
          {"DecodeBase64", {true, {}}},
          {"DecodePaddedRaw", {true, {}}},
          {"DecodeRaw", {true, {}}},
          {"DeleteSessionTensor", {true, {}}},
          {"DenseToCSRSparseMatrix", {true, {}}},
          {"DenseToDenseSetOperation", {true, {}}},
          {"DenseToSparseSetOperation", {true, {}}},
          {"DepthToSpace", {true, {}}},
          {"DepthwiseConv2dNative", {true, {}}},
          {"DepthwiseConv2dNativeBackpropFilter", {true, {}}},
          {"DepthwiseConv2dNativeBackpropInput", {true, {}}},
          {"Diag", {true, {}}},
          {"DiagPart", {true, {}}},
          {"Digamma", {true, {}}},
          {"Dilation2D", {true, {}}},
          {"Div", {true, {}}},
          {"DivNoNan", {true, {}}},
          {"DrawBoundingBoxes", {true, {}}},
          {"DynamicPartition", {true, {}}},
          {"EditDistance", {true, {}}},
          {"Einsum", {true, {}}},
          {"EluGrad", {true, {}}},
          {"EncodeBase64", {true, {}}},
          {"EncodeProto", {true, {}}},
          {"EnsureShape", {true, {}}},
          {"Enter", {true, {}}},
          {"Equal", {true, {}}},
          {"Erf", {true, {}}},
          {"Erfc", {true, {}}},
          {"Exit", {true, {}}},
          {"ExpandDims", {true, {}}},
          {"Expint", {true, {}}},
          {"Expm1", {true, {}}},
          {"ExtractGlimpse", {true, {}}},
          {"FFT", {true, {}}},
          {"FFT2D", {true, {}}},
          {"FFT3D", {true, {}}},
          {"FakeQuantWithMinMaxArgs", {true, {}}},
          {"FakeQuantWithMinMaxVars", {true, {}}},
          {"FakeQuantWithMinMaxVarsPerChannel", {true, {}}},
          {"Fill", {true, {}}},
          {"FixedLengthRecordReader", {true, {}}},
          {"Floor", {true, {}}},
          {"FloorDiv", {true, {}}},
          {"FloorMod", {true, {}}},
          {"FractionalAvgPool", {false, {0}}},
          {"FresnelCos", {true, {}}},
          {"FresnelSin", {true, {}}},
          {"FusedBatchNorm", {false, {0, 1, 2}}},
          {"FusedBatchNormGrad", {true, {}}},
          {"FusedBatchNormGradV2", {true, {}}},
          {"FusedBatchNormGradV3", {true, {}}},
          {"FusedBatchNormV2", {false, {0, 1, 2}}},
          {"FusedBatchNormV3", {false, {0, 1, 2}}},
          {"Gather", {true, {}}},
          {"GatherNd", {true, {}}},
          {"GatherV2", {true, {}}},
          {"GenerateBoundingBoxProposals", {true, {}}},
          {"GenerateVocabRemapping", {true, {}}},
          {"GetSessionHandle", {true, {}}},
          {"GetSessionHandleV2", {true, {}}},
          {"GetSessionTensor", {true, {}}},
          {"Greater", {true, {}}},
          {"GreaterEqual", {true, {}}},
          {"HSVToRGB", {true, {}}},
          {"HashTable", {true, {}}},
          {"HashTableV2", {true, {}}},
          {"HistogramSummary", {true, {}}},
          {"IFFT", {true, {}}},
          {"IFFT2D", {true, {}}},
          {"IFFT3D", {true, {}}},
          {"IRFFT", {true, {}}},
          {"IRFFT2D", {true, {}}},
          {"Identity", {true, {}}},
          {"IdentityN", {true, {}}},
          {"IdentityReader", {true, {}}},
          {"Igamma", {true, {}}},
          {"Igammac", {true, {}}},
          {"Imag", {true, {}}},
          {"ImageProjectiveTransformV2", {true, {}}},
          {"ImageSummary", {true, {}}},
          {"InitializeTable", {true, {}}},
          {"InitializeTableFromTextFile", {true, {}}},
          {"InitializeTableFromTextFileV2", {true, {}}},
          {"InitializeTableV2", {true, {}}},
          {"InvGrad", {true, {}}},
          {"Invert", {true, {}}},
          {"InvertPermutation", {true, {}}},
          {"L2Loss", {true, {}}},
          {"LMDBReader", {true, {}}},
          {"LeakyRelu", {true, {}}},
          {"LeakyReluGrad", {true, {}}},
          {"LeftShift", {true, {}}},
          {"Less", {true, {}}},
          {"LessEqual", {true, {}}},
          {"Lgamma", {true, {}}},
          {"LinSpace", {true, {}}},
          {"LoadAndRemapMatrix", {true, {}}},
          {"Log", {true, {}}},
          {"Log1p", {true, {}}},
          {"LogMatrixDeterminant", {false, {0}}},
          {"LogicalAnd", {true, {}}},
          {"LogicalNot", {true, {}}},
          {"LogicalOr", {true, {}}},
          {"LookupTableFind", {true, {}}},
          {"LookupTableFindV2", {true, {}}},
          {"LookupTableInsert", {true, {}}},
          {"LookupTableInsertV2", {true, {}}},
          {"LookupTableSize", {true, {}}},
          {"LookupTableSizeV2", {true, {}}},
          {"LoopCond", {true, {}}},
          {"MatMul", {true, {}}},
          {"MatrixBandPart", {true, {}}},
          {"MatrixDiag", {true, {}}},
          {"MatrixDiagPart", {true, {}}},
          {"MatrixDiagPartV2", {true, {}}},
          {"MatrixDiagPartV3", {true, {}}},
          {"MatrixDiagV2", {true, {}}},
          {"MatrixDiagV3", {true, {}}},
          {"MatrixSetDiag", {true, {}}},
          {"MatrixSetDiagV2", {true, {}}},
          {"MatrixSetDiagV3", {true, {}}},
          {"MaxPool3DGrad", {true, {}}},
          {"MaxPool3DGradGrad", {true, {}}},
          {"MaxPoolGrad", {true, {}}},
          {"MaxPoolGradGrad", {true, {}}},
          {"MaxPoolGradV2", {true, {}}},
          {"MaxPoolWithArgmax", {false, {0}}},
          {"Maximum", {true, {}}},
          {"Merge", {false, {0}}},
          {"MergeSummary", {true, {}}},
          {"Minimum", {true, {}}},
          {"MirrorPad", {true, {}}},
          {"MirrorPadGrad", {true, {}}},
          {"Mul", {true, {}}},
          {"MulNoNan", {true, {}}},
          {"Multinomial", {true, {}}},
          {"MutableDenseHashTable", {true, {}}},
          {"MutableDenseHashTableV2", {true, {}}},
          {"MutableHashTable", {true, {}}},
          {"MutableHashTableOfTensors", {true, {}}},
          {"MutableHashTableOfTensorsV2", {true, {}}},
          {"MutableHashTableV2", {true, {}}},
          {"NcclAllReduce", {true, {}}},
          {"NcclBroadcast", {true, {}}},
          {"NcclReduce", {true, {}}},
          {"Neg", {true, {}}},
          {"NextAfter", {true, {}}},
          {"NextIteration", {true, {}}},
          {"NonMaxSuppression", {true, {}}},
          {"NonMaxSuppressionV2", {true, {}}},
          {"NonMaxSuppressionWithOverlaps", {true, {}}},
          {"NotEqual", {true, {}}},
          {"OneHot", {true, {}}},
          {"OnesLike", {true, {}}},
          {"OptionalFromValue", {true, {}}},
          {"OptionalGetValue", {true, {}}},
          {"Pack", {true, {}}},
          {"Pad", {true, {}}},
          {"PadV2", {true, {}}},
          {"ParameterizedTruncatedNormal", {true, {}}},
          {"ParseTensor", {true, {}}},
          {"PlaceholderWithDefault", {true, {}}},
          {"Polygamma", {true, {}}},
          {"PopulationCount", {true, {}}},
          {"PreventGradient", {true, {}}},
          {"Print", {true, {}}},
          {"Prod", {true, {}}},
          {"QuantizeAndDequantize", {true, {}}},
          {"QuantizeAndDequantizeV2", {true, {}}},
          {"QuantizeAndDequantizeV3", {true, {}}},
          {"QueueClose", {true, {}}},
          {"QueueEnqueue", {true, {}}},
          {"QueueEnqueueMany", {true, {}}},
          {"QueueSize", {true, {}}},
          {"RFFT", {true, {}}},
          {"RFFT2D", {true, {}}},
          {"RaggedGather", {true, {}}},
          {"RaggedRange", {true, {}}},
          {"RaggedTensorToSparse", {true, {}}},
          {"RaggedTensorToTensor", {true, {}}},
          {"RaggedTensorToVariant", {true, {}}},
          {"RandomCrop", {true, {}}},
          {"RandomStandardNormal", {true, {}}},
          {"RandomUniform", {true, {}}},
          {"Range", {true, {}}},
          {"Rank", {true, {}}},
          {"ReadVariableOp", {true, {}}},
          {"ReaderNumRecordsProduced", {true, {}}},
          {"ReaderNumWorkUnitsCompleted", {true, {}}},
          {"ReaderRead", {true, {}}},
          {"ReaderReadUpTo", {true, {}}},
          {"ReaderReset", {true, {}}},
          {"ReaderRestoreState", {true, {}}},
          {"ReaderSerializeState", {true, {}}},
          {"Real", {true, {}}},
          {"RealDiv", {true, {}}},
          {"ReciprocalGrad", {true, {}}},
          {"ReduceJoin", {true, {}}},
          {"RefEnter", {true, {}}},
          {"RefExit", {true, {}}},
          {"RefIdentity", {true, {}}},
          {"RefMerge", {false, {0}}},
          {"RefNextIteration", {true, {}}},
          {"RefSwitch", {true, {}}},
          {"RegexReplace", {true, {}}},
          {"Relu6Grad", {true, {}}},
          {"ReluGrad", {true, {}}},
          {"Reshape", {true, {}}},
          {"ResizeBicubic", {true, {}}},
          {"ResizeBilinear", {true, {}}},
          {"ResizeNearestNeighbor", {true, {}}},
          {"ResourceGather", {true, {}}},
          {"ResourceGatherNd", {true, {}}},
          {"Reverse", {true, {}}},
          {"ReverseSequence", {true, {}}},
          {"ReverseV2", {true, {}}},
          {"RightShift", {true, {}}},
          {"Rint", {true, {}}},
          {"Roll", {true, {}}},
          {"Round", {true, {}}},
          {"RsqrtGrad", {true, {}}},
          {"SampleDistortedBoundingBox", {true, {}}},
          {"SampleDistortedBoundingBoxV2", {true, {}}},
          {"ScalarSummary", {true, {}}},
          {"ScaleAndTranslate", {true, {}}},
          {"ScatterAdd", {true, {}}},
          {"ScatterDiv", {true, {}}},
          {"ScatterMul", {true, {}}},
          {"ScatterNd", {true, {}}},
          {"ScatterNdAdd", {true, {}}},
          {"ScatterNdNonAliasingAdd", {true, {}}},
          {"ScatterNdSub", {true, {}}},
          {"ScatterNdUpdate", {true, {}}},
          {"ScatterSub", {true, {}}},
          {"SdcaFprint", {true, {}}},
          {"SdcaShrinkL1", {true, {}}},
          {"SegmentMean", {true, {}}},
          {"SegmentSum", {true, {}}},
          {"Select", {true, {}}},
          {"SeluGrad", {true, {}}},
          {"SerializeTensor", {true, {}}},
          {"SetSize", {true, {}}},
          {"Shape", {true, {}}},
          {"SigmoidGrad", {true, {}}},
          {"Sign", {true, {}}},
          {"Sin", {true, {}}},
          {"Sinh", {true, {}}},
          {"Size", {true, {}}},
          {"SoftmaxCrossEntropyWithLogits", {false, {0}}},
          {"Softplus", {true, {}}},
          {"SoftplusGrad", {true, {}}},
          {"Softsign", {true, {}}},
          {"SpaceToBatch", {true, {}}},
          {"SpaceToBatchND", {true, {}}},
          {"SpaceToDepth", {true, {}}},
          {"SparseAdd", {false, {1, 2}}},
          {"SparseAddGrad", {true, {}}},
          {"SparseConcat", {true, {}}},
          {"SparseDenseCwiseAdd", {true, {}}},
          {"SparseDenseCwiseDiv", {true, {}}},
          {"SparseDenseCwiseMul", {true, {}}},
          {"SparseFillEmptyRows", {false, {0, 1, 2}}},
          {"SparseMatMul", {true, {}}},
          {"SparseMatrixAdd", {true, {}}},
          {"SparseMatrixMatMul", {true, {}}},
          {"SparseMatrixMul", {true, {}}},
          {"SparseMatrixNNZ", {true, {}}},
          {"SparseMatrixSparseMatMul", {true, {}}},
          {"SparseMatrixTranspose", {true, {}}},
          {"SparseMatrixZeros", {true, {}}},
          {"SparseReduceSum", {true, {}}},
          {"SparseReorder", {true, {}}},
          {"SparseSegmentMean", {true, {}}},
          {"SparseSegmentMeanWithNumSegments", {true, {}}},
          {"SparseSegmentSqrtN", {true, {}}},
          {"SparseSegmentSqrtNWithNumSegments", {true, {}}},
          {"SparseSegmentSum", {true, {}}},
          {"SparseSegmentSumWithNumSegments", {true, {}}},
          {"SparseSlice", {false, {1, 2}}},
          {"SparseSoftmaxCrossEntropyWithLogits", {false, {0}}},
          {"SparseSparseMaximum", {true, {}}},
          {"SparseSparseMinimum", {true, {}}},
          {"SparseTensorDenseAdd", {true, {}}},
          {"SparseTensorDenseMatMul", {true, {}}},
          {"SparseToDense", {true, {}}},
          {"SparseToSparseSetOperation", {true, {}}},
          {"Spence", {true, {}}},
          {"Split", {true, {}}},
          {"SplitV", {true, {}}},
          {"Square", {true, {}}},
          {"SquaredDifference", {true, {}}},
          {"Squeeze", {true, {}}},
          {"Stack", {true, {}}},
          {"StackClose", {true, {}}},
          {"StackPop", {true, {}}},
          {"StackPush", {true, {}}},
          {"StatelessMultinomial", {true, {}}},
          {"StatelessRandomNormal", {true, {}}},
          {"StatelessRandomUniform", {true, {}}},
          {"StatelessRandomUniformInt", {true, {}}},
          {"StatelessTruncatedNormal", {true, {}}},
          {"StopGradient", {true, {}}},
          {"StridedSlice", {true, {}}},
          {"StridedSliceGrad", {true, {}}},
          {"StringJoin", {true, {}}},
          {"StringSplit", {true, {}}},
          {"StringToHashBucket", {true, {}}},
          {"StringToHashBucketFast", {true, {}}},
          {"StringToHashBucketStrong", {true, {}}},
          {"StringToNumber", {true, {}}},
          {"Sub", {true, {}}},
          {"Sum", {true, {}}},
          {"Switch", {true, {}}},
          {"TFRecordReader", {true, {}}},
          {"TPUEmbeddingActivations", {true, {}}},
          {"TPUReplicatedInput", {true, {}}},
          {"Tan", {true, {}}},
          {"TanhGrad", {true, {}}},
          {"TensorArray", {true, {}}},
          {"TensorArrayClose", {true, {}}},
          {"TensorArrayCloseV2", {true, {}}},
          {"TensorArrayCloseV3", {true, {}}},
          {"TensorArrayConcat", {false, {0}}},
          {"TensorArrayConcatV2", {false, {0}}},
          {"TensorArrayConcatV3", {false, {0}}},
          {"TensorArrayGather", {true, {}}},
          {"TensorArrayGatherV2", {true, {}}},
          {"TensorArrayGatherV3", {true, {}}},
          {"TensorArrayGrad", {true, {}}},
          {"TensorArrayGradV2", {true, {}}},
          {"TensorArrayGradV3", {true, {}}},
          {"TensorArrayGradWithShape", {true, {}}},
          {"TensorArrayRead", {true, {}}},
          {"TensorArrayReadV2", {true, {}}},
          {"TensorArrayReadV3", {true, {}}},
          {"TensorArrayScatter", {true, {}}},
          {"TensorArrayScatterV2", {true, {}}},
          {"TensorArrayScatterV3", {true, {}}},
          {"TensorArraySize", {true, {}}},
          {"TensorArraySizeV2", {true, {}}},
          {"TensorArraySizeV3", {true, {}}},
          {"TensorArraySplit", {true, {}}},
          {"TensorArraySplitV2", {true, {}}},
          {"TensorArraySplitV3", {true, {}}},
          {"TensorArrayV2", {true, {}}},
          {"TensorArrayV3", {true, {}}},
          {"TensorArrayWrite", {true, {}}},
          {"TensorArrayWriteV2", {true, {}}},
          {"TensorArrayWriteV3", {true, {}}},
          {"TensorListConcat", {false, {0}}},
          {"TensorListConcatLists", {true, {}}},
          {"TensorListConcatV2", {false, {0}}},
          {"TensorListElementShape", {true, {}}},
          {"TensorListGather", {true, {}}},
          {"TensorListGetItem", {true, {}}},
          {"TensorListLength", {true, {}}},
          {"TensorListPopBack", {false, {1}}},
          {"TensorListPushBack", {true, {}}},
          {"TensorListPushBackBatch", {true, {}}},
          {"TensorListResize", {true, {}}},
          {"TensorListScatter", {true, {}}},
          {"TensorListScatterIntoExistingList", {true, {}}},
          {"TensorListScatterV2", {true, {}}},
          {"TensorListSetItem", {true, {}}},
          {"TensorListSplit", {true, {}}},
          {"TensorListStack", {true, {}}},
          {"TensorScatterAdd", {true, {}}},
          {"TensorScatterSub", {true, {}}},
          {"TensorScatterUpdate", {true, {}}},
          {"TensorSummary", {true, {}}},
          {"TensorSummaryV2", {true, {}}},
          {"TextLineReader", {true, {}}},
          {"Tile", {true, {}}},
          {"Timestamp", {true, {}}},
          {"TopK", {false, {0}}},
          {"TopKV2", {false, {0}}},
          {"Transpose", {true, {}}},
          {"TridiagonalMatMul", {true, {}}},
          {"TruncateDiv", {true, {}}},
          {"TruncatedNormal", {true, {}}},
          {"Unpack", {true, {}}},
          {"UnsortedSegmentSum", {true, {}}},
          {"VarIsInitializedOp", {true, {}}},
          {"VariableShape", {true, {}}},
          {"WholeFileReader", {true, {}}},
          {"Xdivy", {true, {}}},
          {"XlaClusterOutput", {true, {}}},
          {"XlaEinsum", {true, {}}},
          {"XlaSharding", {true, {}}},
          {"Xlog1py", {true, {}}},
          {"Xlogy", {true, {}}},
          {"ZerosLike", {true, {}}},
          {"Zeta", {true, {}}},
          {"VarHandleOp", {true, {}}},
      });

  auto it = m->find(op_name);

  if (it == m->end()) return false;

  *output = &it->second;
  return true;
}