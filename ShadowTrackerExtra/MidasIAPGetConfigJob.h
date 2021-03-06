//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidasIAPConcurrentJob.h"

@class MidasCommunicator, NSDictionary, NSString;
@protocol MidasIAPOperationProtocol;

@interface MidasIAPGetConfigJob : MidasIAPConcurrentJob
{
    MidasCommunicator *_comm;
    _Bool _netError;
    id <MidasIAPOperationProtocol> _operation;
    long long _ret;
    NSString *_inner;
    NSString *_msg;
    NSDictionary *_content;
}

@property(copy, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(nonatomic) _Bool netError; // @synthesize netError=_netError;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *inner; // @synthesize inner=_inner;
@property(nonatomic) long long ret; // @synthesize ret=_ret;
@property(nonatomic) __weak id <MidasIAPOperationProtocol> operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)jobMainProc;
- (void)stop;
- (void)start;
- (void)dealloc;

@end

