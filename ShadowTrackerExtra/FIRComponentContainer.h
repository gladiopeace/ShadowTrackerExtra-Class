//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRApp, NSMutableDictionary;

@interface FIRComponentContainer : NSObject
{
    FIRApp *_app;
    NSMutableDictionary *_components;
    NSMutableDictionary *_cachedInstances;
}

+ (void)registerAsComponentRegistrant:(Class)arg1 inSet:(id)arg2;
+ (void)registerAsComponentRegistrant:(Class)arg1;
@property(retain, nonatomic) NSMutableDictionary *cachedInstances; // @synthesize cachedInstances=_cachedInstances;
@property(retain, nonatomic) NSMutableDictionary *components; // @synthesize components=_components;
@property(readonly, nonatomic) __weak FIRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)removeAllCachedInstances;
- (id)instanceForProtocol:(id)arg1;
- (id)instantiateInstanceForProtocol:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)populateComponentsFromRegisteredClasses:(id)arg1 forApp:(id)arg2;
- (id)initWithApp:(id)arg1 registrants:(id)arg2;
- (id)initWithApp:(id)arg1;

@end

