//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdQualityRule : NSObject
{
    _Bool _continuous;
    float _viewableRatio;
    CDUnknownBlockType _endCallback;
    double _viewableSeconds;
}

+ (id)ruleWithViewableRatio:(float)arg1 viewableSeconds:(double)arg2 continuous:(_Bool)arg3 endCallback:(CDUnknownBlockType)arg4;
+ (id)viewableImpressionRuleWithEndCallback:(CDUnknownBlockType)arg1;
+ (id)mrcRuleWithEndCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double viewableSeconds; // @synthesize viewableSeconds=_viewableSeconds;
@property(readonly, nonatomic) float viewableRatio; // @synthesize viewableRatio=_viewableRatio;
@property(readonly, copy, nonatomic) CDUnknownBlockType endCallback; // @synthesize endCallback=_endCallback;
@property(readonly, nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
- (void).cxx_destruct;
- (id)init;
- (id)initWithViewableRatio:(float)arg1 viewableSeconds:(double)arg2 continuous:(_Bool)arg3 endCallback:(CDUnknownBlockType)arg4;

@end

