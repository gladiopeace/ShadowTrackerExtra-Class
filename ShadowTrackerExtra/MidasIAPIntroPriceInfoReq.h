//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MidasIAPBaseReq.h"

@class NSMutableArray;

@interface MidasIAPIntroPriceInfoReq : MidasIAPBaseReq
{
    _Bool _fromApple;
    NSMutableArray *_introPriceProuctIds;
}

@property(nonatomic) _Bool fromApple; // @synthesize fromApple=_fromApple;
@property(retain, nonatomic) NSMutableArray *introPriceProuctIds; // @synthesize introPriceProuctIds=_introPriceProuctIds;
- (void).cxx_destruct;
- (_Bool)validateParams;
- (id)init;

@end
