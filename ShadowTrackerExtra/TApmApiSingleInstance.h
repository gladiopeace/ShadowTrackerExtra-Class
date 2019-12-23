//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, TApmStreamEventCommitter;

@interface TApmApiSingleInstance : NSObject
{
    struct MsgQueue *_uploadCacheFileMsgQueue;
    NSObject<OS_dispatch_semaphore> *_beginUploadSemaphore;
    _Bool _isInitContext;
    const char *_userID;
    unsigned long long _currenLevelState;
    unsigned long long _currentTagState;
    const char *_sceneName;
    struct MsgQueue *_distanceMsgQueue;
    struct MsgQueue *_latencyMsgQueue;
    struct MsgQueue *_eventMsgQueue;
    struct MsgQueue *_networkStatMsgQueue;
    struct MsgQueue *_levelMsgQueue;
    struct MsgQueue *_frameMsgQueue;
    struct MsgQueue *_cacheFileMsgQueue;
    struct MsgQueue *_appStateMsgQueue;
    struct MsgQueue *_qualityMsgQueue;
    struct MsgQueue *_deviceLevelMsgQueue;
    _Bool _isWriteUserIDToCache;
    _Bool _isWriteVersionToCache;
    _Bool _isWriteLocalToCache;
    _Bool _isWriteIPCUUID;
    NSObject<OS_dispatch_semaphore> *_markLevelsemaphore;
    id _enterBkgroundObserver;
    id _enterForegroundObserver;
    unsigned long long _appState;
    int _currentQuality;
    int _currentDeviceLevel;
    _Bool _isSetQuality;
    _Bool _isSetDeviceLevel;
    struct TApmStreamEventHandler *_sStreamEventHandlerPtr;
    long long _tLauchTime;
    int _stepId;
    struct FrameStateJudger *_sFrameStateJudgerPtr;
    struct SDKStack<_tagElement> *_tagStack;
    struct _MsgQueueBody _frameQueueBody;
    struct MsgQueue<_excludeInfo> *_sExcludeRequestQueuePtr;
    _Bool _isStreamEventComp;
    unsigned int _lastFrameTimeStamp;
    unsigned int _markLoadLevelTimeStamp;
    unsigned int _markLoadLevelFinTimeStamp;
    unsigned int _totalLevelFrames;
    _Bool _enableCollectFromCDN;
    _Bool _isTimeThreadExit;
    unsigned int _frequency;
    NSMutableArray *_collectionObjs;
    NSString *_appid;
    NSString *_tagName;
    NSString *_ipcUUID;
    TApmStreamEventCommitter *_streamEventCommitter;
    NSMutableDictionary *_sceneMeanFps;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *sceneMeanFps; // @synthesize sceneMeanFps=_sceneMeanFps;
@property(nonatomic) _Bool isTimeThreadExit; // @synthesize isTimeThreadExit=_isTimeThreadExit;
@property(retain, nonatomic) TApmStreamEventCommitter *streamEventCommitter; // @synthesize streamEventCommitter=_streamEventCommitter;
@property(copy, nonatomic) NSString *ipcUUID; // @synthesize ipcUUID=_ipcUUID;
@property(nonatomic) unsigned int frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSMutableArray *collectionObjs; // @synthesize collectionObjs=_collectionObjs;
@property(nonatomic) _Bool enableCollectFromCDN; // @synthesize enableCollectFromCDN=_enableCollectFromCDN;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getCurrentAppInfo;
- (void)removeAllResouceAndOjbects;
- (void)performCollectionElement:(SEL)arg1;
- (void)markLevelFin;
- (void)markLoadlevelCompleted;
- (void)markLoadlevel:(const char *)arg1;
- (void)iterateFromeQueue:(short)arg1;
- (void)startUploadThread;
- (void)startWorkThread;
- (void)safeFreeScene:(struct _Scene *)arg1;
- (void)pushMessageToGloabelBufferQueueAndSafeFree:(struct _Scene *)arg1 forceWriteToFile:(_Bool)arg2;
- (struct _Scene *)createSceneFlag:(BOOL)arg1 sceneIndex:(short)arg2 sceneType:(short)arg3;
- (void)postNetworkStatusFlag:(BOOL)arg1 status:(short)arg2;
- (void)endTag;
- (void)beginTag:(id)arg1;
- (void)postCoordinate:(int)arg1 y:(int)arg2 z:(int)arg3 pitch:(int)arg4 yaw:(int)arg5 roll:(int)arg6;
- (void)postStepEvent:(const char *)arg1 stepId:(int)arg2 status:(int)arg3 code:(int)arg4 msg:(const char *)arg5 extDefineKey:(const char *)arg6;
- (void)linkStreamEventSession:(id)arg1;
- (void)postAppState:(unsigned long long)arg1;
- (void)postFrame:(float)arg1;
- (void)postLagStatus:(int)arg1;
- (void)postNTL:(int)arg1;
- (void)postEvent:(unsigned int)arg1 info:(const char *)arg2;
- (_Bool)isCurrentLevelDataValid;
- (void)setVersionIden:(id)arg1;
- (void)setAPPID:(id)arg1;
- (void)setLocal:(id)arg1;
- (void)setUserID:(const char *)arg1;
- (void)setDeviceLevel:(int)arg1;
- (void)setQuality:(int)arg1;
- (int)getSceneMaxPss;
- (float)getSceneMeanFps:(id)arg1;
- (float)calculateMeanFps:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3;
- (float)getInstantFps;
- (void)endExclude;
- (void)beginExclude;
- (void)createWorkThread;
- (void)dealLocalCacheFile;
- (void)getRandFromCDNServer;
- (_Bool)faultTolerantForModel:(id)arg1 modelWhite:(id)arg2;
- (int)getDeviceLevel:(id)arg1 configLevel:(id)arg2;
- (int)getDeviceLevel:(id)arg1;
- (void)postErrorStr:(id)arg1 errorDes:(id)arg2;
- (void)postErrorStr:(id)arg1;
- (void)enableTrackState;
- (void)invokeBuggly;
- (void)releaseStepEventContext;
- (void)initStepEventContext;
- (void)initData;
- (void)initContext:(id)arg1;
- (id)init;

@end
