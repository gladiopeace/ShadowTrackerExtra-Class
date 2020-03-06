//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdQualityRule, FBAdQualityStatistics;

@interface FBAdQualityTest : NSObject
{
    _Bool _ended;
    _Bool _passed;
    _Bool _complete;
    FBAdQualityStatistics *_testStatistics;
    FBAdQualityRule *_rule;
}

+ (id)testWithRule:(id)arg1;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) _Bool passed; // @synthesize passed=_passed;
@property(nonatomic) _Bool ended; // @synthesize ended=_ended;
@property(readonly, nonatomic) FBAdQualityRule *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) FBAdQualityStatistics *testStatistics; // @synthesize testStatistics=_testStatistics;
- (void).cxx_destruct;
- (void)onEnd;
- (void)onComplete;
- (void)onPassed;
- (void)resetContinuity;
- (void)registerProgress:(double)arg1 viewableRatio:(float)arg2;
- (void)registerEnd;
- (id)initWithRule:(id)arg1;

@end

