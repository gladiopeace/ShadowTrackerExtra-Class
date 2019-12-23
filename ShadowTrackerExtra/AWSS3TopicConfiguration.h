//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3NotificationConfigurationFilter, NSArray, NSString;

@interface AWSS3TopicConfiguration : AWSModel
{
    NSArray *_events;
    AWSS3NotificationConfigurationFilter *_filter;
    NSString *_identifier;
    NSString *_topicArn;
}

+ (id)filterJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *topicArn; // @synthesize topicArn=_topicArn;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AWSS3NotificationConfigurationFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
- (void).cxx_destruct;

@end
