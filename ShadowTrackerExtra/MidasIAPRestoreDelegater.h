//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MidasIAPPayDelegate-Protocol.h"

@class MidasIAPRestoreReq, NSMutableArray, NSString;

@interface MidasIAPRestoreDelegater : NSObject <MidasIAPPayDelegate>
{
    NSMutableArray *_parent;
    MidasIAPRestoreReq *_req;
}

@property(retain, nonatomic) MidasIAPRestoreReq *req; // @synthesize req=_req;
@property(nonatomic) __weak NSMutableArray *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)requestInfo;
- (void)onResp:(id)arg1;
- (void)needLogin;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

