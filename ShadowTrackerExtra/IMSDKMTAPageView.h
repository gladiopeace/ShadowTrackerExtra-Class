//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMSDKMTAEvent.h"

#import "IMSDKMTAEventProtocol-Protocol.h"

@class NSString;

@interface IMSDKMTAPageView : IMSDKMTAEvent <IMSDKMTAEventProtocol>
{
    unsigned int _duration;
    NSString *_page;
    NSString *_refer;
}

@property(copy, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property unsigned int duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)init;
- (void)encode:(id)arg1;
- (int)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

