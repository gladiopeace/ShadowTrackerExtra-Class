//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSModel.h"

@class NSArray;

@interface AWSS3S3KeyFilter : AWSModel
{
    NSArray *_filterRules;
}

+ (id)filterRulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *filterRules; // @synthesize filterRules=_filterRules;
- (void).cxx_destruct;

@end

