//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TWTRTwitterText : NSObject
{
}

+ (id)validDomainSucceedingCharRegexp;
+ (id)invalidURLWithoutProtocolPrecedingCharSet;
+ (id)endMentionRegexp;
+ (id)validReplyRegexp;
+ (id)validMentionOrListRegexp;
+ (id)validSymbolRegexp;
+ (id)endHashtagRegexp;
+ (id)validHashtagRegexp;
+ (id)validTCOURLRegexp;
+ (id)validSpecialShortDomainRegexp;
+ (id)invalidShortDomainRegexp;
+ (id)validASCIIDomainRegexp;
+ (id)URLRegexpForValidation;
+ (id)simplifiedValidURLRegexp;
+ (long long)remainingCharacterCount:(id)arg1 httpURLLength:(unsigned long long)arg2 httpsURLLength:(unsigned long long)arg3;
+ (long long)remainingCharacterCount:(id)arg1;
+ (unsigned long long)tweetLength:(id)arg1 httpURLLength:(unsigned long long)arg2 httpsURLLength:(unsigned long long)arg3;
+ (id)validHashtagBoundaryCharacterSet;
+ (unsigned long long)tweetLength:(id)arg1;
+ (id)repliedScreenNameInText:(id)arg1;
+ (id)mentionsOrListsInText:(id)arg1;
+ (id)mentionedScreenNamesInText:(id)arg1;
+ (id)symbolsInText:(id)arg1 withURLEntities:(id)arg2;
+ (id)symbolsInText:(id)arg1 checkingURLOverlap:(_Bool)arg2;
+ (id)hashtagsInText:(id)arg1 withURLEntities:(id)arg2;
+ (id)hashtagsInText:(id)arg1 checkingURLOverlap:(_Bool)arg2;
+ (id)URLsInText:(id)arg1;
+ (id)entitiesInText:(id)arg1;

@end

