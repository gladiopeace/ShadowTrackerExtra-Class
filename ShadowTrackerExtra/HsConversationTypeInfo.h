//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HsConversationTypeInfo : NSObject
{
    unsigned long long _issueType;
    NSString *_issueId;
    NSString *_preIssueId;
}

@property(retain) NSString *preIssueId; // @synthesize preIssueId=_preIssueId;
@property(retain) NSString *issueId; // @synthesize issueId=_issueId;
@property unsigned long long issueType; // @synthesize issueType=_issueType;
- (void).cxx_destruct;
- (id)currentId;

@end

