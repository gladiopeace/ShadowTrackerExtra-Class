//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3ReplicationConfiguration, NSString;

@interface AWSS3PutBucketReplicationRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_contentMD5;
    AWSS3ReplicationConfiguration *_replicationConfiguration;
}

+ (id)replicationConfigurationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSS3ReplicationConfiguration *replicationConfiguration; // @synthesize replicationConfiguration=_replicationConfiguration;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

