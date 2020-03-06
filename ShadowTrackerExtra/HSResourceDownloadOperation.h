//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HSDownloadSessionManager, NSURL, NSURLSessionDownloadTask;

@interface HSResourceDownloadOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    NSURL *_downloadUrl;
    NSURLSessionDownloadTask *_downloadTask;
    HSDownloadSessionManager *_sessionManager;
    CDUnknownBlockType _downloadCompletionBlock;
    CDUnknownBlockType _progressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(retain, nonatomic) HSDownloadSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSURL *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)reset;
- (void)done;
- (void)cancelInternal;
- (void)cancel;
- (void)start;
- (void)addHandlerWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 sessionManager:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

