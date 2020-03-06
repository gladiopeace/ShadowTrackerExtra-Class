//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFAssetEventListener-Protocol.h"
#import "FNFPlayerDisplayEngineDelegate-Protocol.h"

@class NSError;
@protocol FNFAssetForPlayer, FNFClock, FNFPlayerAudioDecoder, FNFPlayerAudioEngine, FNFPlayerCaptionParser, FNFPlayerDisplayEngine, FNFPlayerLiveTraceManager, FNFSynchronousPlayerDelegate, OS_dispatch_queue;

@interface FNFSynchronousPlayer : NSObject <FNFPlayerDisplayEngineDelegate, FNFAssetEventListener>
{
    id <FNFAssetForPlayer> _playerAsset;
    id <FNFPlayerAudioEngine> _audioEngine;
    id <FNFPlayerAudioDecoder> _audioDecoder;
    id <FNFPlayerDisplayEngine> _displayEngine;
    id <FNFClock> _clock;
    id <FNFPlayerCaptionParser> _captionParser;
    id <FNFPlayerLiveTraceManager> _liveTraceManager;
    NSObject<OS_dispatch_queue> *_runningQueue;
    struct FNFPlayerInternalState _playerInternalState;
    NSError *_playerError;
    float _volume;
    float _volumeRampTime;
    CDUnknownBlockType _audioLevelCallback;
    CDUnknownBlockType _representationChangedCallback;
    _Bool _endFrameSeekIfNoMoreFrames;
    _Bool _useLastCallbackInBackToBackFrameSeek;
    _Bool _flushAudioQueueOnPause;
    _Bool _enableASRCaptions;
    _Bool _isDurationIndefinite;
    _Bool _playbackAVSyncEarlyAudioSetup;
    unsigned int _minSampleAudioFrameSize;
    _Bool _checkActiveBeforeStallResume;
    _Bool _useStateUpdateForSetRateChanges;
    id <FNFSynchronousPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <FNFSynchronousPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)playerItemDidFail:(id)arg1;
- (void)playbackDidUndry;
- (void)playbackDidDryOut;
- (void)playerItemDidWarn:(id)arg1;
- (void)durationChanged:(CDStruct_1b6d18a9)arg1;
- (void)timeLoadedChanged:(id)arg1;
- (void)displayEngineDidLayoutSubLayers:(struct CGRect)arg1;
- (void)displayEngineIsReadyForDisplay:(_Bool)arg1;
- (void)displayEngineStartedToDisplayFrameAt:(CDStruct_1b6d18a9)arg1;
- (void)displayEngineUpdatedWithError:(id)arg1;
- (id)callbackQueueForDisplayEngineDelegate;
- (void)_resetStallState;
- (void)invalidate;
- (long long)status;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)_setupLayer;
- (void)_audioDecoderErrorCallback:(id)arg1;
- (void)_audioEngineErrorCallback:(id)arg1;
- (_Bool)_readyToPlay;
- (void)_syncVolume;
- (void)_updateStatus:(long long)arg1;
- (void)_enqueueBuffer;
- (void)_startVideo;
- (void)_setupAudio;
- (_Bool)_videoIsAudioActive;
- (_Bool)_videoHasAudioTrack;
- (void)_checkIfRepresentationChanged;
- (void)_videoLayerEnqueueDecompressedFrameCallback;
- (void)_videoLayerEnqueueFrameCallback;
- (void)_markDisplayImmediately:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)_canParseCaptions;
- (_Bool)_audioPutDataIntoBufferCallback:(struct AudioQueueBuffer *)arg1 timestamp:(struct AudioTimeStamp *)arg2 framePts:(CDStruct_1b6d18a9 *)arg3 isfirstPacket:(_Bool *)arg4;
- (void)_adjustAudioFrameToCurrentPlaybackTime;
- (_Bool)_audioBufferLengthIsGreaterThan:(CDStruct_1b6d18a9)arg1;
- (_Bool)_videoBufferLengthIsGreaterThan:(CDStruct_1b6d18a9)arg1;
- (_Bool)_enqueuedTime:(CDStruct_1b6d18a9)arg1 isGreaterThanLength:(CDStruct_1b6d18a9)arg2;
- (void)_playbackTimeListenerForAsset:(CDStruct_1b6d18a9)arg1;
- (void)_playbackFinishedTimeForAsset:(CDStruct_1b6d18a9)arg1;
- (void)_flushSampleBuffersDuringFrameSeekWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_addSampleBufferFlushTimerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_addStallTimer;
- (id)_addSeekFrameUpdateTimer;
- (id)_addDurationTimerForAsset;
- (id)_addPlaybackTimerForAsset;
- (void)_startStalling:(_Bool)arg1;
- (void)_updateFrameAfterSeek;
- (void)_manageStallStateWithDidStartPlaying:(_Bool)arg1;
- (void)_updateTimersOnPause;
- (void)_resumePlayback;
- (void)_pausePlayback:(int)arg1;
- (void)_reenableLevelMeteringIfNeeded;
- (void)_levelMeterCallback;
- (_Bool)_isScreenCapturedForProtectedContent;
- (_Bool)_isHDMIConnectedForProtectedContent;
- (_Bool)_isPlayRestricted;
- (void)didChangeScreenCaptured;
- (void)didDisconnectWithExternalScreen;
- (void)didConnectWithExternalScreen;
- (void)addRepresentationChangedCallback:(CDUnknownBlockType)arg1;
- (void)removeLevelMeterCallback;
- (void)addLevelMeterCallback:(CDUnknownBlockType)arg1 timeInterval:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)lastRequestedStartTime;
- (CDStruct_1b6d18a9)lastStartingTime;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)_handleSeekCancellation;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1 frameSeekOn:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)prepareToSeekWithTime:(CDStruct_1b6d18a9)arg1;
- (id)error;
- (CDStruct_1b6d18a9)currentTime;
- (void)_syncAudioEngineWithClock;
- (void)setRate:(float)arg1;
- (float)rate;
- (id)currentItem;
- (void)removeTimeObserver:(id)arg1;
- (void)addTimeObserver:(id)arg1;
- (id)createPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 followMasterClock:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1 loggingContext:(id)arg2;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setLiveTraceManager:(id)arg1;
- (void)setAudioDecoder:(id)arg1;
- (void)setAudioEngine:(id)arg1;
- (void)setCaptionParser:(id)arg1;
- (void)_pause:(int)arg1;
- (void)pause;
- (void)play;
- (id)description;
- (id)initWithDisplayEngine:(id)arg1 config:(CDStruct_b6a585cb)arg2 audioEngine:(id)arg3 audioDecoder:(id)arg4 clock:(id)arg5 runningQueue:(id)arg6 muted:(_Bool)arg7 asyncTimebase:(_Bool)arg8;
- (void)dealloc;

@end

