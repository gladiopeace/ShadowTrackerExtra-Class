//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMediaViewDefaultVideoRenderer;

@protocol FBMediaViewDefaultVideoRendererDelegate <NSObject>
- (void)defaultVideoRendererVideoDidComplete:(FBMediaViewDefaultVideoRenderer *)arg1;
- (void)defaultVideoRendererDidPlay:(FBMediaViewDefaultVideoRenderer *)arg1;
- (void)defaultVideoRendererDidPause:(FBMediaViewDefaultVideoRenderer *)arg1;
- (void)defaultVideoRenderer:(FBMediaViewDefaultVideoRenderer *)arg1 volumeDidChange:(float)arg2;
- (void)defaultVideoRendererWasTapped:(FBMediaViewDefaultVideoRenderer *)arg1;
@end

