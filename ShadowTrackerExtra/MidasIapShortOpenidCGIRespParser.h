//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidasIAPCommonCGIRespParser.h"

@class MidasKeyStore;
@protocol MidasIAPOperationProtocol;

@interface MidasIapShortOpenidCGIRespParser : MidasIAPCommonCGIRespParser
{
    MidasKeyStore *_keyStore;
    id <MidasIAPOperationProtocol> _op;
}

- (void).cxx_destruct;
- (void)parse;
- (void)dealloc;
- (id)initWithJSONDict:(id)arg1 keyStore:(id)arg2 op:(id)arg3;

@end

