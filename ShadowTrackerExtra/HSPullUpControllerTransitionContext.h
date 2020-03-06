//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsPullUpViewControllerTransitionCoordinator-Protocol.h"

@class NSString;

@interface HSPullUpControllerTransitionContext : NSObject <HsPullUpViewControllerTransitionCoordinator>
{
    CDUnknownBlockType _animation;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animation; // @synthesize animation=_animation;
- (void).cxx_destruct;
- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

