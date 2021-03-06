//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSEImageDownloader-Protocol.h"
#import "TWTRImageLoader-Protocol.h"

@class NSString, NSURLSession;
@protocol OS_dispatch_queue, TWTRImageLoaderCache, TWTRImageLoaderTaskManager;

@interface TWTRImageLoader : NSObject <TWTRImageLoader, TSEImageDownloader>
{
    NSURLSession *_URLSession;
    id <TWTRImageLoaderCache> _cache;
    id <TWTRImageLoaderTaskManager> _taskManager;
    NSObject<OS_dispatch_queue> *_privateConcurrentQueue;
}

+ (id)generateRequestID;
+ (id)localizedErrorFromResponse:(id)arg1 networkError:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *privateConcurrentQueue; // @synthesize privateConcurrentQueue=_privateConcurrentQueue;
@property(readonly, nonatomic) id <TWTRImageLoaderTaskManager> taskManager; // @synthesize taskManager=_taskManager;
@property(readonly, nonatomic) id <TWTRImageLoaderCache> cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (void).cxx_destruct;
- (void)cancelImageDownloadWithToken:(id)arg1;
- (id)downloadImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)backfillCacheOnFetchCompletionWithImageKey:(id)arg1 postBackfillCompletion:(CDUnknownBlockType)arg2;
- (void)fetchImageWithImageURL:(id)arg1 requestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchCachedImageWithImageKey:(id)arg1 cacheHitCompletion:(CDUnknownBlockType)arg2 cacheMissCompletion:(CDUnknownBlockType)arg3;
- (void)cancelImageWithRequestID:(id)arg1;
- (id)fetchImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1 cache:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

