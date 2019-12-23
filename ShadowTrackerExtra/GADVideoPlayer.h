//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, GADAVPlayerItemLogger, GADObserverCollection, GADVideoConfiguration, GADWebAdView, NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString;

@interface GADVideoPlayer : NSObject
{
    GADWebAdView *_adView;
    id <GADAVPlayerItemProvider> _playerItemProvider;
    GADVideoConfiguration *_videoConfiguration;
    GADObserverCollection *_observers;
    GADObserverCollection *_didActivateObservers;
    GADObserverCollection *_willDeactivateObservers;
    double _playerActionTimeoutInterval;
    id <GADEventContextSource> _loggingContextSource;
    _Bool _appActive;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    NSMutableArray *_periodicTimeObservers;
    _Bool _playing;
    _Bool _isVisible;
    _Bool _hasPlaybackStalledAtLeastOnce;
    _Bool _isObservingPlayer;
    _Bool _isObservingPlayerRate;
    _Bool _isObservingPlayerItem;
    _Bool _isObservingPlayerItemLoadedTimeRanges;
    _Bool _loaded;
    long long _numberOfBlocksMomentarilyPausedPlayer;
    NSString *_lastPlayerTimeIntervalString;
    GADAVPlayerItemLogger *_playerItemLogger;
    NSMutableArray *_playbackStartObservers;
    NSObject<OS_dispatch_queue> *_actionLockQueue;
    NSOperationQueue *_actionOperationQueue;
    NSNumber *_scheduledPlay;
    NSNumber *_scheduledMute;
    NSNumber *_scheduledVolume;
    _Bool _scheduledActionUserInitiated;
    NSObject<OS_dispatch_semaphore> *_actionSemaphore;
    // Error parsing type: AB, name: _canPlayThroughPosted
    // Error parsing type: AB, name: _hasPlaybackEnded
    NSMutableArray *_keyValueObserverControllers;
}

- (void).cxx_destruct;
- (void)notifyVideoRateChanged;
- (void)notifyVideoPlayerWithNewStatus:(long long)arg1;
- (void)notifyVideoReadyToPlay;
- (void)notifyVideoPlayerWithTime:(CDStruct_1b6d18a9)arg1;
- (void)notifyPlayerMetadata;
- (void)itemDidPlayToEnd:(id)arg1;
- (void)handlePlayerRateChange;
- (void)observePlayerItemLoadedTimeRanges;
- (void)observePlayerItem;
- (void)observePlayerStatus;
- (void)observePlayerRate;
- (void)observePlayer;
- (void)handlePlayerItemDurationLoadUpdate;
- (void)reattachPlayersCurrentItem;
- (void)optimizePlayerResources;
- (void)playerVisibilityDidChange:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addPlaybackStartListenerUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
@property(readonly) _Bool hasPlaybackEnded;
@property(readonly) _Bool hasPostedCanPlayThrough;
- (void)momentarilyPauseAndExecuteBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)videoSize;
- (void)seekToTime:(double)arg1;
- (void)flushPlayerActionPlaying:(_Bool)arg1 volume:(float)arg2 muted:(_Bool)arg3 userInitiated:(_Bool)arg4 semaphore:(id)arg5;
- (void)flushPlayerAction;
- (void)setVolume:(float)arg1 userInitiated:(_Bool)arg2;
- (void)setMuted:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)pauseUserInitiated:(_Bool)arg1;
- (void)playUserInitiated:(_Bool)arg1;
- (id)createPlayerLayer;
- (void)asyncLoadPlayer;
- (void)dealloc;
- (id)initWithAdView:(id)arg1 playerItemProvider:(id)arg2 visibilityMessageSource:(id)arg3 videoConfiguration:(id)arg4 loggingContextSource:(id)arg5;

@end
