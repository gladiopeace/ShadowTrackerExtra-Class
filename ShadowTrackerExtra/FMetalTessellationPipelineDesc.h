//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FApplePlatformObject.h"

@class MTLVertexDescriptor;

@interface FMetalTessellationPipelineDesc : FApplePlatformObject
{
    MTLVertexDescriptor *_DomainVertexDescriptor;
    unsigned long long _TessellationInputControlPointBufferIndex;
    unsigned long long _TessellationOutputControlPointBufferIndex;
    unsigned long long _TessellationPatchControlPointOutSize;
    unsigned long long _TessellationPatchConstBufferIndex;
    unsigned long long _TessellationInputPatchConstBufferIndex;
    unsigned long long _TessellationPatchConstOutSize;
    unsigned long long _TessellationTessFactorOutSize;
    unsigned long long _TessellationFactorBufferIndex;
    unsigned long long _TessellationPatchCountBufferIndex;
    unsigned long long _TessellationControlPointIndexBufferIndex;
    unsigned long long _TessellationIndexBufferIndex;
    unsigned long long _DSNumUniformBuffers;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (CDStruct_eb6fb79d *)classAllocator;
@property(nonatomic) unsigned long long DSNumUniformBuffers; // @synthesize DSNumUniformBuffers=_DSNumUniformBuffers;
@property(nonatomic) unsigned long long TessellationIndexBufferIndex; // @synthesize TessellationIndexBufferIndex=_TessellationIndexBufferIndex;
@property(nonatomic) unsigned long long TessellationControlPointIndexBufferIndex; // @synthesize TessellationControlPointIndexBufferIndex=_TessellationControlPointIndexBufferIndex;
@property(nonatomic) unsigned long long TessellationPatchCountBufferIndex; // @synthesize TessellationPatchCountBufferIndex=_TessellationPatchCountBufferIndex;
@property(nonatomic) unsigned long long TessellationFactorBufferIndex; // @synthesize TessellationFactorBufferIndex=_TessellationFactorBufferIndex;
@property(nonatomic) unsigned long long TessellationTessFactorOutSize; // @synthesize TessellationTessFactorOutSize=_TessellationTessFactorOutSize;
@property(nonatomic) unsigned long long TessellationPatchConstOutSize; // @synthesize TessellationPatchConstOutSize=_TessellationPatchConstOutSize;
@property(nonatomic) unsigned long long TessellationInputPatchConstBufferIndex; // @synthesize TessellationInputPatchConstBufferIndex=_TessellationInputPatchConstBufferIndex;
@property(nonatomic) unsigned long long TessellationPatchConstBufferIndex; // @synthesize TessellationPatchConstBufferIndex=_TessellationPatchConstBufferIndex;
@property(nonatomic) unsigned long long TessellationPatchControlPointOutSize; // @synthesize TessellationPatchControlPointOutSize=_TessellationPatchControlPointOutSize;
@property(nonatomic) unsigned long long TessellationOutputControlPointBufferIndex; // @synthesize TessellationOutputControlPointBufferIndex=_TessellationOutputControlPointBufferIndex;
@property(nonatomic) unsigned long long TessellationInputControlPointBufferIndex; // @synthesize TessellationInputControlPointBufferIndex=_TessellationInputControlPointBufferIndex;
@property(retain, nonatomic) MTLVertexDescriptor *DomainVertexDescriptor; // @synthesize DomainVertexDescriptor=_DomainVertexDescriptor;
- (void)dealloc;

@end
