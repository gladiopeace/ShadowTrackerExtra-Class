//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsDomainKVStore.h"

@class HsSQLDbHelper, NSString;

@interface HsKVStoreProvider : NSObject <HsDomainKVStore>
{
    HsSQLDbHelper *_dbHelper;
}

+ (id)createTableQueriesForDomains:(id)arg1;
+ (id)databasePath;
- (void).cxx_destruct;
- (void)removeQueryForKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (id)fetchQueryforKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (void)insertQueryWithParameters:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (void)removeItemForKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (id)objectForKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3 withError:(id *)arg4;
- (int)intValueForKey:(id)arg1 forDomain:(id)arg2 withError:(id *)arg3;
- (void)setIntValue:(int)arg1 forKey:(id)arg2 domain:(id)arg3 withError:(id *)arg4;
- (float)floatValueForKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (void)setFloatValue:(float)arg1 forKey:(id)arg2 domain:(id)arg3 withError:(id *)arg4;
- (_Bool)booleanValueForKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (void)setBooleanValue:(_Bool)arg1 forKey:(id)arg2 domain:(id)arg3 withError:(id *)arg4;
- (id)stringValueForKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (void)setStringValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3 withError:(id *)arg4;
- (long long)longValueForKey:(id)arg1 domain:(id)arg2 withError:(id *)arg3;
- (void)setLongValue:(long long)arg1 forKey:(id)arg2 domain:(id)arg3 withError:(id *)arg4;
- (void)destroyWithError:(id *)arg1;
- (void)destroyDomain:(id)arg1 withError:(id *)arg2;
- (void)recreateStoreForDomain:(id)arg1 withError:(id *)arg2;
- (id)initWithDomains:(id)arg1 withError:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
