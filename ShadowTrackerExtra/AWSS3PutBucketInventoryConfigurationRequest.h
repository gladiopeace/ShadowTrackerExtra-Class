//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3InventoryConfiguration, NSString;

@interface AWSS3PutBucketInventoryConfigurationRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_identifier;
    AWSS3InventoryConfiguration *_inventoryConfiguration;
}

+ (id)inventoryConfigurationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSS3InventoryConfiguration *inventoryConfiguration; // @synthesize inventoryConfiguration=_inventoryConfiguration;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

