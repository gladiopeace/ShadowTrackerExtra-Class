//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FApplePlatformObject.h"

#import "MTLParallelRenderCommandEncoder-Protocol.h"

@class FMetalDebugCommandBuffer, MTLRenderPassDescriptor, NSString;
@protocol MTLDevice, MTLParallelRenderCommandEncoder;

@interface FMetalDebugParallelRenderCommandEncoder : FApplePlatformObject <MTLParallelRenderCommandEncoder>
{
    id <MTLParallelRenderCommandEncoder> Inner;
    FMetalDebugCommandBuffer *Buffer;
    MTLRenderPassDescriptor *RenderPassDescriptor;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (CDStruct_eb6fb79d *)classAllocator;
@property(readonly, retain) MTLRenderPassDescriptor *RenderPassDescriptor; // @synthesize RenderPassDescriptor;
@property(readonly, retain) FMetalDebugCommandBuffer *Buffer; // @synthesize Buffer;
@property(readonly, retain) id <MTLParallelRenderCommandEncoder> Inner; // @synthesize Inner;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)renderCommandEncoder;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithEncoder:(id)arg1 andCommandBuffer:(id)arg2 withDescriptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

