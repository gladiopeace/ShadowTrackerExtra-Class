//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3MetricsConfiguration;

@interface AWSS3GetBucketMetricsConfigurationOutput : AWSModel
{
    AWSS3MetricsConfiguration *_metricsConfiguration;
}

+ (id)metricsConfigurationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSS3MetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
- (void).cxx_destruct;

@end
