//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GADNetworkUtilizationStatistics : NSObject
{
    struct NSDictionary *_transmittedByteCounts;
    struct NSDictionary *_receivedByteCounts;
}

+ (id)currentStatistics;
@property(readonly, nonatomic) NSDictionary *receivedByteCounts; // @synthesize receivedByteCounts=_receivedByteCounts;
@property(readonly, nonatomic) NSDictionary *transmittedByteCounts; // @synthesize transmittedByteCounts=_transmittedByteCounts;
- (void).cxx_destruct;
- (id)minusStatistics:(id)arg1;
- (id)plusStatistics:(id)arg1;
- (id)updatedStatistics;
- (id)init;
- (id)initWithTransmittedByteCounts:(struct NSDictionary *)arg1 receivedByteCounts:(struct NSDictionary *)arg2;

@end

