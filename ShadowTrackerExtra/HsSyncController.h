//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsDataSyncCompletionListener-Protocol.h"
#import "HsLifeCycleListener-Protocol.h"

@class HsHTTPBackoff, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol HsKeyValueStorage, OS_dispatch_queue;

@interface HsSyncController : NSObject <HsLifeCycleListener, HsDataSyncCompletionListener>
{
    id <HsKeyValueStorage> _kvStore;
    NSMutableArray *_syncListeners;
    NSMutableDictionary *_syncSpecificationMap;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_sharedAccessQueue;
    int _applicationState;
    NSOperationQueue *_propertiesBatcherQueue;
    NSArray *_dataTypesWithChangedData;
    HsHTTPBackoff *_retryBackoff;
}

@property(retain, nonatomic) HsHTTPBackoff *retryBackoff; // @synthesize retryBackoff=_retryBackoff;
@property(retain, nonatomic) NSArray *dataTypesWithChangedData; // @synthesize dataTypesWithChangedData=_dataTypesWithChangedData;
@property(retain, nonatomic) NSOperationQueue *propertiesBatcherQueue; // @synthesize propertiesBatcherQueue=_propertiesBatcherQueue;
@property(nonatomic) int applicationState; // @synthesize applicationState=_applicationState;
- (void).cxx_destruct;
- (void)onBackground;
- (void)onForeground;
- (id)getSyncListenerForDataType:(id)arg1;
- (void)retryForDependentDataTypes:(id)arg1;
- (void)firstDeviceSyncComplete;
- (void)switchUserCompleteForUser:(id)arg1;
- (_Bool)isFullSyncSatisfied:(id)arg1;
- (_Bool)isDataTypeAllowedForImmediateSync:(id)arg1;
- (void)dataSyncFailedForDataType:(id)arg1 withStatusCode:(int)arg2;
- (void)dataSyncedForType:(id)arg1 andIsFullSync:(_Bool)arg2;
- (void)onDataChangedForDataType:(id)arg1;
- (void)setDataChangeCountForDataType:(id)arg1 to:(unsigned long long)arg2;
- (void)incrementDataChangeCountForDataType:(id)arg1 by:(unsigned long long)arg2;
- (id)getSyncInformationForDataType:(id)arg1;
- (void)addDataTypeWithChangedData:(id)arg1;
- (void)cancelBatcherJob;
- (_Bool)isLiveOperationPresentInQueue:(id)arg1;
- (void)scheduleSyncForDataType:(id)arg1 withDelay:(double)arg2;
- (void)dispatchForDataType:(id)arg1 andIsFullSync:(_Bool)arg2;
- (void)triggerSyncForDataTypes:(id)arg1 andShouldCheckSpecification:(_Bool)arg2;
- (double)getElapsedTimeSinceFullSync:(id)arg1;
- (double)getElapsedTimeSinceLastSyncForDataType:(id)arg1;
- (void)addSyncListeners:(id)arg1;
- (id)specificationForDataType:(id)arg1;
- (void)addSpecification:(id)arg1;
- (void)initialiseSyncSpecifications:(id)arg1;
- (void)initialiseSyncListners;
- (id)initWithKeyValueStorage:(id)arg1 andSpecifications:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

