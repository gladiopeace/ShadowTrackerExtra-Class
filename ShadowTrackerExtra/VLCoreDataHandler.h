//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSString;

@interface VLCoreDataHandler : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSString *_userID;
    long long _maxIndex;
}

+ (void)resignInstance;
+ (void)createInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)currentInstance;
@property(nonatomic) long long maxIndex; // @synthesize maxIndex=_maxIndex;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (void)deleteMessages:(id)arg1;
- (void)updatePackage:(id)arg1 groupId:(id)arg2 name:(id)arg3;
- (id)fetchMessagesLimit:(long long)arg1 before:(id)arg2;
- (long long)fetchMaxIndex;
- (void)insertUserMessage:(id)arg1;
- (void)insertMessage:(id)arg1;
- (void)clearCache;
- (void)save;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

