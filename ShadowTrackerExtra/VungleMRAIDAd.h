//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VungleAd.h"

#import "NSCoding-Protocol.h"

@class NSURL;

@interface VungleMRAIDAd : VungleAd <NSCoding>
{
    long long _state;
    NSURL *_expectedLocalTemplateURL;
}

@property(copy, nonatomic) NSURL *expectedLocalTemplateURL; // @synthesize expectedLocalTemplateURL=_expectedLocalTemplateURL;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)isEqualToVungleMRAIDAd:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

