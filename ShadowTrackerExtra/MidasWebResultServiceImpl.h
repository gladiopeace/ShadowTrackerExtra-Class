//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MidasWebResultService-Protocol.h"

@class MidasResultWebViewController, NSString;

@interface MidasWebResultServiceImpl : NSObject <MidasWebResultService>
{
    MidasResultWebViewController *_ctrl;
}

+ (void)load;
@property(retain, nonatomic) MidasResultWebViewController *ctrl; // @synthesize ctrl=_ctrl;
- (void).cxx_destruct;
- (void)showPageWithOperation:(id)arg1 webViewClosedBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

