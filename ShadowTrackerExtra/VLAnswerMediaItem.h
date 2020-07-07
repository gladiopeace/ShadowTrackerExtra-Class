//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL;

@interface VLAnswerMediaItem : NSObject <NSCopying>
{
    unsigned long long _type;
    NSString *_name;
    NSString *_url;
    NSString *_resourceId;
    NSURL *_imageURL;
    NSURL *_cardImageURL;
    NSString *_videoId;
    long long _videoDuration;
    long long _videoSize;
    long long _views;
    NSArray *_divItems;
}

@property(copy, nonatomic) NSArray *divItems; // @synthesize divItems=_divItems;
@property(nonatomic) long long views; // @synthesize views=_views;
@property(nonatomic) long long videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSURL *cardImageURL; // @synthesize cardImageURL=_cardImageURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGSize cellSize;

@end
