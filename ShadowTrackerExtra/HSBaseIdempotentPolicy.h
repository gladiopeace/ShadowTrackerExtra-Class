//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HSIdempotentPolicy-Protocol.h"

@class NSString;

@interface HSBaseIdempotentPolicy : NSObject <HSIdempotentPolicy>
{
}

- (_Bool)shouldMarkRequestAsCompleted:(int)arg1;
- (_Bool)isRequestCompleted:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

