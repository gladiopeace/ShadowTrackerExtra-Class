//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface HsFetchConversationsResponse : NSObject
{
    _Bool _issueExists;
    NSString *_cursor;
    NSArray *_conversations;
    NSNumber *_hasOlderMessages;
}

@property(retain, nonatomic) NSNumber *hasOlderMessages; // @synthesize hasOlderMessages=_hasOlderMessages;
@property(nonatomic) _Bool issueExists; // @synthesize issueExists=_issueExists;
@property(retain) NSArray *conversations; // @synthesize conversations=_conversations;
@property(retain) NSString *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (id)initWithCursor:(id)arg1 conversations:(id)arg2 issueExists:(_Bool)arg3 hasOlderMessages:(id)arg4;

@end
