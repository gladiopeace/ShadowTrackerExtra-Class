//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (BLYJCE)
- (id)dataByDECryptDESWithKey:(id)arg1 error:(id *)arg2;
- (id)dataByENCryptDESWithKey:(id)arg1 error:(id *)arg2;
- (id)dataByGZipDecompressingDataWithWindowSize:(int)arg1 error:(id *)arg2;
- (id)dataByGZipDecompressingDataWithError:(id *)arg1;
- (id)dataByGZipCompressingAtLevel:(int)arg1 windowSize:(int)arg2 memoryLevel:(int)arg3 strategy:(int)arg4 error:(id *)arg5;
- (id)dataByGZipCompressingWithError:(id *)arg1;
@end

