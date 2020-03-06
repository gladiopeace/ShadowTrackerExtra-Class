//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GtalkRosterQuery : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int avatarHeight; // @dynamic avatarHeight;
@property(nonatomic) int avatarWidth; // @dynamic avatarWidth;
@property(copy, nonatomic) NSString *etag; // @dynamic etag;
@property(nonatomic) _Bool hasAvatarHeight; // @dynamic hasAvatarHeight;
@property(nonatomic) _Bool hasAvatarWidth; // @dynamic hasAvatarWidth;
@property(nonatomic) _Bool hasEtag; // @dynamic hasEtag;
@property(nonatomic) _Bool hasNotModified; // @dynamic hasNotModified;
@property(retain, nonatomic) NSMutableArray *itemArray; // @dynamic itemArray;
@property(readonly, nonatomic) unsigned long long itemArray_Count; // @dynamic itemArray_Count;
@property(nonatomic) _Bool notModified; // @dynamic notModified;

@end

