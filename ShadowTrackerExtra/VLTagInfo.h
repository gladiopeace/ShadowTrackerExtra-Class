//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VLTagInfo : NSObject
{
    NSString *_tagId;
    NSString *_tagName;
    NSArray *_subTagList;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain) NSArray *subTagList; // @synthesize subTagList=_subTagList;
@property(retain) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end
