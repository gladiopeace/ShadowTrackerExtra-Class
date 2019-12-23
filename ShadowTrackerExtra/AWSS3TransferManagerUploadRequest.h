//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSS3PutObjectRequest.h"

@class AWSS3UploadPartRequest, NSMutableArray, NSString, NSURL;

@interface AWSS3TransferManagerUploadRequest : AWSS3PutObjectRequest
{
    long long _state;
    unsigned long long _currentUploadingPartNumber;
    NSMutableArray *_completedPartsArray;
    NSString *_uploadId;
    NSString *_cacheIdentifier;
    AWSS3UploadPartRequest *_currentUploadingPart;
    long long _totalSuccessfullySentPartsDataLength;
}

@property long long totalSuccessfullySentPartsDataLength; // @synthesize totalSuccessfullySentPartsDataLength=_totalSuccessfullySentPartsDataLength;
@property(retain) AWSS3UploadPartRequest *currentUploadingPart; // @synthesize currentUploadingPart=_currentUploadingPart;
@property(retain, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSMutableArray *completedPartsArray; // @synthesize completedPartsArray=_completedPartsArray;
@property(nonatomic) unsigned long long currentUploadingPartNumber; // @synthesize currentUploadingPartNumber=_currentUploadingPartNumber;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)pause;
- (id)cancel;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSURL *body; // @dynamic body;

@end
