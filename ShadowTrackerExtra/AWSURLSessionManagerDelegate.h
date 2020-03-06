//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSNetworkingRequest, AWSTaskCompletionSource, NSError, NSFileHandle, NSMutableData, NSURL;

@interface AWSURLSessionManagerDelegate : NSObject
{
    _Bool _shouldWriteDirectly;
    _Bool _shouldWriteToFile;
    unsigned int _currentRetryCount;
    long long _taskType;
    AWSTaskCompletionSource *_taskCompletionSource;
    AWSNetworkingRequest *_request;
    NSURL *_uploadingFileURL;
    NSURL *_downloadingFileURL;
    NSError *_error;
    id _responseObject;
    NSMutableData *_responseData;
    NSFileHandle *_responseFilehandle;
    NSURL *_tempDownloadedFileURL;
    long long _lastTotalLengthOfChunkSignatureSent;
    long long _payloadTotalBytesWritten;
}

@property long long payloadTotalBytesWritten; // @synthesize payloadTotalBytesWritten=_payloadTotalBytesWritten;
@property long long lastTotalLengthOfChunkSignatureSent; // @synthesize lastTotalLengthOfChunkSignatureSent=_lastTotalLengthOfChunkSignatureSent;
@property(nonatomic) _Bool shouldWriteToFile; // @synthesize shouldWriteToFile=_shouldWriteToFile;
@property(nonatomic) _Bool shouldWriteDirectly; // @synthesize shouldWriteDirectly=_shouldWriteDirectly;
@property(retain, nonatomic) NSURL *tempDownloadedFileURL; // @synthesize tempDownloadedFileURL=_tempDownloadedFileURL;
@property(retain, nonatomic) NSFileHandle *responseFilehandle; // @synthesize responseFilehandle=_responseFilehandle;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned int currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property(retain, nonatomic) NSURL *downloadingFileURL; // @synthesize downloadingFileURL=_downloadingFileURL;
@property(retain, nonatomic) NSURL *uploadingFileURL; // @synthesize uploadingFileURL=_uploadingFileURL;
@property(retain, nonatomic) AWSNetworkingRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) AWSTaskCompletionSource *taskCompletionSource; // @synthesize taskCompletionSource=_taskCompletionSource;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void).cxx_destruct;
- (id)init;

@end

