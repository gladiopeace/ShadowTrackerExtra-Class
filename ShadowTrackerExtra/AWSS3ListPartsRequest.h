//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class NSNumber, NSString;

@interface AWSS3ListPartsRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_key;
    NSNumber *_maxParts;
    NSNumber *_partNumberMarker;
    long long _requestPayer;
    NSString *_uploadId;
}

+ (id)requestPayerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSNumber *partNumberMarker; // @synthesize partNumberMarker=_partNumberMarker;
@property(retain, nonatomic) NSNumber *maxParts; // @synthesize maxParts=_maxParts;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

