//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSessionDataTask.h>

@interface NSURLSessionDataTask (_AFStateObserving)
+ (void)swizzleResumeAndSuspendMethodForClass:(Class)arg1;
+ (void)load;
- (void)af_suspend;
- (void)af_resume;
- (long long)state;
@end

