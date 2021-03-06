//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMetalDebugCommandEncoder.h"

#import "MTLComputeCommandEncoder-Protocol.h"

@class FMetalDebugCommandBuffer, FMetalShaderPipeline, NSString;
@protocol MTLComputeCommandEncoder, MTLDevice;

@interface FMetalDebugComputeCommandEncoder : FMetalDebugCommandEncoder <MTLComputeCommandEncoder>
{
    id <MTLComputeCommandEncoder> Inner;
    FMetalDebugCommandBuffer *Buffer;
    FMetalShaderPipeline *Pipeline;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (CDStruct_eb6fb79d *)classAllocator;
@property(retain, nonatomic) FMetalShaderPipeline *Pipeline; // @synthesize Pipeline;
@property(readonly, retain) FMetalDebugCommandBuffer *Buffer; // @synthesize Buffer;
@property(readonly, retain) id <MTLComputeCommandEncoder> Inner; // @synthesize Inner;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)commandEncoder;
- (void)validate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)useHeap:(id)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)waitForFence:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)popDebugGroup;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithEncoder:(id)arg1 andCommandBuffer:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long dispatchType;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

