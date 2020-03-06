//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HSResourceCache-Protocol.h"

@class HSDiskFileManager, NSString;

@interface HSDiskUserWebResourceCache : NSObject <HSResourceCache>
{
    HSDiskFileManager *_diskfileManager;
    CDUnknownBlockType _diskCachePathClosure;
    CDUnknownBlockType _resourceExtensionClosure;
}

@property(copy, nonatomic) CDUnknownBlockType resourceExtensionClosure; // @synthesize resourceExtensionClosure=_resourceExtensionClosure;
@property(copy, nonatomic) CDUnknownBlockType diskCachePathClosure; // @synthesize diskCachePathClosure=_diskCachePathClosure;
@property(retain, nonatomic) HSDiskFileManager *diskfileManager; // @synthesize diskfileManager=_diskfileManager;
- (void).cxx_destruct;
- (id)resourceNameFromWebURLString:(id)arg1 error:(id *)arg2;
- (id)getDiskPathFromInfo:(id)arg1 error:(id *)arg2;
- (id)appendDirectoryName:(id)arg1 toPath:(id)arg2;
- (_Bool)removeAllResourcesWithAdditionalInfo:(id)arg1;
- (_Bool)removeResourceForKey:(id)arg1 additionalInfo:(id)arg2;
- (id)resourceForKey:(id)arg1 additionalInfo:(id)arg2;
- (id)addResource:(id)arg1 forKey:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithCachePathClosure:(CDUnknownBlockType)arg1 extensionClosure:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

