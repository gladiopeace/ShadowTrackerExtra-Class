//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GADServerSideVerificationOptions : NSObject <NSCopying>
{
    NSString *_userIdentifier;
    NSString *_customRewardString;
}

@property(copy, nonatomic) NSString *customRewardString; // @synthesize customRewardString=_customRewardString;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

