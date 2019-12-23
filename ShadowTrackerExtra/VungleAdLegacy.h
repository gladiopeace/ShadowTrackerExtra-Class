//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleAd.h"

#import "NSCoding.h"
#import "VungleValidatableAd.h"

@class NSMutableArray, NSString;

@interface VungleAdLegacy : VungleAd <NSCoding, VungleValidatableAd>
{
    _Bool _ctaEnabled;
    _Bool _ctaDisplayOntouch;
    _Bool _isPersistent;
    int _countdownDelay;
    float _closeDelay;
    float _closeDelayIncentivized;
    float _ctaShowDelay;
    float _ctaButtonClickArea;
    NSMutableArray *_parts;
    long long _state;
    NSString *_md5;
    NSString *_ctaURL;
    NSString *_ctaURLResolved;
}

@property(nonatomic) _Bool isPersistent; // @synthesize isPersistent=_isPersistent;
@property(nonatomic) float ctaButtonClickArea; // @synthesize ctaButtonClickArea=_ctaButtonClickArea;
@property(nonatomic) float ctaShowDelay; // @synthesize ctaShowDelay=_ctaShowDelay;
@property(nonatomic) _Bool ctaDisplayOntouch; // @synthesize ctaDisplayOntouch=_ctaDisplayOntouch;
@property(nonatomic) _Bool ctaEnabled; // @synthesize ctaEnabled=_ctaEnabled;
@property(copy, nonatomic) NSString *ctaURLResolved; // @synthesize ctaURLResolved=_ctaURLResolved;
@property(copy, nonatomic) NSString *ctaURL; // @synthesize ctaURL=_ctaURL;
@property(nonatomic) float closeDelayIncentivized; // @synthesize closeDelayIncentivized=_closeDelayIncentivized;
@property(nonatomic) float closeDelay; // @synthesize closeDelay=_closeDelay;
@property(nonatomic) int countdownDelay; // @synthesize countdownDelay=_countdownDelay;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *parts; // @synthesize parts=_parts;
- (void).cxx_destruct;
- (_Bool)isEqualToVungleAdLegacyClass:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (_Bool)isDownloaded;
- (void)addPart:(id)arg1;
- (void)createAdPartsWithDictionary:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
