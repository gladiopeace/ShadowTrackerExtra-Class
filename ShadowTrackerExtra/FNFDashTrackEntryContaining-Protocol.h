//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FNFMpdTimelineEntry;

@protocol FNFDashTrackEntryContaining <NSObject>
- (int)sequenceIndexForRelativeTime:(unsigned int)arg1;
- (unsigned int)relativeStartTimeForEntryAtIndex:(int)arg1;
- (FNFMpdTimelineEntry *)timelineEntryAtIndex:(int)arg1;
- (FNFMpdTimelineEntry *)lastEntry;
- (FNFMpdTimelineEntry *)firstEntry;
- (int)count;
@end

