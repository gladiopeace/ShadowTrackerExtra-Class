//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FNFMp4StreamingReader <NSObject>
- (_Bool)hasEnoughDataForBytes:(unsigned long long)arg1;
- (void)moveHead:(unsigned long long)arg1;
- (const char *)bytesAtHead:(long long)arg1;
@end

