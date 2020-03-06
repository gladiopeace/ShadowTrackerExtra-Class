//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FNFPlayerFramesBuffer;
@protocol FNFDecompressionSession, FNFDecompressionSessionDelegate;

@protocol FNFDecompressionSessionFactory
+ (id <FNFDecompressionSession>)decompressionSessionWithDecoderType:(unsigned long long)arg1 delegate:(id <FNFDecompressionSessionDelegate>)arg2 sampleBufferFormatDescription:(struct opaqueCMFormatDescription *)arg3 videoSize:(struct CGSize)arg4 numOfDecoderThreads:(unsigned int)arg5 framesBuffer:(FNFPlayerFramesBuffer *)arg6 sampleBufferRequestThreshold:(int)arg7;
@end

