//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"

@class GADEventContext, NSString;

@interface GADVideoLoggingContextSource : NSObject <GADEventContextSource>
{
    GADEventContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GADEventContext *context;
- (id)initWithWebAdView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

