//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GVGCloudVoiceExtension.h"

@protocol GVGCloudVoiceDelegate;

@interface GVGCloudVoice : GVGCloudVoiceExtension
{
    id <GVGCloudVoiceDelegate> _delegate;
}

+ (id)sharedInstance;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (int)speechToText:(const char *)arg1 timeout:(int)arg2 language:(int)arg3;
- (int)stopPlayFile;
- (int)playRecordedFile:(const char *)arg1;
- (int)downloadRecordedFile:(const char *)arg1 filePath:(const char *)arg2 timeout:(int)arg3;
- (int)uploadRecordedFile:(const char *)arg1 timeout:(int)arg2;
- (int)stopRecording;
- (int)startRecording:(const char *)arg1;
- (int)setMaxMessageLength:(int)arg1;
- (int)applyMessageKey:(int)arg1;
- (int)closeSpeaker;
- (int)openSpeaker;
- (int)closeMic;
- (int)openMic;
- (int)quitRoom:(const char *)arg1 timeout:(int)arg2;
- (int)ChangeRole:(int)arg1;
- (int)ChangeRole:(int)arg1 inRoom:(const char *)arg2;
- (int)joinNationalRoom:(const char *)arg1 role:(int)arg2 timeout:(int)arg3;
- (int)updateCoordinate:(const char *)arg1 x:(long long)arg2 y:(long long)arg3 z:(long long)arg4 r:(long long)arg5;
- (int)joinRangeRoom:(const char *)arg1 timeout:(int)arg2;
- (int)joinTeamRoom:(const char *)arg1 timeout:(int)arg2;
- (int)resume;
- (int)pause;
- (int)poll;
- (int)setMode:(int)arg1;
- (int)initEngine;
- (int)setAppInfo:(const char *)arg1 withKey:(const char *)arg2 andOpenID:(const char *)arg3;

@end

