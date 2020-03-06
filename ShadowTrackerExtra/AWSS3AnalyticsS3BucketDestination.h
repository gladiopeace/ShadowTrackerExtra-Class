//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3AnalyticsS3BucketDestination : AWSModel
{
    NSString *_bucket;
    NSString *_bucketAccountId;
    long long _format;
    NSString *_prefix;
}

+ (id)formatJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *bucketAccountId; // @synthesize bucketAccountId=_bucketAccountId;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

