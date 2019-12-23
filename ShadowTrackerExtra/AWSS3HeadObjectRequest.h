//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSDate, NSNumber, NSString;

@interface AWSS3HeadObjectRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_ifMatch;
    NSDate *_ifModifiedSince;
    NSString *_ifNoneMatch;
    NSDate *_ifUnmodifiedSince;
    NSString *_key;
    NSNumber *_partNumber;
    NSString *_range;
    long long _requestPayer;
    NSString *_SSECustomerAlgorithm;
    NSString *_SSECustomerKey;
    NSString *_SSECustomerKeyMD5;
    NSString *_versionId;
}

+ (id)requestPayerJSONTransformer;
+ (id)ifUnmodifiedSinceJSONTransformer;
+ (id)ifModifiedSinceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(retain, nonatomic) NSString *SSECustomerKeyMD5; // @synthesize SSECustomerKeyMD5=_SSECustomerKeyMD5;
@property(retain, nonatomic) NSString *SSECustomerKey; // @synthesize SSECustomerKey=_SSECustomerKey;
@property(retain, nonatomic) NSString *SSECustomerAlgorithm; // @synthesize SSECustomerAlgorithm=_SSECustomerAlgorithm;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSString *range; // @synthesize range=_range;
@property(retain, nonatomic) NSNumber *partNumber; // @synthesize partNumber=_partNumber;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSDate *ifUnmodifiedSince; // @synthesize ifUnmodifiedSince=_ifUnmodifiedSince;
@property(retain, nonatomic) NSString *ifNoneMatch; // @synthesize ifNoneMatch=_ifNoneMatch;
@property(retain, nonatomic) NSDate *ifModifiedSince; // @synthesize ifModifiedSince=_ifModifiedSince;
@property(retain, nonatomic) NSString *ifMatch; // @synthesize ifMatch=_ifMatch;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end
