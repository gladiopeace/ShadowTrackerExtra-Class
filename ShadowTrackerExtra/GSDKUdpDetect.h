//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSDKUdpDetect : NSObject
{
    int _mSocketfd;
    unsigned int _tag;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
@property(nonatomic) int mSocketfd; // @synthesize mSocketfd=_mSocketfd;
- (id)isUDPConnect:(id)arg1 Port:(int)arg2;
- (void)stopSpeedTest;
- (int)getV6SpeedSock;
- (int)getSpeedSock;

@end

