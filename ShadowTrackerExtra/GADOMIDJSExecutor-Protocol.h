//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol GADOMIDJSExecutor <NSObject>
@property(readonly, nonatomic) id jsEnvironment;
@property(readonly, nonatomic) _Bool supportBackgroundThread;
- (void)injectJavaScriptFromString:(NSString *)arg1;
@end

