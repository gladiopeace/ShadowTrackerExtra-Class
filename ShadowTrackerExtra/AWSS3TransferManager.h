//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSService.h"

@class AWSS3, AWSTMCache;

@interface AWSS3TransferManager : AWSService
{
    AWSS3 *_s3;
    AWSTMCache *_cache;
}

+ (void)removeS3TransferManagerForKey:(id)arg1;
+ (id)S3TransferManagerForKey:(id)arg1;
+ (void)registerS3TransferManagerWithConfiguration:(id)arg1 forKey:(id)arg2;
+ (id)defaultS3TransferManager;
@property(retain, nonatomic) AWSTMCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) AWSS3 *s3; // @synthesize s3=_s3;
- (void).cxx_destruct;
- (void)abortMultipartUploadsForRequest:(id)arg1;
- (id)clearCache;
- (id)resumeAll:(CDUnknownBlockType)arg1;
- (id)pauseAll;
- (id)cancelAll;
- (id)getObject:(id)arg1 cacheKey:(id)arg2;
- (id)download:(id)arg1 cacheKey:(id)arg2;
- (id)download:(id)arg1;
- (id)multipartUpload:(id)arg1 fileSize:(unsigned long long)arg2 cacheKey:(id)arg3;
- (id)putObject:(id)arg1 fileSize:(unsigned long long)arg2 cacheKey:(id)arg3;
- (id)upload:(id)arg1 cacheKey:(id)arg2;
- (id)upload:(id)arg1;
- (id)initWithConfiguration:(id)arg1 cacheName:(id)arg2;
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2;
- (id)init;

@end

