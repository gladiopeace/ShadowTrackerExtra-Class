//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, SKProductsRequest;

@interface MidasIAPCacheReq : NSObject
{
    SKProductsRequest *_req;
    NSSet *_keys;
}

@property(retain, nonatomic) NSSet *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) SKProductsRequest *req; // @synthesize req=_req;
- (void).cxx_destruct;

@end
