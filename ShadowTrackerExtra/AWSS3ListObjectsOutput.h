//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSS3ListObjectsOutput : AWSModel
{
    NSArray *_commonPrefixes;
    NSArray *_contents;
    NSString *_delimiter;
    long long _encodingType;
    NSNumber *_isTruncated;
    NSString *_marker;
    NSNumber *_maxKeys;
    NSString *_name;
    NSString *_nextMarker;
    NSString *_prefix;
}

+ (id)encodingTypeJSONTransformer;
+ (id)contentsJSONTransformer;
+ (id)commonPrefixesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *nextMarker; // @synthesize nextMarker=_nextMarker;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *maxKeys; // @synthesize maxKeys=_maxKeys;
@property(retain, nonatomic) NSString *marker; // @synthesize marker=_marker;
@property(retain, nonatomic) NSNumber *isTruncated; // @synthesize isTruncated=_isTruncated;
@property(nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSArray *commonPrefixes; // @synthesize commonPrefixes=_commonPrefixes;
- (void).cxx_destruct;

@end

