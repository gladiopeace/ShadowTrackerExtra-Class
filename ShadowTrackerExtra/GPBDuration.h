//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@interface GPBDuration : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic) double timeIntervalSince1970;
@property(nonatomic) double timeInterval;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeInterval:(double)arg1;

// Remaining properties
@property(nonatomic) int nanos; // @dynamic nanos;
@property(nonatomic) long long seconds; // @dynamic seconds;

@end

