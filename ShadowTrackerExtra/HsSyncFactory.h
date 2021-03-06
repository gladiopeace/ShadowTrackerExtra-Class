//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HsSyncController;
@protocol HsDataSyncCoordinator;

@interface HsSyncFactory : NSObject
{
    HsSyncController *_syncController;
    id <HsDataSyncCoordinator> _dataSyncCoordinator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <HsDataSyncCoordinator> dataSyncCoordinator; // @synthesize dataSyncCoordinator=_dataSyncCoordinator;
@property(retain, nonatomic) HsSyncController *syncController; // @synthesize syncController=_syncController;
- (void).cxx_destruct;

@end

