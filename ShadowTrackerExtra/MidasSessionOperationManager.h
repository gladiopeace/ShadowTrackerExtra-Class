//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasAFHTTPSessionManager, NSOperationQueue;

@interface MidasSessionOperationManager : NSObject
{
    NSOperationQueue *_operationQueue;
    MidasAFHTTPSessionManager *_sessionManager;
}

+ (id)manager;
@property(retain, nonatomic) MidasAFHTTPSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

@end
